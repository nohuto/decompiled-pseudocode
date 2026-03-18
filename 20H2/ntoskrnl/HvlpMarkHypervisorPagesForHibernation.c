/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1404F69FC
 * Callers:
 *     HvlMarkHiberPhase @ 0x1404F6310 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140387900 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x1404F9AC8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1404F9CAC (HvlpStartPageListIteration.c)
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
  qword_140C472E8 = 0LL;
  HvlpIteratorHibernate = 0;
}
