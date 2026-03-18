/*
 * XREFs of NtGdiGetAppliedDeviceGammaRamp @ 0x1C014C640
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0050E50 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C007BE98 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A58A8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C014C16C (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
 */

__int64 __fastcall NtGdiGetAppliedDeviceGammaRamp(HDC a1, _BYTE *a2)
{
  unsigned int v4; // edi
  ULONG v5; // ecx
  _WORD *v7; // rbx
  __int64 v8; // rsi
  int v9; // r8d
  __int64 v10; // rax
  _WORD *v11; // rcx
  unsigned int i; // edx
  const void *AppliedGammaRampTable; // rax
  _BYTE *v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  int v16; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+2Ch] [rbp-6Ch]
  _BYTE v18[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+10h] BYREF
  _WORD *v20; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  if ( !a2 )
  {
    v5 = 87;
LABEL_3:
    EngSetLastError(v5);
    return 0LL;
  }
  v7 = PALLOCMEM2(0x600uLL, 0x706D7447u, 0);
  v20 = v7;
  if ( !v7 )
  {
    v5 = 14;
    goto LABEL_3;
  }
  v16 = 0;
  v17 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v15, a1);
  v8 = v15;
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 32) )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      v4 = 1;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v18, (struct XDCOBJ *)&v15, v9);
      v10 = *(_QWORD *)(v8 + 48);
      v19 = v10;
      if ( *(_QWORD *)(v10 + 1696) || *(_QWORD *)(v10 + 1688) )
      {
        AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&v19);
        memmove(v7, AppliedGammaRampTable, 0x600uLL);
      }
      else
      {
        v11 = v7 + 256;
        for ( i = 0; i < 0x100; ++i )
        {
          v11[256] = (_WORD)i << 8;
          *v11 = (_WORD)i << 8;
          *(v11 - 256) = (_WORD)i << 8;
          ++v11;
        }
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v15);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  if ( v4 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[1535] = v14[1535];
    memmove(a2, v7, 0x600uLL);
  }
  Win32FreePool((__int64)v7);
  return v4;
}
