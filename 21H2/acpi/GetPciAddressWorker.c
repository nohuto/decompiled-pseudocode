/*
 * XREFs of GetPciAddressWorker @ 0x1C000CDE0
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddress @ 0x1C005B4BC (GetPciAddress.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     AMLIIsEqualHandle @ 0x1C000C8F0 (AMLIIsEqualHandle.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     CacheBBNResult @ 0x1C002E6E0 (CacheBBNResult.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     GetPciAddress @ 0x1C005B4BC (GetPciAddress.c)
 */

__int64 __fastcall GetPciAddressWorker(__int64 a1, int a2, __int64 a3, unsigned __int16 *a4)
{
  volatile signed __int32 *v5; // r15
  unsigned int v6; // esi
  int v8; // eax
  __int64 v9; // rcx
  __int64 result; // rax
  KIRQL v11; // al
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  KIRQL v17; // al
  __int64 v18; // rdx
  KIRQL v19; // al
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  KIRQL v22; // al
  _QWORD *v23; // rcx
  _QWORD *v24; // rbx
  int v25; // eax
  KIRQL v26; // al
  __int64 v27; // r8
  KIRQL v28; // r9
  __int64 v29; // r8
  __int64 v30; // r10
  int v31; // eax
  KIRQL v32; // al
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  int PciAddress; // eax
  ULONG BusDataByOffset; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  _BYTE Buffer[64]; // [rsp+60h] [rbp-88h] BYREF

  v5 = 0LL;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 12);
  if ( a2 < 0 )
    goto LABEL_16;
  v8 = *((_DWORD *)a4 + 8);
  if ( (v8 & 8) == 0 )
  {
    v9 = *(_QWORD *)a4;
    *((_DWORD *)a4 + 8) = v8 | 8;
    result = ACPIGet(
               v9,
               1380204895,
               -1543240702,
               0,
               0,
               (__int64)GetPciAddressWorker,
               (__int64)a4,
               (__int64)(a4 + 18),
               0LL);
    v6 = result;
    if ( (_DWORD)result == 259 )
      return result;
    if ( (int)result < 0 )
      goto LABEL_16;
  }
  if ( (*((_DWORD *)a4 + 8) & 0x100) == 0 )
  {
    **((_DWORD **)a4 + 2) ^= (**((_DWORD **)a4 + 2) ^ (32 * *((_DWORD *)a4 + 9))) & 0xE0;
    **((_DWORD **)a4 + 2) ^= (**((_DWORD **)a4 + 2) ^ a4[19]) & 0x1F;
    *((_DWORD *)a4 + 8) |= 0x100u;
  }
  **((_DWORD **)a4 + 1) = 0;
  v5 = *(volatile signed __int32 **)a4;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v5 + 2);
  v11 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v12 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
  v13 = (_QWORD *)*v12;
  if ( v12 == (_QWORD *)*v12 )
  {
LABEL_12:
    ExReleaseSpinLockShared(&ACPINamespaceLock, v11);
    goto LABEL_27;
  }
  while ( *((_DWORD *)v13 + 10) != 1145653343 )
  {
    v13 = (_QWORD *)*v13;
    if ( v12 == v13 )
      goto LABEL_12;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v11);
  if ( !v13 )
  {
LABEL_27:
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v35 = *(_QWORD *)v5;
      if ( v5 == (volatile signed __int32 *)(*(_QWORD *)v5 + 120LL) )
      {
        DereferenceObjectEx(v35);
      }
      else
      {
        DereferenceObjectEx(v35);
        HeapFree(v5);
      }
    }
    v16 = *(_QWORD *)a4;
    v17 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    v18 = *(_QWORD *)(*(_QWORD *)v16 + 16LL);
    if ( v18 )
    {
      v5 = (volatile signed __int32 *)(v18 + 120);
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 128));
      ExReleaseSpinLockShared(&ACPINamespaceLock, v17);
      if ( v5 )
      {
        v19 = ExAcquireSpinLockShared(&ACPINamespaceLock);
        v20 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
        v21 = (_QWORD *)*v20;
        if ( v20 == (_QWORD *)*v20 )
        {
LABEL_61:
          ExReleaseSpinLockShared(&ACPINamespaceLock, v19);
        }
        else
        {
          while ( *((_DWORD *)v21 + 10) != 1145653343 )
          {
            v21 = (_QWORD *)*v21;
            if ( v20 == v21 )
              goto LABEL_61;
          }
          ExReleaseSpinLockShared(&ACPINamespaceLock, v19);
          if ( v21 )
            goto LABEL_35;
        }
        v36 = *((_DWORD *)a4 + 8);
        if ( (v36 & 0x20) != 0 )
          goto LABEL_65;
        *((_DWORD *)a4 + 8) = v36 | 0x20;
        PciAddress = GetPciAddress(
                       (_DWORD)v5,
                       (unsigned int)GetPciAddressWorker,
                       (_DWORD)a4,
                       (int)a4 + 24,
                       (__int64)(a4 + 14));
        v6 = PciAddress;
        if ( PciAddress == 259 )
          goto LABEL_23;
        if ( PciAddress >= 0 )
        {
LABEL_65:
          BusDataByOffset = HalGetBusDataByOffset(
                              PCIConfiguration,
                              *((_DWORD *)a4 + 6),
                              *((_DWORD *)a4 + 7),
                              Buffer,
                              0,
                              0x1Au);
          v39 = *((_DWORD *)a4 + 6) & 0xFFFF00;
          if ( BusDataByOffset )
          {
            if ( (Buffer[14] & 0x7Fu) - 1 <= 1 )
            {
              **((_DWORD **)a4 + 1) = Buffer[25] | v39;
              (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(**((unsigned int **)a4 + 1));
              v6 = 0;
            }
            else
            {
              v6 = 0;
              **((_DWORD **)a4 + 1) = v39;
            }
          }
          else
          {
            v6 = 0;
            **((_DWORD **)a4 + 1) = v39;
          }
        }
        goto LABEL_16;
      }
    }
    else
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v17);
      v5 = 0LL;
    }
    v6 = -1073741661;
    goto LABEL_16;
  }
