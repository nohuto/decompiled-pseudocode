/*
 * XREFs of MiInitializeTbFlushing @ 0x140A4D9A8
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140A4D9F8 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140A4DCC4 (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C4DED0 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C4DED0 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_140C4DED0 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_140C4DED0 == 2048 );
  }
  return result;
}
