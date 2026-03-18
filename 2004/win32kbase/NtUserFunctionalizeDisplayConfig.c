/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C0132F60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvSampleDisplayState @ 0x1C00B5D50 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C014B064 (DrvFunctionalizeDisplayConfig.c)
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
  __int64 v13; // r9
  unsigned int v14; // esi
  void *v15; // r14
  _DWORD *v16; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 *i; // rcx
  _OWORD *v21; // r9
  _OWORD *v22; // r11
  unsigned int v23; // r8d
  unsigned int j; // r10d
  __int64 v25; // rcx
  unsigned int v26; // ebx
  unsigned int v28; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-104h]
  _DWORD v30[2]; // [rsp+38h] [rbp-100h] BYREF
  void *v31; // [rsp+40h] [rbp-F8h]
  __int64 *v32; // [rsp+48h] [rbp-F0h]
  __int64 v33; // [rsp+50h] [rbp-E8h]
  int v34; // [rsp+58h] [rbp-E0h]
  int v35; // [rsp+60h] [rbp-D8h]
  int v36; // [rsp+64h] [rbp-D4h]
  __int64 v37; // [rsp+78h] [rbp-C0h] BYREF
  int v38; // [rsp+80h] [rbp-B8h]
  void *v39; // [rsp+88h] [rbp-B0h]
  __int64 v40; // [rsp+98h] [rbp-A0h]
  _QWORD v41[10]; // [rsp+B0h] [rbp-88h] BYREF

  v40 = a5;
  v31 = 0LL;
  v28 = 0;
  v30[0] = -1;
  v33 = 0LL;
  v34 = 0;
  memset(v41, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v41[1]);
  v41[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v41[3]) = 59;
  LOBYTE(v41[6]) = -1;
  v30[1] = -1073741811;
  EnterSharedCrit(0LL, 1);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( gbVideoInitialized )
  {
    v16 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v28 = *a2;
    if ( v28 - 1 > 0x3FF )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v28, CurrentProcessWow64Process != 0 ? 1 : 4);
    v15 = Win32AllocPoolWithQuotaZInit(200LL * v28, 0x63447355u);
    v31 = v15;
    if ( !v15 )
      ExRaiseStatus(-1073741801);
    v32 = 0LL;
    v39 = 0LL;
    v29 = 0;
    v18 = 0;
    v35 = 0;
    v19 = 0;
    for ( i = (__int64 *)a3; ; i += 25 )
    {
      v32 = i;
      v29 = v19;
      if ( v19 >= v28 )
        break;
      if ( *i < 0 )
        v35 = ++v18;
      ++v19;
    }
    if ( v28 != v18 )
      ExRaiseStatus(-1073741811);
    v21 = a3;
    v32 = (__int64 *)a3;
    v22 = v15;
    v39 = v15;
    v23 = 0;
    v36 = 0;
    for ( j = 0; ; ++j )
    {
      v29 = j;
      if ( j >= v18 )
        break;
      if ( *(__int64 *)v21 < 0 )
      {
        if ( v23 >= v18 )
          ExRaiseStatus(-1073741811);
        *v22 = *v21;
        v22[1] = v21[1];
        v22[2] = v21[2];
        v22[3] = v21[3];
        v22[4] = v21[4];
        v22[5] = v21[5];
        v22[6] = v21[6];
        v22[7] = v21[7];
        v22[8] = v21[8];
        v22[9] = v21[9];
        v22[10] = v21[10];
        v22[11] = v21[11];
        *((_QWORD *)v22 + 24) = *((_QWORD *)v21 + 24);
        if ( *(__int64 *)v22 >= 0 )
          ExRaiseStatus(-1073741790);
        v36 = ++v23;
        v22 = (_OWORD *)((char *)v22 + 200);
        v39 = v22;
      }
      v21 = (_OWORD *)((char *)v21 + 200);
      v32 = (__int64 *)v21;
    }
    if ( v23 != v18 )
      ExRaiseStatus(-1073741811);
    if ( !Address )
      ExRaiseStatus(-1073741811);
    ProbeForWrite(Address, 4uLL, 4u);
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v25) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v33 = *(_QWORD *)a4;
      v34 = *(_DWORD *)(a4 + 8);
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( !a4 || (v37 = 0LL, v38 = 0, DrvSampleDisplayState(&v37), v38 == v34) && v37 == v33 )
      {
        v14 = DrvFunctionalizeDisplayConfig((unsigned int)&v28, (_DWORD)v15, a1, v40, (__int64)v30);
        if ( v14 == -2147483643 )
          v14 = -1073741789;
        v26 = v28;
        memmove((void *)a3, v15, 200LL * v28);
        *a2 = v26;
        *Address = v30[0];
      }
      else
      {
        v14 = -1071774921;
      }
    }
    else
    {
      v14 = -1073741790;
    }
  }
  else
  {
    v14 = -1073741823;
    v15 = v31;
  }
  if ( v15 )
  {
    Win32FreePool((__int64)v15);
    v31 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
