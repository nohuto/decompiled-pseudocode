/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C0029BA8
 * Callers:
 *     FadeDesktop @ 0x1C00299A0 (FadeDesktop.c)
 *     RestoreGammaRamp @ 0x1C0114ED0 (RestoreGammaRamp.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B5C30 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C0029D54 (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C7C4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, void *a2, int a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v12; // ecx
  __int64 v14; // [rsp+38h] [rbp-90h] BYREF
  int v15; // [rsp+40h] [rbp-88h]
  int v16; // [rsp+44h] [rbp-84h]
  unsigned int v17; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v18[4]; // [rsp+4Ch] [rbp-7Ch] BYREF
  _DWORD v19[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v20; // [rsp+58h] [rbp-70h]
  __int64 v21; // [rsp+68h] [rbp-60h]
  __int64 v22; // [rsp+70h] [rbp-58h]
  int v23; // [rsp+78h] [rbp-50h]
  int v24; // [rsp+7Ch] [rbp-4Ch]
  int v25; // [rsp+80h] [rbp-48h]
  int v26; // [rsp+84h] [rbp-44h]
  unsigned int v27; // [rsp+88h] [rbp-40h]
  int v28; // [rsp+8Ch] [rbp-3Ch]

  v7 = 0;
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  if ( v14 )
  {
    if ( !*(_DWORD *)(v14 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v19, (struct XDCOBJ *)&v14);
      v7 = GreSetDeviceGammaRampInternal(*(HDEV *)(v14 + 48), a2, a3, a4, (enum _SETGAMMARAMP_FAILED_REASON *)v18, &v17);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v19);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10);
  if ( CurrentProcessWin32Process )
  {
    v12 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v12 & 1) == 0 )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 288) = v12 | 1;
      v24 = 0;
      v19[0] = 6;
      v19[1] = 64;
      v23 = 0;
      v22 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      v25 = 94;
      v26 = 2;
      v27 = v7 == 0 ? 0xC0000001 : 0;
      v28 = 0;
      DrvDxgkWriteDiagEntry(v19);
    }
  }
  if ( !v7 )
    EngSetLastError(0x57u);
  return v7;
}
