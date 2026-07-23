/*
 * XREFs of HalpIommuMapLogicalRange @ 0x1404DC44C
 * Callers:
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 *     IommuMapIdentityRange @ 0x1404DAA10 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1404DABD0 (IommuMapLogicalRange.c)
 *     HalpIommuConstructReservedPageTable @ 0x1409A83D8 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14030E640 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404DB9D8 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404DC86C (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuMapLogicalRange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r11d
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // rbp
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  void *v22; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v24; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned int v30; // ecx
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  int v33; // r8d
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  unsigned int v36; // esi
  unsigned __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // r9
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  int v43; // eax
  _DWORD *v44; // r8
  char v46; // [rsp+30h] [rbp-C8h]
  unsigned int v47; // [rsp+34h] [rbp-C4h]
  unsigned int v48; // [rsp+38h] [rbp-C0h]
  __int64 v49; // [rsp+40h] [rbp-B8h]
  __int64 v50; // [rsp+48h] [rbp-B0h]
  __int64 v51; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+58h] [rbp-A0h]
  __int64 v53; // [rsp+60h] [rbp-98h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-90h]
  unsigned __int64 v55; // [rsp+70h] [rbp-88h]
  _OWORD v56[3]; // [rsp+78h] [rbp-80h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v8 = a6;
  LODWORD(v9) = 0;
  v53 = a1;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = a6 + ((a5 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v47 = a3;
  v46 = v6;
  v52 = v11;
  v55 = a6;
  v48 = 1 << v6;
  v56[0] = v10;
  v12 = a4 & -(__int64)(a3 != 0);
  v13 = 0LL;
  v50 = v12;
  v51 = 0LL;
  memset(&v56[1], 0, 32);
  if ( a6 >= v11 )
    return 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v9 < v14 - 1 )
      break;
LABEL_22:
    v30 = *(_DWORD *)(a2 + 4LL * (unsigned int)v9 + 36);
    if ( a3 )
    {
      if ( v30 < 0x40 )
        v32 = (1LL << v30) - 1;
      else
        LODWORD(v32) = -1;
      v33 = v32 & (v8 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v9 + 60));
      v34 = v11 - v8;
      v35 = v10 + (unsigned int)(v33 << v6);
      v36 = (1 << *(_DWORD *)(a2 + 4LL * (unsigned int)(v14 - 1) + 36)) - v33;
      v37 = v34 >> 12;
      if ( (unsigned int)v37 <= v36 )
        v36 = v37;
      v38 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 88) + 8LL))(
              v10 + (unsigned int)(v33 << v6),
              v12,
              v47,
              v36);
      v13 += (unsigned int)(v38 << 12);
      v51 = v13;
      if ( v38 != v36 )
      {
        HalpIommuUnmapLogicalRange(a2, &v51, v55);
        return 3221225485LL;
      }
      if ( !HalpIommuPageTableCacheCoherent )
        KeInvalidateRangeAllCachesNoIpi(v35, v48 * v36);
      v39 = v36 << 12;
      v12 = (unsigned int)v39 + v50;
      v50 = v12;
      v31 = v39 + v8;
    }
    else
    {
      v31 = ~((1LL << ((unsigned __int8)v30 + 12)) - 1) & ((1LL << ((unsigned __int8)v30 + 12)) + v8);
    }
    if ( (_DWORD)v9 )
    {
      do
      {
        v40 = (unsigned int)(v9 - 1);
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v40 + 60)) & v31) == (v8 & (1LL << *(_DWORD *)(a2 + 4 * v40 + 60))) )
          break;
        LODWORD(v9) = v9 - 1;
      }
      while ( (_DWORD)v40 );
    }
    v11 = v52;
    v8 = v31;
    v10 = *((_QWORD *)v56 + (unsigned int)v9);
    if ( v31 >= v52 )
      return 0LL;
    LOBYTE(v6) = v46;
    a3 = v47;
  }
  v15 = (unsigned int)v9;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a2 + 4 * v15 + 36);
    v17 = v10 + (1 << v16 << v6);
    if ( v16 < 0x40 )
      v18 = (1LL << v16) - 1;
    else
      LODWORD(v18) = -1;
    v19 = (unsigned int)v18 & (unsigned int)(v8 >> *(_DWORD *)(a2 + 4 * v15 + 60));
    v49 = v19;
    v20 = *(_QWORD *)(v17 + 8 * v19);
    if ( !v20 )
      break;
LABEL_20:
    v10 = v20;
    v9 = (unsigned int)(v9 + 1);
    v15 = (unsigned int)v9;
    *((_QWORD *)v56 + v9) = v20;
    if ( (unsigned int)v9 >= v14 - 1 )
    {
      v13 = v51;
      v12 = v50;
      v11 = v52;
      a3 = v47;
      goto LABEL_22;
    }
  }
  SpinLock = (PKSPIN_LOCK)(a2 + 8);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  if ( *(_QWORD *)(v17 + 8 * v19) )
  {
LABEL_12:
    KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 8));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
          v29 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v21);
    v14 = *(_DWORD *)(a2 + 24);
    LOBYTE(v6) = v46;
    v20 = *(_QWORD *)(v17 + 8 * v49);
    goto LABEL_20;
  }
  v22 = HalpIommuAllocateAndZeroPageTable(a2, (int)v9 + 1, v53);
  *(_QWORD *)(v17 + 8 * v19) = v22;
  if ( v22 )
  {
    PhysicalAddress = MmGetPhysicalAddress(v22);
    v24 = v10 + (unsigned int)((_DWORD)v19 << v46);
    (**(void (__fastcall ***)(__int64, _QWORD, PHYSICAL_ADDRESS))(a2 + 88))(
      v24,
      (unsigned int)(*(_DWORD *)(a2 + 24) - v9 - 1),
      PhysicalAddress);
    if ( !HalpIommuPageTableCacheCoherent )
      KeInvalidateRangeAllCachesNoIpi(v24, v48);
    goto LABEL_12;
  }
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v41 = KeGetCurrentIrql();
      if ( v41 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v41 >= 2u )
      {
        v42 = KeGetCurrentPrcb();
        v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v44 = v42->SchedulerAssist;
        v29 = (v43 & v44[5]) == 0;
        v44[5] &= v43;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)v42);
      }
    }
  }
  __writecr8(v21);
  return 3221225626LL;
}
