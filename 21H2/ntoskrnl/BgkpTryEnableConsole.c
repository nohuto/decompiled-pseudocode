/*
 * XREFs of BgkpTryEnableConsole @ 0x14039CA20
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BB40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A96F04 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C50B80 )
  {
    if ( byte_140C50BAC )
      return _InterlockedExchange64((volatile __int64 *)&stru_140C113C8, 0LL);
  }
  return result;
}
