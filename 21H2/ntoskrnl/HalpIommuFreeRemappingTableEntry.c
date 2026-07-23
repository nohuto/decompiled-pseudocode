/*
 * XREFs of HalpIommuFreeRemappingTableEntry @ 0x1404C57F0
 * Callers:
 *     HalpIrtFreeIndex @ 0x140865F78 (HalpIrtFreeIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuFreeRemappingTableEntry(unsigned int a1, unsigned int a2)
{
  __int64 *v2; // rbx
  unsigned int v5; // r8d
  __int64 *v6; // rcx
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD); // rax

  v2 = (__int64 *)HalpIommuList;
  v5 = 0;
  while ( v2 != &HalpIommuList )
  {
    v6 = v2;
    v2 = (__int64 *)*v2;
    if ( (v6[57] & 0x40) != 0 )
    {
      v7 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v6[20];
      if ( v7 )
      {
        v5 = v7(v6[2], a1, a2);
        if ( v5 != -1073741594 )
          break;
      }
    }
  }
  return v5;
}
