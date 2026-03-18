/*
 * XREFs of BgkpTryEnableConsole @ 0x140399500
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A94C8C (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C50AB8 )
  {
    if ( byte_140C50AD1 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C11228, 0LL);
  }
  return result;
}
