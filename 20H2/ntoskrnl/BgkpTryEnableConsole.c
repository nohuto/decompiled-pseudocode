/*
 * XREFs of BgkpTryEnableConsole @ 0x14039C150
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A9A074 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C50A08 )
  {
    if ( byte_140C50A21 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C11258, 0LL);
  }
  return result;
}
