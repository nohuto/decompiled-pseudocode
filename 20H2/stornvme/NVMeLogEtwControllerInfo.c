/*
 * XREFs of NVMeLogEtwControllerInfo @ 0x1C000D9D0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 3800) )
    return StorPortExtendedFunction(
             87LL,
             a1,
             0LL,
             0LL,
             10,
             L"NVMe Controller Config-1",
             8LL,
             4,
             0,
             0LL,
             L"CQ_Count",
             *(unsigned __int16 *)(a1 + 282),
             L"SQ_Count",
             *(unsigned __int16 *)(a1 + 280),
             L"ProcessorCount",
             *(unsigned __int16 *)(a1 + 210),
             L"MessageCount",
             *(unsigned __int16 *)(a1 + 248));
  StorPortExtendedFunction(
    87LL,
    a1,
    0LL,
    0LL,
    10,
    L"NVMe Controller Config-1",
    8LL,
    4,
    0,
    0LL,
    L"CQ_Count",
    *(unsigned __int16 *)(a1 + 282),
    L"SQ_Count",
    *(unsigned __int16 *)(a1 + 280),
    L"ProcessorCount",
    *(unsigned __int16 *)(a1 + 210),
    L"MessageCount",
    *(unsigned __int16 *)(a1 + 248));
  return StorPortExtendedFunction(
           87LL,
           a1,
           0LL,
           0LL,
           10,
           L"NVMe Controller Config-2",
           8LL,
           4,
           0,
           0LL,
           L"PollingQ_Count",
           *(unsigned __int16 *)(a1 + 284),
           L"Percent_Count",
           *(unsigned int *)(a1 + 3804),
           L"Polling_Size",
           *(unsigned int *)(a1 + 3808),
           L"Polling_Hints",
           *(unsigned int *)(a1 + 3812));
}
