/*
 * XREFs of HalpIommuAllocateRemappingTableEntry @ 0x1404BFD48
 * Callers:
 *     HalpIrtAllocateIndex @ 0x140861054 (HalpIrtAllocateIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuAllocateRemappingTableEntry(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 *v5; // rbx
  unsigned int v6; // r10d
  __int64 *v11; // rcx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int); // r11
  int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]

  v5 = (__int64 *)HalpIommuList;
  v6 = 0;
  while ( v5 != &HalpIommuList )
  {
    v11 = v5;
    v5 = (__int64 *)*v5;
    if ( (v11[57] & 0x40) != 0 )
    {
      v12 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int))v11[19];
      if ( v12 )
      {
        LOBYTE(v16) = (a4 >> 5) & 7;
        LOBYTE(v15) = a4 & 0x1F;
        LOWORD(v14) = (unsigned __int8)a3;
        v6 = v12(v11[2], a1, a2, a3 >> 8, v14, v15, v16, a5);
        if ( v6 != -1073741594 )
          break;
      }
    }
  }
  return v6;
}
