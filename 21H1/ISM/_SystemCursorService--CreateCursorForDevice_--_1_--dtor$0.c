/*
 * XREFs of _SystemCursorService::CreateCursorForDevice_::_1_::dtor$0 @ 0x18013F35F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemCursorService::CreateCursorForDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::shared_ptr<SystemCursor>::~shared_ptr<SystemCursor>(a2 + 64);
}
