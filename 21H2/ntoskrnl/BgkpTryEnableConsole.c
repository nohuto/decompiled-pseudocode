/*
 * XREFs of BgkpTryEnableConsole @ 0x14039CB70
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BC90 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A97F04 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C50BC0 )
  {
    if ( byte_140C50BE9 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C113A8, 0LL);
  }
  return result;
}
