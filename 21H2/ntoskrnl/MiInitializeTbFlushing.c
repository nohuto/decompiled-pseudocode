/*
 * XREFs of MiInitializeTbFlushing @ 0x140A56330
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140A56380 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140A5664C (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C4DFD0 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C4DFD0 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_140C4DFD0 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_140C4DFD0 == 2048 );
  }
  return result;
}
