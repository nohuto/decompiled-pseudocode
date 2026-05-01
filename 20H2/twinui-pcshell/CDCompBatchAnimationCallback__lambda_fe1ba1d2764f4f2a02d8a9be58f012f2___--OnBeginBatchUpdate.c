/*
 * XREFs of CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::OnBeginBatchUpdate @ 0x18040E9C0
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InitializeTimer @ 0x180411594 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--_InitializeTimer.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::OnBeginBatchUpdate(
        __int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40);
  if ( !v1 )
  {
    *(_DWORD *)(a1 + 28) = 1;
    CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InitializeTimer();
    v1 = *(_DWORD *)(a1 + 40);
  }
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