LABEL_35:
  v22 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v23 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
  v24 = (_QWORD *)*v23;
  if ( v23 == (_QWORD *)*v23 )
  {
LABEL_38:
    ExReleaseSpinLockShared(&ACPINamespaceLock, v22);
    goto LABEL_39;
  }
  while ( *((_DWORD *)v24 + 10) != 1312965215 )
  {
    v24 = (_QWORD *)*v24;
    if ( v23 == v24 )
      goto LABEL_38;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v22);
  if ( !v24 )
  {
LABEL_39:
    if ( (AcpiOverrideAttributes & 0x1000) == 0 && AMLIIsNamedChildPresent((__int64 *)v5, 1195725663) )
    {
      v42 = *((_DWORD *)a4 + 8);
      if ( (v42 & 0x4000) == 0 )
      {
        *((_DWORD *)a4 + 8) = v42 | 0x4000;
        v43 = ACPIGet(
                (_DWORD)v5,
                1195725663,
                604241922,
                0,
                0,
                (__int64)GetPciAddressWorker,
                (__int64)a4,
                (__int64)(a4 + 20),
                0LL);
        v6 = v43;
        if ( v43 == 259 )
          goto LABEL_22;
        if ( v43 < 0 )
          goto LABEL_16;
      }
      **((_DWORD **)a4 + 1) = (unsigned __int16)*((_DWORD *)a4 + 10) << 8;
    }
    v6 = 0;
    goto LABEL_16;
  }
  v25 = *((_DWORD *)a4 + 8);
  if ( (v25 & 0x2000) == 0 )
  {
    *((_DWORD *)a4 + 8) = v25 | 0x2000;
    v26 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
    v27 = gBBNResultCacheListHead;
    v28 = v26;
    if ( (__int64 *)gBBNResultCacheListHead != &gBBNResultCacheListHead )
    {
      while ( !AMLIIsEqualHandle(*(_QWORD **)(v27 + 16), v5) )
      {
        v27 = *(_QWORD *)v29;
        if ( v27 == v30 )
          goto LABEL_47;
      }
      *((_DWORD *)a4 + 11) = *(_DWORD *)(v29 + 24);
      KeReleaseSpinLock(&gBBNResultCacheLock, v28);
      goto LABEL_51;
    }
LABEL_47:
    KeReleaseSpinLock(&gBBNResultCacheLock, v28);
    v31 = ACPIGet(
            (_DWORD)v5,
            1312965215,
            604241922,
            0,
            0,
            (__int64)GetPciAddressWorker,
            (__int64)a4,
            (__int64)(a4 + 22),
            0LL);
    v6 = v31;
    if ( v31 == 259 )
      goto LABEL_22;
    if ( v31 < 0 )
      goto LABEL_16;
  }
  if ( v6 != 0x40000000 )
    CacheBBNResult(v5, *((unsigned int *)a4 + 11));
