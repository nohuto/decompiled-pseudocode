/*
 * XREFs of UsbhBusIfLocationGetLocationStrings @ 0x1C004BC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1C004B580 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall UsbhBusIfLocationGetLocationStrings(__int64 a1, _QWORD *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = 0LL;
  PoolWithTag[4] = 0;
  RtlStringCchPrintfExW(
    (NTSTRSAFE_PWSTR)PoolWithTag,
    0xAuLL,
    0LL,
    &pcchRemaining,
    0x200u,
    L"USB(%d)",
    *(unsigned __int16 *)(a1 + 1428));
  result = 0LL;
  *a2 = v5;
  return result;
}
