/*
 * XREFs of sub_18000E244 @ 0x18000E244
 * Callers:
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     sub_180004618 @ 0x180004618 (sub_180004618.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800065A4 @ 0x1800065A4 (sub_1800065A4.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_18000688C @ 0x18000688C (sub_18000688C.c)
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_180009174 @ 0x180009174 (sub_180009174.c)
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_18000E2A0 @ 0x18000E2A0 (sub_18000E2A0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001E400 @ 0x18001E400 (sub_18001E400.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     sub_18002AA58 @ 0x18002AA58 (sub_18002AA58.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_18007D71C @ 0x18007D71C (sub_18007D71C.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 *     sub_18007E404 @ 0x18007E404 (sub_18007E404.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18000E244(__int64 a1)
{
  _QWORD *result; // rax

  *(_DWORD *)(a1 + 16) = 0;
  result = (_QWORD *)RtlReleaseSRWLockExclusive(a1 + 8);
  if ( dwTlsIndex != -1 )
  {
    result = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)result & 8) == 0 )
      __int2c();
    if ( result[4]-- == 1LL )
      *result &= ~8uLL;
  }
  return result;
}