LABEL_51:
  if ( (AcpiOverrideAttributes & 0x1000) == 0 )
  {
    v32 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    v33 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
    v34 = (_QWORD *)*v33;
    if ( v33 == (_QWORD *)*v33 )
    {
LABEL_55:
      ExReleaseSpinLockShared(&ACPINamespaceLock, v32);
    }
    else
    {
      while ( *((_DWORD *)v34 + 10) != 1195725663 )
      {
        v34 = (_QWORD *)*v34;
        if ( v33 == v34 )
          goto LABEL_55;
      }
      ExReleaseSpinLockShared(&ACPINamespaceLock, v32);
      if ( v34 )
      {
        v40 = *((_DWORD *)a4 + 8);
        if ( (v40 & 0x4000) == 0 )
        {
          *((_DWORD *)a4 + 8) = v40 | 0x4000;
          v41 = ACPIGet(
                  (_DWORD)v5,
                  1195725663,
                  604241922,
                  0,
                  0,
                  (__int64)GetPciAddressWorker,
                  (__int64)a4,
                  (__int64)(a4 + 20),
                  0LL);
          v6 = v41;
          if ( v41 == 259 )
            goto LABEL_22;
          if ( v41 < 0 )
            goto LABEL_16;
        }
        *((_DWORD *)a4 + 11) |= (unsigned __int16)*((_DWORD *)a4 + 10) << 8;
      }
    }
  }
  (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(*((unsigned int *)a4 + 11));
  v6 = 0;
  **((_DWORD **)a4 + 1) = *((_DWORD *)a4 + 11);
  v14 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
  if ( v14 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v14 + 8), 0x2000000uLL);
    _InterlockedOr((volatile signed __int32 *)(v14 + 184), 1u);
  }
LABEL_16:
  if ( *((_DWORD *)a4 + 12) )
    (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 7))(a1, v6, 0LL, *((_QWORD *)a4 + 8));
  v15 = *(volatile signed __int32 **)a4;
  if ( *(_QWORD *)a4 )
  {
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v44 = *(_QWORD *)v15;
      if ( v15 == (volatile signed __int32 *)(*(_QWORD *)v15 + 120LL) )
      {
        DereferenceObjectEx(v44);
      }
      else
      {
        DereferenceObjectEx(v44);
        HeapFree(v15);
      }
    }
    *(_QWORD *)a4 = 0LL;
  }
  ExFreePoolWithTag(a4, 0);
LABEL_22:
  if ( v5 )
  {
LABEL_23:
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v45 = *(_QWORD *)v5;
      if ( v5 == (volatile signed __int32 *)(*(_QWORD *)v5 + 120LL) )
      {
        DereferenceObjectEx(v45);
      }
      else
      {
        DereferenceObjectEx(v45);
        HeapFree(v5);
      }
    }
  }
  return v6;
}
