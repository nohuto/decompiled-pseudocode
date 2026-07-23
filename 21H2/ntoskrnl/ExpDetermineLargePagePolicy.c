/*
 * XREFs of ExpDetermineLargePagePolicy @ 0x1403C4178
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1403C3D54 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140644560 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall ExpDetermineLargePagePolicy(__int64 a1)
{
  unsigned __int128 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 16) = 80;
  *(_QWORD *)&v2 = MmGetNumberOfPhysicalPages(0LL);
  v3 = (unsigned __int64)v2 >> 8;
  v4 = (unsigned __int64)v2 >> 9;
  if ( (unsigned __int64)v2 >> 8 < 0x1000 )
  {
    v5 = (unsigned __int64)v2 >> 14;
  }
  else
  {
    if ( v3 < 0x4000 )
    {
      v2 = v4 * (unsigned __int128)0x47AE147AE147AE15uLL;
      v4 = *((_QWORD *)&v2 + 1) + ((v4 - *((_QWORD *)&v2 + 1)) >> 1);
    }
    v5 = v4 >> 4;
  }
  *(_QWORD *)(a1 + 8) = -1LL;
  *(_QWORD *)a1 = v5;
  if ( v3 <= 0x200 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 8);
    if ( v3 < 0x800 )
      *(_QWORD *)&v2 = 2LL;
    *(_QWORD *)(a1 + 8) = v2;
  }
  return v2;
}
