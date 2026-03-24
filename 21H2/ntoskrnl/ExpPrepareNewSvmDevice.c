/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x1405B8B38
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  int v8; // eax
  int v9; // ebx
  size_t v10; // rbx
  PVOID PoolWithTag; // rax
  ULONG_PTR v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, ULONG_PTR, _QWORD); // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 (__fastcall *v17)(_QWORD, __int64 *); // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  int v23; // [rsp+40h] [rbp-38h]

  *a4 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a3 + 64))(*(_QWORD *)(a3 + 8), 0LL, 0LL, &v21);
  v9 = v8;
  if ( v8 == -1073741789 )
  {
    if ( !v21 )
      return (unsigned int)-1073741823;
    v10 = v21 + 128;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v21 + 128, 0x65447845u);
    v12 = (ULONG_PTR)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v10);
    *(_DWORD *)(v12 + 24) = 1;
    *(_QWORD *)(v12 + 16) = a1;
    *(_OWORD *)(v12 + 32) = *(_OWORD *)a3;
    *(_OWORD *)(v12 + 48) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v12 + 64) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v12 + 80) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(v12 + 96) = *(_OWORD *)(a3 + 64);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR, _QWORD))(v12 + 96);
    v14 = *(_QWORD *)(v12 + 40);
    *(_QWORD *)(v12 + 112) = v12 + 128;
    v9 = v13(v14, v21, v12 + 128, 0LL);
    if ( v9 < 0 )
      goto LABEL_21;
    v17 = *(__int64 (__fastcall **)(_QWORD, __int64 *))(v12 + 64);
    if ( v17 )
    {
      v9 = v17(*(_QWORD *)(v12 + 40), &v22);
      if ( v9 >= 0 )
      {
        if ( (v22 & 7) == 7 && 1 << (BYTE4(v22) & 0x1F) >= (unsigned int)ExpSvmAgents )
        {
          _InterlockedIncrement(&ExTbFlushActive);
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, ULONG_PTR))(HalIommuDispatch + 24))(
                 a2,
                 *(_QWORD *)(v12 + 112),
                 &v22,
                 v12 + 120);
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 (__fastcall *)(__int64, int, __int64), _QWORD))(v12 + 72))(
                   *(_QWORD *)(v12 + 40),
                   &v22,
                   ExSvmDevicePowerCallback,
                   *(_QWORD *)(v12 + 120));
            if ( v9 < 0 )
              goto LABEL_21;
            (*(void (__fastcall **)(_QWORD))(a3 + 16))(*(_QWORD *)(a3 + 8));
            v18 = ExpSvmDevices;
            if ( *(__int64 **)(ExpSvmDevices + 8) != &ExpSvmDevices )
              __fastfail(3u);
            *(_QWORD *)v12 = ExpSvmDevices;
            *(_QWORD *)(v12 + 8) = &ExpSvmDevices;
            *(_QWORD *)(v18 + 8) = v12;
            ExpSvmDevices = v12;
            *a4 = v12;
          }
          else
          {
            _InterlockedDecrement(&ExTbFlushActive);
          }
        }
        else
        {
          v9 = -1073741585;
        }
        if ( v9 >= 0 )
          return (unsigned int)v9;
      }
    }
    else
    {
      v9 = -1073741637;
    }
LABEL_21:
    v19 = *(_QWORD *)(v12 + 120);
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(HalIommuDispatch + 56))(a2);
      _InterlockedDecrement(&ExTbFlushActive);
    }
    ExFreeHeapPool(v12, v19, v15, v16);
    return (unsigned int)v9;
  }
  if ( v8 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v9;
}
