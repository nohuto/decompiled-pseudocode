/*
 * XREFs of CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::OnEndBatchUpdate @ 0x18040F3A0
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback @ 0x180411FE4 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--_InvokeCallback.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::OnEndBatchUpdate(
        __int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = (*(_DWORD *)(a1 + 40))-- == 1;
  if ( v1 )
  {
    v1 = *(_DWORD *)(a1 + 24) == 0;
    *(_DWORD *)(a1 + 28) = 2;
    if ( v1 || !*(_QWORD *)(a1 + 32) )
      return CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback();
  }
  return result;
}
