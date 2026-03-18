/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C0056390
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveInputOfType @ 0x1C00563B0 (RIMRemoveInputOfType.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this)
{
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
