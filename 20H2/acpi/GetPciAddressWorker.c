/*
 * XREFs of GetPciAddressWorker @ 0x1C0018810
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C0018240 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddress @ 0x1C002E9AC (GetPciAddress.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C001EFC0 (AMLIIsNamedChildPresent.c)
 *     GetPciAddress @ 0x1C002E9AC (GetPciAddress.c)
 *     CacheBBNResult @ 0x1C00314B0 (CacheBBNResult.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPciAddressWorker(__int64 a1, int a2, __int64 a3, unsigned __int16 *a4)
{
  volatile signed __int32 *v5; // r14
  int v6; // edi
  int v8; // eax
  __int64 *v9; // rcx
  __int64 result; // rax
  KIRQL v11; // al
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rbx
  KIRQL v15; // al
  __int64 v16; // rdx
  KIRQL v17; // al
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  KIRQL v20; // al
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  int v23; // eax
  KIRQL v24; // al
  __int64 v25; // r8
  _QWORD *v26; // rdx
  KIRQL v27; // al
  _QWORD *v28; // rcx
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // eax
  int PciAddress; // eax
  ULONG BusDataByOffset; // eax
  int v35; // ecx
  unsigned __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  _BYTE Buffer[64]; // [rsp+60h] [rbp-88h] BYREF

  v5 = 0LL;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 12);
  if ( a2 < 0 )
    goto LABEL_46;
  v8 = *((_DWORD *)a4 + 8);
  if ( (v8 & 8) == 0 )
  {
    v9 = *(__int64 **)a4;
    *((_DWORD *)a4 + 8) = v8 | 8;
    result = ACPIGet(
               v9,
               1380204895,
               -1543240702,
               0LL,
               0,
               (__int64)GetPciAddressWorker,
               (__int64)a4,
               (__int64)(a4 + 18),
               0LL);
    v6 = result;
    if ( (_DWORD)result == 259 )
      return result;
    if ( (int)result < 0 )
      goto LABEL_46;
  }
  if ( (*((_DWORD *)a4 + 8) & 0x100) == 0 )
  {
    **((_DWORD **)a4 + 2) ^= (**((_DWORD **)a4 + 2) ^ (32 * *((_DWORD *)a4 + 9))) & 0xE0;
    **((_DWORD **)a4 + 2) ^= (**((_DWORD **)a4 + 2) ^ a4[19]) & 0x1F;
    *((_DWORD *)a4 + 8) |= 0x100u;
  }
  **((_DWORD **)a4 + 1) = 0;
  v5 = *(volatile signed __int32 **)a4;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v5 + 2);
  v11 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v12 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
  v13 = (_QWORD *)*v12;
  if ( v12 == (_QWORD *)*v12 )
  {
LABEL_12:
    v13 = 0LL;
  }
  else
  {
    while ( *((_DWORD *)v13 + 10) != 1145653343 )
    {
      v13 = (_QWORD *)*v13;
      if ( v12 == v13 )
        goto LABEL_12;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v11);
  if ( !v13 )
  {
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v36 = *(_QWORD *)v5;
      if ( v5 == (volatile signed __int32 *)(*(_QWORD *)v5 + 120LL) )
      {
        DereferenceObjectEx(v36);
      }
      else
      {
        DereferenceObjectEx(v36);
        HeapFree(v5);
      }
    }
    v14 = *(_QWORD *)a4;
    v15 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    v16 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
    if ( v16 )
    {
      v5 = (volatile signed __int32 *)(v16 + 120);
      dword_1C0082908 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 128));
    }
    else
    {
      v5 = 0LL;
    }
    ExReleaseSpinLockShared(&ACPINamespaceLock, v15);
    if ( !v5 )
    {
      v6 = -1073741661;
      goto LABEL_46;
    }
    v17 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    v18 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
    v19 = (_QWORD *)*v18;
    if ( v18 == (_QWORD *)*v18 )
    {
LABEL_57:
      v19 = 0LL;
    }
    else
    {
      while ( *((_DWORD *)v19 + 10) != 1145653343 )
      {
        v19 = (_QWORD *)*v19;
        if ( v18 == v19 )
          goto LABEL_57;
      }
    }
    ExReleaseSpinLockShared(&ACPINamespaceLock, v17);
    if ( !v19 )
    {
      v32 = *((_DWORD *)a4 + 8);
      if ( (v32 & 0x20) == 0 )
      {
        *((_DWORD *)a4 + 8) = v32 | 0x20;
        PciAddress = GetPciAddress(
                       (_DWORD)v5,
                       (unsigned int)GetPciAddressWorker,
                       (_DWORD)a4,
                       (int)a4 + 24,
                       (__int64)(a4 + 14));
        v6 = PciAddress;
        if ( PciAddress == 259 )
          goto LABEL_52;
        if ( PciAddress < 0 )
          goto LABEL_46;
      }
      BusDataByOffset = HalGetBusDataByOffset(
                          PCIConfiguration,
                          *((_DWORD *)a4 + 6),
                          *((_DWORD *)a4 + 7),
                          Buffer,
                          0,
                          0x1Au);
      v35 = *((_DWORD *)a4 + 6) & 0xFFFF00;
      if ( BusDataByOffset )
      {
        if ( (Buffer[14] & 0x7Fu) - 1 > 1 )
        {
          **((_DWORD **)a4 + 1) = v35;
        }
        else
        {
          **((_DWORD **)a4 + 1) = Buffer[25] | v35;
          (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(**((unsigned int **)a4 + 1));
        }
      }
      else
      {
        **((_DWORD **)a4 + 1) = v35;
      }
      goto LABEL_64;
    }
  }
  v20 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v21 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
  v22 = (_QWORD *)*v21;
  if ( v21 == (_QWORD *)*v21 )
  {
LABEL_73:
    v22 = 0LL;
  }
  else
  {
    while ( *((_DWORD *)v22 + 10) != 1312965215 )
    {
      v22 = (_QWORD *)*v22;
      if ( v21 == v22 )
        goto LABEL_73;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v20);
  if ( !v22 )
  {
    if ( (AcpiOverrideAttributes & 0x1000) == 0 && (unsigned __int8)AMLIIsNamedChildPresent(v5, 1195725663LL) )
    {
      v39 = *((_DWORD *)a4 + 8);
      if ( (v39 & 0x4000) == 0 )
      {
        *((_DWORD *)a4 + 8) = v39 | 0x4000;
        v40 = ACPIGet(
                (__int64 *)v5,
                1195725663,
                604241922,
                0LL,
                0,
                (__int64)GetPciAddressWorker,
                (__int64)a4,
                (__int64)(a4 + 20),
                0LL);
        v6 = v40;
        if ( v40 == 259 )
          goto LABEL_52;
        if ( v40 < 0 )
          goto LABEL_46;
      }
      **((_DWORD **)a4 + 1) = (unsigned __int16)*((_DWORD *)a4 + 10) << 8;
    }
LABEL_64:
    v6 = 0;
    goto LABEL_46;
  }
  v23 = *((_DWORD *)a4 + 8);
  if ( (v23 & 0x2000) == 0 )
  {
    *((_DWORD *)a4 + 8) = v23 | 0x2000;
    v24 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
    v25 = gBBNResultCacheListHead;
    v6 = -1073741275;
    if ( (__int64 *)gBBNResultCacheListHead != &gBBNResultCacheListHead )
    {
      while ( 1 )
      {
        v26 = *(_QWORD **)(v25 + 16);
        if ( v26 )
        {
          if ( *v26 == *(_QWORD *)v5 )
            break;
        }
        v25 = *(_QWORD *)v25;
        if ( (__int64 *)v25 == &gBBNResultCacheListHead )
          goto LABEL_32;
      }
      v6 = 0x40000000;
      *((_DWORD *)a4 + 11) = *(_DWORD *)(v25 + 24);
    }
LABEL_32:
    KeReleaseSpinLock(&gBBNResultCacheLock, v24);
    if ( v6 != 0x40000000 )
      v6 = ACPIGet(
             (__int64 *)v5,
             1312965215,
             604241922,
             0LL,
             0,
             (__int64)GetPciAddressWorker,
             (__int64)a4,
             (__int64)(a4 + 22),
             0LL);
    if ( v6 == 259 )
      goto LABEL_52;
    if ( v6 < 0 )
      goto LABEL_46;
  }
  if ( v6 != 0x40000000 )
    CacheBBNResult(v5, *((unsigned int *)a4 + 11));
  if ( (AcpiOverrideAttributes & 0x1000) != 0 )
    goto LABEL_44;
  v27 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v28 = (_QWORD *)(*(_QWORD *)v5 + 24LL);
  v29 = (_QWORD *)*v28;
  if ( v28 == (_QWORD *)*v28 )
  {
LABEL_42:
    v29 = 0LL;
  }
  else
  {
    while ( *((_DWORD *)v29 + 10) != 1195725663 )
    {
      v29 = (_QWORD *)*v29;
      if ( v28 == v29 )
        goto LABEL_42;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v27);
  if ( !v29 )
    goto LABEL_44;
  v37 = *((_DWORD *)a4 + 8);
  if ( (v37 & 0x4000) != 0 )
  {
LABEL_79:
    *((_DWORD *)a4 + 11) |= (unsigned __int16)*((_DWORD *)a4 + 10) << 8;
LABEL_44:
    (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(*((unsigned int *)a4 + 11));
    v6 = 0;
    **((_DWORD **)a4 + 1) = *((_DWORD *)a4 + 11);
    v30 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
    if ( v30 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v30 + 8), 0x2000000uLL);
      _InterlockedOr((volatile signed __int32 *)(v30 + 184), 1u);
    }
    goto LABEL_46;
  }
  *((_DWORD *)a4 + 8) = v37 | 0x4000;
  v38 = ACPIGet(
          (__int64 *)v5,
          1195725663,
          604241922,
          0LL,
          0,
          (__int64)GetPciAddressWorker,
          (__int64)a4,
          (__int64)(a4 + 20),
          0LL);
  v6 = v38;
  if ( v38 != 259 )
  {
    if ( v38 >= 0 )
      goto LABEL_79;
LABEL_46:
    if ( *((_DWORD *)a4 + 12) )
      (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 7))(a1, (unsigned int)v6, 0LL, *((_QWORD *)a4 + 8));
    v31 = *(_QWORD *)a4;
    if ( *(_QWORD *)a4 )
    {
      dword_1C0082908 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 8), 0xFFFFFFFF) == 1 )
      {
        v41 = *(_QWORD *)v31;
        if ( v31 == *(_QWORD *)v31 + 120LL )
        {
          DereferenceObjectEx(v41);
        }
        else
        {
          DereferenceObjectEx(v41);
          HeapFree((_QWORD *)v31);
        }
      }
      *(_QWORD *)a4 = 0LL;
    }
    ExFreePoolWithTag(a4, 0);
  }
LABEL_52:
  if ( v5 )
  {
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v42 = *(_QWORD *)v5;
      if ( v5 == (volatile signed __int32 *)(*(_QWORD *)v5 + 120LL) )
      {
        DereferenceObjectEx(v42);
      }
      else
      {
        DereferenceObjectEx(v42);
        HeapFree(v5);
      }
    }
  }
  return (unsigned int)v6;
}
