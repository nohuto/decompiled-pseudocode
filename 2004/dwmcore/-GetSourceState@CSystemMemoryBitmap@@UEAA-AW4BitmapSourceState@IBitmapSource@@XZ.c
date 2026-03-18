/*
 * XREFs of ?GetSourceState@CSystemMemoryBitmap@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x180194C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetSourceState(__int64 a1)
{
  return (unsigned int)(*(_QWORD *)(a1 + 240) != 0LL) + 1;
}
