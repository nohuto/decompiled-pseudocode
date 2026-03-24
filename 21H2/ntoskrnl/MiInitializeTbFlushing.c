/*
 * XREFs of MiInitializeTbFlushing @ 0x140A55330
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140A5564C (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C4DF90 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C4DF90 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_140C4DF90 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_140C4DF90 == 2048 );
  }
  return result;
}
