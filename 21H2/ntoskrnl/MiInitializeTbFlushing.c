/*
 * XREFs of MiInitializeTbFlushing @ 0x140B092F0
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140B09340 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140B09610 (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C507D0 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C507D0 == TbSize && TbSize != 2048 )
  {
    qword_140C507D0 = -1LL;
    return MiInitializeTbFlush(2048LL);
  }
  return result;
}
