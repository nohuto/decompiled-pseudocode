/*
 * XREFs of ?RITORDIT@@YGPADXZ @ 0xD3CF8
 * Callers:
 *     _MasterInputThreadPrepareForRitTakeover@0 @ 0xD3CB8 (_MasterInputThreadPrepareForRitTakeover@0.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

char *__stdcall RITORDIT()
{
  PKTHREAD CurrentThread; // eax
  bool v1; // zf
  char *result; // eax

  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) == _gptiRit )
    return "Rit";
  v1 = (unsigned __int8)IsInputThread() == 0;
  result = "Mit";
  if ( v1 )
    return byte_FC858;
  return result;
}
