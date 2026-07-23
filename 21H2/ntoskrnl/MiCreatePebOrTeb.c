/*
 * XREFs of MiCreatePebOrTeb @ 0x140640F24
 * Callers:
 *     MiInitializeWowPeb @ 0x1405EBA24 (MiInitializeWowPeb.c)
 *     MmCreateTeb @ 0x140640C2C (MmCreateTeb.c)
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 * Callees:
 *     MiAllocateFromSubAllocatedRegion @ 0x140640FA0 (MiAllocateFromSubAllocatedRegion.c)
 */

__int64 __fastcall MiCreatePebOrTeb(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx

  v5 = 0LL;
  *a3 = 0LL;
  if ( !a1 )
  {
    v6 = 1992LL;
    return MiAllocateFromSubAllocatedRegion(v5, (v6 + 4095) & 0xFFFFF000LL, a3, a2);
  }
  v6 = 6200LL;
  if ( a1 == 3 )
  {
LABEL_3:
    if ( (unsigned int)(a1 - 3) > 2 )
      return MiAllocateFromSubAllocatedRegion(v5, (v6 + 4095) & 0xFFFFF000LL, a3, a2);
    goto LABEL_4;
  }
  if ( a1 == 4 )
  {
    v6 = 12288LL;
  }
  else
  {
    if ( a1 != 5 )
    {
      if ( a1 == 1 )
      {
        v6 = 1192LL;
        return MiAllocateFromSubAllocatedRegion(v5, (v6 + 4095) & 0xFFFFF000LL, a3, a2);
      }
      if ( a1 == 2 )
        v6 = 2032LL;
      goto LABEL_3;
    }
    v6 = 14392LL;
  }
LABEL_4:
  if ( a2 )
    v5 = 1LL;
  return MiAllocateFromSubAllocatedRegion(v5, (v6 + 4095) & 0xFFFFF000LL, a3, a2);
}
