/*
 * XREFs of sub_18007A6FB @ 0x18007A6FB
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18007A6FB(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 56) = sub_1800C437C(
                           *(_QWORD *)(a2 + 280),
                           181LL,
                           "avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp");
  return 0LL;
}
