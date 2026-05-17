/*
 * XREFs of _TpSetPoolThreadBasePriority@8 @ 0x4B2ABA70
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

int __stdcall TpSetPoolThreadBasePriority(int a1, int a2)
{
  if ( !a1 )
    return -1073741811;
  if ( a2 < 15 )
  {
    if ( a2 <= -15 )
      a2 = -16;
  }
  else
  {
    a2 = 16;
  }
  return ZwSetInformationWorkerFactory(*(_DWORD *)(a1 + 36), 11, &a2, 4);
}
