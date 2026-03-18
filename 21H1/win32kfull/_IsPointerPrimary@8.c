/*
 * XREFs of _IsPointerPrimary@8 @ 0x15BB2A
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall IsPointerPrimary(int a1, unsigned __int16 a2)
{
  unsigned int result; // eax

  result = CTouchProcessor::GetThreadPointerData(
             _gpTouchProcessor,
             (struct tagTHREADINPUTPOINTERLIST *)(a1 + 612),
             a2,
             0,
             0,
             0);
  if ( result )
    return CTouchProcessor::IsPointerPrimary(_gpTouchProcessor, result);
  return result;
}
