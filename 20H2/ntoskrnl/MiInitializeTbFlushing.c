/*
 * XREFs of MiInitializeTbFlushing @ 0x140A53D28
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140A53D78 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140A54044 (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C4DE10 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C4DE10 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_140C4DE10 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_140C4DE10 == 2048 );
  }
  return result;
}
