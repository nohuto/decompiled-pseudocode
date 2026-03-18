/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C000D280
 * Callers:
 *     <none>
 * Callees:
 *     _QdcSdcTranslateStatusDefault @ 0x1C000DD14 (_QdcSdcTranslateStatusDefault.c)
 *     DrvQueryDisplayConfig @ 0x1C000DE40 (DrvQueryDisplayConfig.c)
 *     DrvSampleDisplayState @ 0x1C000DFC0 (DrvSampleDisplayState.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        int *a4,
        _DWORD *Address)
{
  const void *v9; // rsi
  ULONG64 v10; // rcx
  _DWORD *v11; // rdx
  __int64 CurrentProcessWow64Process; // rax
  int v13; // r15d
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned int v19; // [rsp+20h] [rbp-98h] BYREF
  int v20; // [rsp+24h] [rbp-94h]
  int v21; // [rsp+28h] [rbp-90h] BYREF
  const void *v22; // [rsp+30h] [rbp-88h]
  __int64 v23; // [rsp+48h] [rbp-70h] BYREF
  int v24; // [rsp+50h] [rbp-68h]
  __int128 v25; // [rsp+60h] [rbp-58h] BYREF
  __int64 v26; // [rsp+70h] [rbp-48h]

  v9 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v19 = 0;
  v21 = -1;
  v23 = 0LL;
  v24 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( !gbVideoInitialized )
  {
    v15 = -1073741823;
    goto LABEL_30;
  }
  if ( (a1 & 0xFFFFFFC8) != 0 || (v10 = a1 & 7, (((_DWORD)v10 - 1) & 0xFFFFFFFC) != 0) || (_DWORD)v10 == 3 )
  {
    v15 = -1073741811;
    goto LABEL_30;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = MmUserProbeAddress;
  v11 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = *v11;
  v19 = *a2;
  if ( v19 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v19, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (const void *)Win32AllocPoolWithQuotaZInit(200LL * v19);
    v22 = v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    if ( qword_1C024FEC0 )
      qword_1C024FEC0(v9, &v25, Win32FreePool);
    v13 = a1 & 4;
    if ( (a1 & 4) != 0 )
    {
      ProbeForWrite(a4, 4uLL, 4u);
    }
    else if ( a4 )
    {
      v15 = -1073741811;
      v20 = -1073741811;
      goto LABEL_30;
    }
    if ( Address )
    {
      v14 = PsGetCurrentProcessWow64Process(v10);
      ProbeForWrite(Address, 0xCuLL, v14 != 0 ? 1 : 4);
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( Address )
        DrvSampleDisplayState(&v23);
      v16 = DrvQueryDisplayConfig(a1, &v19, v9, &v21);
      v15 = v16;
      v20 = v16;
      if ( v16 == -2147483643 )
      {
        v15 = -1073741789;
        v20 = -1073741789;
      }
      else if ( v16 != -1073741789 )
      {
        v15 = QdcSdcTranslateStatusDefault(v16);
        v20 = v15;
      }
      v17 = v19;
      memmove((void *)a3, v9, 200LL * v19);
      *a2 = v17;
      if ( v13 )
        *a4 = v21;
      if ( Address )
      {
        *(_QWORD *)Address = v23;
        Address[2] = v24;
      }
    }
    else
    {
      v15 = -1073741790;
    }
  }
  else
  {
    v15 = -1073741811;
    v20 = -1073741811;
    v9 = v22;
  }
LABEL_30:
  if ( v9 && qword_1C024FFE8 )
    qword_1C024FFE8(&v25);
  UserSessionSwitchLeaveCrit(v10);
  return v15;
}
