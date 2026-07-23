/*
 * XREFs of HalpIommuInitializeDmarPageTable @ 0x1404DBEDC
 * Callers:
 *     HalpIommuCreateDmarPageTable @ 0x1404DBBFC (HalpIommuCreateDmarPageTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14030E640 (KeInvalidateRangeAllCachesNoIpi.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404DB9D8 (HalpIommuAllocateAndZeroPageTable.c)
 */

__int64 __fastcall HalpIommuInitializeDmarPageTable(
        int a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *a7)
{
  __int64 (__fastcall **v10)(); // rax
  unsigned int v12; // edx
  int v13; // r9d
  const char *v14; // rcx
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // rdi
  int v18; // ebp
  unsigned int v19; // r14d
  _DWORD *v20; // r15
  unsigned int v21; // r13d
  __int64 v22; // r12
  void *v23; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  memset(a7, 0, 0x60uLL);
  if ( a1 )
  {
    if ( a1 != 3 )
      return 3221225485LL;
    v10 = HsaSlPhyPteInterface;
  }
  else
  {
    v10 = IvtSlPhyPteInterface;
  }
  *((_DWORD *)a7 + 7) = 3;
  v12 = 0;
  *((_QWORD *)a7 + 11) = v10;
  *(_DWORD *)a7 = a1;
  *((_DWORD *)a7 + 6) = a3;
  v13 = 12;
  if ( a3 )
  {
    v14 = "\t";
    do
    {
      *(_DWORD *)&v14[a7 - "\t" + 36] = *(_DWORD *)v14;
      v15 = a3 - v12++;
      *(_DWORD *)&a7[4 * v15 + 56] = v13;
      v13 += *(_DWORD *)v14;
      v14 += 4;
    }
    while ( v12 < a3 );
  }
  *((_DWORD *)a7 + 8) = 0;
  v16 = HalpIommuAllocateAndZeroPageTable((__int64)a7, 0, a6);
  *((_QWORD *)a7 + 2) = v16;
  v17 = (__int64)v16;
  if ( v16 )
  {
    v18 = 0;
    v19 = a3 - a2;
    if ( a3 == a2 )
    {
LABEL_16:
      *((_QWORD *)a7 + 1) = 0LL;
      return 0LL;
    }
    v20 = a7 + 36;
    while ( 1 )
    {
      v21 = v18 + 1;
      v22 = 1 << *v20 << *((_DWORD *)a7 + 7);
      v23 = HalpIommuAllocateAndZeroPageTable((__int64)a7, v18 + 1, a6);
      *(_QWORD *)(v22 + v17) = v23;
      if ( !v23 )
        break;
      PhysicalAddress = MmGetPhysicalAddress(v23);
      (**((void (__fastcall ***)(__int64, _QWORD, PHYSICAL_ADDRESS))a7 + 11))(v17, a3 - v18 - 1, PhysicalAddress);
      if ( !HalpIommuPageTableCacheCoherent )
        KeInvalidateRangeAllCachesNoIpi(v17, 1 << *((_DWORD *)a7 + 7));
      v17 = *(_QWORD *)(v22 + v17);
      ++v20;
      ++v18;
      if ( v21 >= v19 )
        goto LABEL_16;
    }
  }
  return 3221225626LL;
}
