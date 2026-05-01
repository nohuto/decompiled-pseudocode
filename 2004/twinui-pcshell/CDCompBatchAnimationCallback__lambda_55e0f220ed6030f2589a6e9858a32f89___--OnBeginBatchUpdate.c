/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::OnBeginBatchUpdate @ 0x1803B1A30
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InitializeTimer @ 0x1803B20E4 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_InitializeTimer.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::OnBeginBatchUpdate(
        __int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( !v1 )
  {
    *(_DWORD *)(a1 + 36) = 1;
    CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InitializeTimer();
    v1 = *(_DWORD *)(a1 + 48);
  }
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
