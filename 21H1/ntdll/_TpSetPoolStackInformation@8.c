/*
 * XREFs of _TpSetPoolStackInformation@8 @ 0x4B2ED670
 * Callers:
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _TpSetDefaultPoolStackInformation@4 @ 0x4B383D40 (_TpSetDefaultPoolStackInformation@4.c)
 * Callees:
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

int __stdcall TpSetPoolStackInformation(int a1, int a2)
{
  if ( a1 && a2 )
    return ZwSetInformationWorkerFactory(*(_DWORD *)(a1 + 36), 10, a2, 8);
  else
    return -1073741811;
}
