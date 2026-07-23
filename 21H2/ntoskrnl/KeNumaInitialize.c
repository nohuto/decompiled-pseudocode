/*
 * XREFs of KeNumaInitialize @ 0x140A746D4
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 (*KeNumaInitialize())()
{
  __int64 (*result)(); // rax
  _QWORD v1[9]; // [rsp+30h] [rbp-48h] BYREF
  int v2; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  memset(v1, 0, 0x40uLL);
  result = (__int64 (*)())((__int64 (__fastcall *)(__int64, __int64, _QWORD *, int *))off_140C00A68[0])(
                            11LL,
                            64LL,
                            v1,
                            &v2);
  if ( (int)result >= 0 )
  {
    KeNumberNodes = v1[0];
    KiNumaQueryProcessorNode = (__int64 (__fastcall *)(_QWORD))v1[1];
    KiNumaQueryNodeCapacity[0] = (__int64 (__fastcall *)())v1[6];
    KiNumaQueryNodeDistance[0] = (__int64 (__fastcall *)())v1[7];
    KiNumaQueryProximityNode = v1[3];
    KiNumaQueryProximityId = v1[5];
    result = KiQueryProximityNode;
    PnpQueryProximityNode = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiQueryProximityNode;
  }
  return result;
}
