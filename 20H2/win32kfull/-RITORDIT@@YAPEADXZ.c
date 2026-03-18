/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x1C01041C8
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C0104154 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
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
    return (char *)&unk_1C02F3B60;
  return result;
}
