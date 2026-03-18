/*
 * XREFs of InitQEntryLookaside @ 0x1C0291870
 * Callers:
 *     Win32UserInitialize @ 0x1C0291A10 (Win32UserInitialize.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C0072710 (Win32AllocPagedLookasideList.c)
 */

__int64 InitQEntryLookaside()
{
  QEntryLookaside = Win32AllocPagedLookasideList(160LL, 0x616C7355u, 0x6D717355u, 0x10u);
  if ( QEntryLookaside
    && (QLookaside = (void *)Win32AllocPagedLookasideList(488LL, 0x616C7355u, 0x75717355u, 0x10u)) != 0LL )
  {
    return 0LL;
  }
  else
  {
    return 3221225495LL;
  }
}
