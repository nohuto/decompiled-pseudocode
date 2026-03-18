/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C00B3D90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C00B48F4 (_QdcSdcTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvQueryDisplayConfig @ 0x1C00B5BE0 (DrvQueryDisplayConfig.c)
 *     DrvSampleDisplayState @ 0x1C00B5D50 (DrvSampleDisplayState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        int *a4,
        _DWORD *Address)
{
  void *v9; // rsi
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWow64Process; // rax
  int v15; // r15d
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+20h] [rbp-98h] BYREF
  int v22; // [rsp+24h] [rbp-94h]
  int v23; // [rsp+28h] [rbp-90h] BYREF
  void *v24; // [rsp+30h] [rbp-88h]
  __int64 v25; // [rsp+48h] [rbp-70h] BYREF
  int v26; // [rsp+50h] [rbp-68h]
  __int128 v27; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+70h] [rbp-48h]

  v9 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v21 = 0;
  v23 = -1;
  v25 = 0LL;
  v26 = 0;
  EnterSharedCrit(0LL, 1);
  if ( !gbVideoInitialized )
  {
    v17 = -1073741823;
    goto LABEL_30;
  }
  if ( (a1 & 0xFFFFFFC8) != 0 || (v11 = a1 & 7, (((_DWORD)v11 - 1) & 0xFFFFFFFC) != 0) || (_DWORD)v11 == 3 )
  {
    v17 = -1073741811;
    goto LABEL_30;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = MmUserProbeAddress;
  v10 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  v21 = *a2;
  if ( v21 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v21, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = Win32AllocPoolWithQuotaZInit(200LL * v21, 0x63447355u);
    v24 = v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(v9, &v27, Win32FreePool, v13);
    v15 = a1 & 4;
    if ( (a1 & 4) != 0 )
    {
      ProbeForWrite(a4, 4uLL, 4u);
    }
    else if ( a4 )
    {
      v17 = -1073741811;
      v22 = -1073741811;
      goto LABEL_30;
    }
    if ( Address )
    {
      v16 = PsGetCurrentProcessWow64Process(v11);
      ProbeForWrite(Address, 0xCuLL, v16 != 0 ? 1 : 4);
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( Address )
        DrvSampleDisplayState(&v25);
      v18 = DrvQueryDisplayConfig(a1, &v21, v9, &v23);
      v17 = v18;
      v22 = v18;
      if ( v18 == -2147483643 )
      {
        v17 = -1073741789;
        v22 = -1073741789;
      }
      else if ( v18 != -1073741789 )
      {
        v17 = QdcSdcTranslateStatusDefault(v18);
        v22 = v17;
      }
      v19 = v21;
      memmove((void *)a3, v9, 200LL * v21);
      *a2 = v19;
      if ( v15 )
        *a4 = v23;
      if ( Address )
      {
        *(_QWORD *)Address = v25;
        Address[2] = v26;
      }
    }
    else
    {
      v17 = -1073741790;
    }
  }
  else
  {
    v17 = -1073741811;
    v22 = -1073741811;
    v9 = v24;
  }
LABEL_30:
  if ( v9 && qword_1C0251FE8 )
    qword_1C0251FE8(&v27);
  UserSessionSwitchLeaveCrit(v11, (__int64)v10, v12, v13);
  return v17;
}
