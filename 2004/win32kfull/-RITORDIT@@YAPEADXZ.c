/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x1C0103AC8
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C0103A54 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

char *RITORDIT(void)
{
  bool v0; // zf
  char *result; // rax

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit )
    return "Rit";
  v0 = (unsigned __int8)IsInputThread() == 0;
  result = "Mit";
  if ( v0 )
    return (char *)&unk_1C02F4540;
  return result;
}
