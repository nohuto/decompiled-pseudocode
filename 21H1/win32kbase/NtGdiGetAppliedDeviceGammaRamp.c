/*
 * XREFs of NtGdiGetAppliedDeviceGammaRamp @ 0x1C0152990
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00433F0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074A78 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C33C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C01524BC (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  _BYTE *v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  int v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+2Ch] [rbp-6Ch]
  _BYTE v20[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+10h] BYREF
  _WORD *v22; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  if ( !a2 )
  {
    v5 = 87;
LABEL_3:
    EngSetLastError(v5);
    return 0LL;
  }
  v7 = PALLOCMEM2(0x600uLL, 0x706D7447u, 0);
  v22 = v7;
  if ( !v7 )
  {
    v5 = 14;
    goto LABEL_3;
  }
  v18 = 0;
  v19 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v17, a1);
  v8 = v17;
  if ( v17 )
  {
    if ( *(_DWORD *)(v17 + 32) )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      v4 = 1;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v20, (struct XDCOBJ *)&v17, v9);
      v10 = *(_QWORD *)(v8 + 48);
      v21 = v10;
      if ( *(_QWORD *)(v10 + 1696) || *(_QWORD *)(v10 + 1688) )
      {
        AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&v21);
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
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v17);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  if ( v4 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v16 = (_BYTE *)MmUserProbeAddress;
    *v16 = *v16;
    v16[1535] = v16[1535];
    memmove(a2, v7, 0x600uLL);
  }
  Win32FreePool((__int64)v7, v14, v15);
  return v4;
}
