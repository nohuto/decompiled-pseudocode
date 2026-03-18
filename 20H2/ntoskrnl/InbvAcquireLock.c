/*
 * XREFs of InbvAcquireLock @ 0x1404FD35C
 * Callers:
 *     DisplayBootBitmap @ 0x1403B3710 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1404FD61C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FD670 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C509E8;
  if ( qword_140C509E8 )
  {
    result = *(__int64 (**)(void))(qword_140C509E8 + 152);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
