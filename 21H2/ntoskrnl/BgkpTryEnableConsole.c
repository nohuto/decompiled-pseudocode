/*
 * XREFs of BgkpTryEnableConsole @ 0x1403A78C0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B56D04 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C54D30 )
  {
    if ( byte_140C54D49 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C0B8C8, 0LL);
  }
  return result;
}
