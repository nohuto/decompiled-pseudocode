/*
 * XREFs of sub_18006EB6C @ 0x18006EB6C
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 * Callees:
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 */

void __fastcall sub_18006EB6C(__int64 a1, char a2)
{
  unsigned int v4; // edi

  if ( *(_BYTE *)(a1 + 140) != a2 )
  {
    v4 = 0;
    *(_DWORD *)(a1 + 80) = 0;
    RtlReleaseSRWLockExclusive(a1 + 72);
    if ( sub_180045CFC() )
    {
      LOBYTE(v4) = a2 != 0;
      NotifyGameModeExtensionRecipientsPresent(v4);
    }
    *(_BYTE *)(a1 + 140) = a2;
    RtlAcquireSRWLockExclusive(a1 + 72);
    *(_DWORD *)(a1 + 80) = GetCurrentThreadId();
  }
}
