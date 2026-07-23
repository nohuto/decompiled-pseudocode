/*
 * XREFs of HalpIommuMapLogical @ 0x1404DC064
 * Callers:
 *     HalpIommuDomainMapLogical @ 0x1404C94B0 (HalpIommuDomainMapLogical.c)
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

__int64 __fastcall HalpIommuMapLogical(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  int v6; // r11d
  unsigned __int64 v7; // r14
  unsigned int v8; // r10d
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // r13d
  __int64 v12; // rbx
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // rcx
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
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // r11
  unsigned int v34; // esi
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  int v40; // eax
  _DWORD *v41; // r8
  int v43; // [rsp+30h] [rbp-A8h]
  char v44; // [rsp+34h] [rbp-A4h]
  unsigned int v45; // [rsp+38h] [rbp-A0h]
  __int64 v46; // [rsp+40h] [rbp-98h]
  __int64 v47; // [rsp+40h] [rbp-98h]
  __int64 v48; // [rsp+48h] [rbp-90h] BYREF
  __int64 v49; // [rsp+50h] [rbp-88h]
  __int64 v50; // [rsp+58h] [rbp-80h]
  _OWORD v51[3]; // [rsp+60h] [rbp-78h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0;
  v9 = a6;
  v10 = 0LL;
  v49 = a4;
  v44 = v6;
  v11 = 1 << v6;
  LODWORD(v12) = 0;
  v45 = 1 << v6;
  v51[0] = v7;
  memset(&v51[1], 0, 32);
  v43 = 0;
  v50 = a6;
  v48 = 0LL;
  if ( !a5 )
    return 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v12 < v14 - 1 )
      break;
LABEL_22:
    v30 = *(_DWORD *)(a2 + 4LL * (unsigned int)v12 + 36);
    if ( v30 < 0x40 )
      v31 = (1LL << v30) - 1;
    else
      LODWORD(v31) = -1;
    v32 = v31 & (v9 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v12 + 60));
    v33 = v7 + (unsigned int)(v32 << v6);
    v34 = (1 << *(_DWORD *)(a2 + 4LL * (unsigned int)(v14 - 1) + 36)) - v32;
    v47 = v33;
    if ( (unsigned int)a5 - v8 <= v34 )
      v34 = a5 - v8;
    v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(a2 + 88) + 16LL))(
            v33,
            v49 + 8LL * v8,
            3LL,
            v34);
    v10 += (unsigned int)(v35 << 12);
    v48 = v10;
    if ( v35 != v34 )
    {
      HalpIommuUnmapLogicalRange(a2, &v48, v50);
      return 3221225485LL;
    }
    if ( !HalpIommuPageTableCacheCoherent )
      KeInvalidateRangeAllCachesNoIpi(v47, v11 * v34);
    v8 = v34 + v43;
    v36 = v9 + ((unsigned __int64)v34 << 12);
    v43 += v34;
    if ( (_DWORD)v12 )
    {
      do
      {
        v37 = (unsigned int)(v12 - 1);
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v37 + 60)) & v36) == (v9 & (1LL << *(_DWORD *)(a2 + 4 * v37 + 60))) )
          break;
        LODWORD(v12) = v12 - 1;
      }
      while ( (_DWORD)v37 );
    }
    v9 += (unsigned __int64)v34 << 12;
    a6 = v36;
    v7 = *((_QWORD *)v51 + (unsigned int)v12);
    if ( v8 >= a5 )
      return 0LL;
    LOBYTE(v6) = v44;
  }
  v15 = (unsigned int)v12;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a2 + 4 * v15 + 36);
    v17 = v7 + (1 << v16 << v6);
    if ( v16 < 0x40 )
      v18 = (1LL << v16) - 1;
    else
      LODWORD(v18) = -1;
    v19 = (unsigned int)v18 & (unsigned int)(v9 >> *(_DWORD *)(a2 + 4 * v15 + 60));
    v46 = (unsigned int)v19;
    v20 = *(_QWORD *)(v17 + 8 * v19);
    if ( !v20 )
      break;
LABEL_20:
    v9 = a6;
    v12 = (unsigned int)(v12 + 1);
    v7 = v20;
    v15 = (unsigned int)v12;
    *((_QWORD *)v51 + v12) = v20;
    if ( (unsigned int)v12 >= v14 - 1 )
    {
      v10 = v48;
      v11 = v45;
      v8 = v43;
      goto LABEL_22;
    }
  }
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  if ( *(_QWORD *)(v17 + 8LL * (unsigned int)v19) )
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
    LOBYTE(v6) = v44;
    v20 = *(_QWORD *)(v17 + 8 * v46);
    goto LABEL_20;
  }
  v22 = HalpIommuAllocateAndZeroPageTable(a2, (int)v12 + 1, 0LL);
  *(_QWORD *)(v17 + 8LL * (unsigned int)v19) = v22;
  if ( v22 )
  {
    PhysicalAddress = MmGetPhysicalAddress(v22);
    v24 = v7 + (unsigned int)((_DWORD)v19 << v44);
    (**(void (__fastcall ***)(__int64, _QWORD, PHYSICAL_ADDRESS))(a2 + 88))(
      v24,
      (unsigned int)(*(_DWORD *)(a2 + 24) - v12 - 1),
      PhysicalAddress);
    if ( !HalpIommuPageTableCacheCoherent )
      KeInvalidateRangeAllCachesNoIpi(v24, v45);
    goto LABEL_12;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 8));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v41 = v39->SchedulerAssist;
        v29 = (v40 & v41[5]) == 0;
        v41[5] &= v40;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)v39);
      }
    }
  }
  __writecr8(v21);
  return 3221225626LL;
}
