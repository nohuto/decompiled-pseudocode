/*
 * XREFs of ClearAppStarting @ 0x1C0031440
 * Callers:
 *     InitSystemThread @ 0x1C0030EE0 (InitSystemThread.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearAppStarting(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx

  result = gppiStarting;
  v2 = &gppiStarting;
  while ( result )
  {
    if ( result == a1 )
    {
      result = *(_QWORD *)(a1 + 368);
      *v2 = result;
      break;
    }
    v2 = (__int64 *)(result + 368);
    result = *(_QWORD *)(result + 368);
  }
  *(_DWORD *)(a1 + 12) &= ~0x40u;
  return result;
}
