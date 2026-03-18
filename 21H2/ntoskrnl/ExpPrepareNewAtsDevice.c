/*
 * XREFs of ExpPrepareNewAtsDevice @ 0x14063EF78
 * Callers:
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpPrepareNewAtsDevice(__int64 a1, char a2, __int64 a3, __int64 a4, ULONG_PTR *a5)
{
  int v9; // eax
  int v10; // ebx
  __int64 Pool2; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 (__fastcall *v16)(__int64, __int64, __int64, _QWORD); // rax
  __int64 v17; // rcx
  bool v19; // si
  _QWORD *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  int v25; // [rsp+40h] [rbp-10h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  *a5 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a3 + 64))(*(_QWORD *)(a3 + 8), 0LL, 0LL, &v23);
  v10 = v9;
  if ( v9 == -1073741789 )
  {
    if ( !v23 )
      return (unsigned int)-1073741823;
    Pool2 = ExAllocatePool2(64LL, v23 + 192, 1698986053LL);
    v12 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_QWORD *)(Pool2 + 24) = a1;
    v13 = Pool2 + 192;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 64);
    *(_QWORD *)(Pool2 + 120) = *(_QWORD *)(a3 + 80);
    v14 = *(_QWORD *)(Pool2 + 48);
    *(_OWORD *)(Pool2 + 128) = *(_OWORD *)a4;
    *(_OWORD *)(Pool2 + 144) = *(_OWORD *)(a4 + 16);
    v15 = *(_OWORD *)(a4 + 32);
    *(_BYTE *)(Pool2 + 16) = 1;
    v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(Pool2 + 104);
    *(_OWORD *)(v12 + 160) = v15;
    *(_BYTE *)(v12 + 17) = a2;
    *(_QWORD *)(v12 + 176) = v12 + 192;
    v10 = v16(v14, v23, v13, 0LL);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v12 + 72))(*(_QWORD *)(v12 + 48), &v24);
      if ( v10 >= 0 )
      {
        if ( (v24 & 1) == 0 )
          goto LABEL_10;
        v19 = 0;
        if ( !a2 )
          v19 = (v24 & 6) == 6;
        if ( *(_QWORD *)(v12 + 160) )
        {
          v20 = (_QWORD *)(v12 + 184);
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, ULONG_PTR))(HalIommuDispatch + 160))(
                  *(_QWORD *)(v12 + 176),
                  &v24,
                  v12 + 184);
          if ( v10 >= 0 )
          {
            LOBYTE(v21) = 1;
            v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(HalIommuDispatch + 168))(*v20, v21);
            if ( v10 >= 0 )
            {
              if ( !v19 )
                LODWORD(v24) = v24 & 0xFFFFFFF9;
              v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 (__fastcall *)(__int64, int, __int64), _QWORD))(v12 + 80))(
                      *(_QWORD *)(v12 + 48),
                      &v24,
                      ExAtsDevicePowerCallback,
                      *v20);
              if ( v10 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD))(a4 + 16))(*(_QWORD *)(a4 + 8));
                (*(void (__fastcall **)(_QWORD))(a3 + 16))(*(_QWORD *)(a3 + 8));
                v22 = ExpAtsSvmDevices;
                if ( *(__int64 **)(ExpAtsSvmDevices + 8) != &ExpAtsSvmDevices )
                  __fastfail(3u);
                *(_QWORD *)v12 = ExpAtsSvmDevices;
                *(_QWORD *)(v12 + 8) = &ExpAtsSvmDevices;
                *(_QWORD *)(v22 + 8) = v12;
                ExpAtsSvmDevices = v12;
                *a5 = v12;
                return (unsigned int)v10;
              }
            }
          }
        }
        else
        {
LABEL_10:
          v10 = -1073741637;
        }
      }
    }
    v17 = *(_QWORD *)(v12 + 184);
    if ( v17 )
      (*(void (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 168))(v17, 0LL);
    ExFreeHeapPool(v12);
    return (unsigned int)v10;
  }
  if ( v9 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v10;
}
