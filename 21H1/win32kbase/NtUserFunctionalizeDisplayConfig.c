/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C0138C00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     DrvSampleDisplayState @ 0x1C00971E0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C01513B4 (DrvFunctionalizeDisplayConfig.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *Address)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // esi
  void *v14; // r14
  _DWORD *v15; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 *i; // rcx
  _OWORD *v20; // r9
  _OWORD *v21; // r11
  unsigned int v22; // r8d
  unsigned int j; // r10d
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned int v27; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-104h]
  _DWORD v29[2]; // [rsp+38h] [rbp-100h] BYREF
  void *v30; // [rsp+40h] [rbp-F8h]
  __int64 *v31; // [rsp+48h] [rbp-F0h]
  __int64 v32; // [rsp+50h] [rbp-E8h]
  int v33; // [rsp+58h] [rbp-E0h]
  int v34; // [rsp+60h] [rbp-D8h]
  int v35; // [rsp+64h] [rbp-D4h]
  __int64 v36; // [rsp+78h] [rbp-C0h] BYREF
  int v37; // [rsp+80h] [rbp-B8h]
  void *v38; // [rsp+88h] [rbp-B0h]
  __int64 v39; // [rsp+98h] [rbp-A0h]
  _QWORD v40[10]; // [rsp+B0h] [rbp-88h] BYREF

  v39 = a5;
  v30 = 0LL;
  v27 = 0;
  v29[0] = -1;
  v32 = 0LL;
  v33 = 0;
  memset(v40, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v40[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 59;
  LOBYTE(v40[6]) = -1;
  v29[1] = -1073741811;
  EnterSharedCrit(0LL, 1);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( gbVideoInitialized )
  {
    v15 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v27 = *a2;
    if ( v27 - 1 > 0x3FF )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v27, CurrentProcessWow64Process != 0 ? 1 : 4);
    v14 = Win32AllocPoolWithQuotaZInit(200LL * v27, 0x63447355u);
    v30 = v14;
    if ( !v14 )
      ExRaiseStatus(-1073741801);
    v31 = 0LL;
    v38 = 0LL;
    v28 = 0;
    v17 = 0;
    v34 = 0;
    v18 = 0;
    for ( i = (__int64 *)a3; ; i += 25 )
    {
      v31 = i;
      v28 = v18;
      if ( v18 >= v27 )
        break;
      if ( *i < 0 )
        v34 = ++v17;
      ++v18;
    }
    if ( v27 != v17 )
      ExRaiseStatus(-1073741811);
    v20 = a3;
    v31 = (__int64 *)a3;
    v21 = v14;
    v38 = v14;
    v22 = 0;
    v35 = 0;
    for ( j = 0; ; ++j )
    {
      v28 = j;
      if ( j >= v17 )
        break;
      if ( *(__int64 *)v20 < 0 )
      {
        if ( v22 >= v17 )
          ExRaiseStatus(-1073741811);
        *v21 = *v20;
        v21[1] = v20[1];
        v21[2] = v20[2];
        v21[3] = v20[3];
        v21[4] = v20[4];
        v21[5] = v20[5];
        v21[6] = v20[6];
        v21[7] = v20[7];
        v21[8] = v20[8];
        v21[9] = v20[9];
        v21[10] = v20[10];
        v21[11] = v20[11];
        *((_QWORD *)v21 + 24) = *((_QWORD *)v20 + 24);
        if ( *(__int64 *)v21 >= 0 )
          ExRaiseStatus(-1073741790);
        v35 = ++v22;
        v21 = (_OWORD *)((char *)v21 + 200);
        v38 = v21;
      }
      v20 = (_OWORD *)((char *)v20 + 200);
      v31 = (__int64 *)v20;
    }
    if ( v22 != v17 )
      ExRaiseStatus(-1073741811);
    if ( !Address )
      ExRaiseStatus(-1073741811);
    ProbeForWrite(Address, 4uLL, 4u);
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v24) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v32 = *(_QWORD *)a4;
      v33 = *(_DWORD *)(a4 + 8);
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( !a4 || (v36 = 0LL, v37 = 0, DrvSampleDisplayState(&v36), v37 == v33) && v36 == v32 )
      {
        v13 = DrvFunctionalizeDisplayConfig((unsigned int)&v27, (_DWORD)v14, a1, v39, (__int64)v29);
        if ( v13 == -2147483643 )
          v13 = -1073741789;
        v25 = v27;
        memmove((void *)a3, v14, 200LL * v27);
        *a2 = v25;
        *Address = v29[0];
      }
      else
      {
        v13 = -1071774921;
      }
    }
    else
    {
      v13 = -1073741790;
    }
  }
  else
  {
    v13 = -1073741823;
    v14 = v30;
  }
  if ( v14 )
  {
    Win32FreePool((__int64)v14, v10, v12);
    v30 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
