/*
 * XREFs of MiInitializeTbFlushing @ 0x140A536A8
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140A536F8 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140A539C4 (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C4DD90 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C4DD90 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_140C4DD90 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_140C4DD90 == 2048 );
  }
  return result;
}
