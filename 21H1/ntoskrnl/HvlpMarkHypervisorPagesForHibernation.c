/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1404F2B3C
 * Callers:
 *     HvlMarkHiberPhase @ 0x1404F2450 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x1404F5BE8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1404F5DCC (HvlpStartPageListIteration.c)
 */

void HvlpMarkHypervisorPagesForHibernation()
{
  int PageList; // ebx
  ULONG_PTR Length; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Address = 0LL;
  LODWORD(Length) = 0;
  HvlpStartPageListIteration(0LL);
  do
  {
    PageList = HvlpGetPageList(0LL, &Address, &Length);
    if ( (_DWORD)Length )
      PoSetHiberRange(0LL, 0x14000u, Address, (unsigned int)Length, 0x686C7648u);
  }
  while ( PageList == 261 );
  qword_140C47428 = 0LL;
  HvlpIteratorHibernate = 0;
}
