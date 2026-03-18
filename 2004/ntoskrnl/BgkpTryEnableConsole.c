/*
 * XREFs of BgkpTryEnableConsole @ 0x140399C90
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A94414 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C50978 )
  {
    if ( byte_140C50999 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C11238, 0LL);
  }
  return result;
}
