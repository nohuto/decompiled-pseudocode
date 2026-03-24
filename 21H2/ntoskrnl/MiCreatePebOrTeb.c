/*
 * XREFs of MiCreatePebOrTeb @ 0x14064C104
 * Callers:
 *     MmCreatePeb @ 0x140611D98 (MmCreatePeb.c)
 *     MmCreateTeb @ 0x14064BE0C (MmCreateTeb.c)
 *     MiInitializeWowPeb @ 0x14068BBB4 (MiInitializeWowPeb.c)
 * Callees:
 *     MiAllocateFromSubAllocatedRegion @ 0x14064C180 (MiAllocateFromSubAllocatedRegion.c)
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
