/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00755E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveInputOfType @ 0x1C0075600 (RIMRemoveInputOfType.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this)
{
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
