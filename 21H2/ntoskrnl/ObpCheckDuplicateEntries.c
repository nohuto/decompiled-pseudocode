/*
 * XREFs of ObpCheckDuplicateEntries @ 0x1406BC824
 * Callers:
 *     ObpCaptureBoundaryDescriptor @ 0x1406BC5AC (ObpCaptureBoundaryDescriptor.c)
 * Callees:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14066885C (RtlEnumerateBoundaryDescriptorEntries.c)
 */

_BOOL8 __fastcall ObpCheckDuplicateEntries(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v2[2] = 0LL;
  v6 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  v2[0] = a1;
  v2[1] = a1;
  return (int)RtlEnumerateBoundaryDescriptorEntries(
                (_DWORD *)(a1 + 48),
                (unsigned int (__fastcall *)(_DWORD *, __int64))ObpCompareEntryLevel1,
                (__int64)v2) >= 0
      && v5 >= 0
      && v4 == v3;
}
