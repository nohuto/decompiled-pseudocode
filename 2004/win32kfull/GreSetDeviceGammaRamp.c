/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C00525A8
 * Callers:
 *     FadeDesktop @ 0x1C00523A0 (FadeDesktop.c)
 *     RestoreGammaRamp @ 0x1C0053780 (RestoreGammaRamp.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B71B0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00177B4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C0052754 (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0075A3C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, void *a2, int a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ecx
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  int v13; // [rsp+40h] [rbp-88h]
  int v14; // [rsp+44h] [rbp-84h]
  unsigned int v15; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v16[4]; // [rsp+4Ch] [rbp-7Ch] BYREF
  _DWORD v17[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v18; // [rsp+58h] [rbp-70h]
  __int64 v19; // [rsp+68h] [rbp-60h]
  __int64 v20; // [rsp+70h] [rbp-58h]
  int v21; // [rsp+78h] [rbp-50h]
  int v22; // [rsp+7Ch] [rbp-4Ch]
  int v23; // [rsp+80h] [rbp-48h]
  int v24; // [rsp+84h] [rbp-44h]
  unsigned int v25; // [rsp+88h] [rbp-40h]
  int v26; // [rsp+8Ch] [rbp-3Ch]

  v7 = 0;
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v12, a1);
  if ( v12 )
  {
    if ( !*(_DWORD *)(v12 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v17, (struct XDCOBJ *)&v12);
      v7 = GreSetDeviceGammaRampInternal(*(HDEV *)(v12 + 48), a2, a3, a4, (enum _SETGAMMARAMP_FAILED_REASON *)v16, &v15);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( CurrentProcessWin32Process )
  {
    v10 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v10 & 1) == 0 )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 288) = v10 | 1;
      v22 = 0;
      v17[0] = 6;
      v17[1] = 64;
      v21 = 0;
      v20 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v23 = 94;
      v24 = 2;
      v25 = v7 == 0 ? 0xC0000001 : 0;
      v26 = 0;
      DrvDxgkWriteDiagEntry(v17);
    }
  }
  if ( !v7 )
    EngSetLastError(0x57u);
  return v7;
}
