/*
 * XREFs of sub_18007CD21 @ 0x18007CD21
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18007CD21(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 72) = sub_1800C437C(
                           *(_QWORD *)(a2 + 56),
                           190LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp");
  return 0LL;
}
