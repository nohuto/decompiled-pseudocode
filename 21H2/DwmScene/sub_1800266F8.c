/*
 * XREFs of sub_1800266F8 @ 0x1800266F8
 * Callers:
 *     sub_180027D44 @ 0x180027D44 (sub_180027D44.c)
 *     sub_180027DF0 @ 0x180027DF0 (sub_180027DF0.c)
 *     sub_180027E9C @ 0x180027E9C (sub_180027E9C.c)
 *     sub_180027F48 @ 0x180027F48 (sub_180027F48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800280A0 @ 0x1800280A0 (sub_1800280A0.c)
 *     sub_18002814C @ 0x18002814C (sub_18002814C.c)
 *     sub_1800281F8 @ 0x1800281F8 (sub_1800281F8.c)
 *     sub_1800282A4 @ 0x1800282A4 (sub_1800282A4.c)
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_1800283FC @ 0x1800283FC (sub_1800283FC.c)
 *     sub_1800284A8 @ 0x1800284A8 (sub_1800284A8.c)
 *     sub_180028554 @ 0x180028554 (sub_180028554.c)
 *     sub_180028600 @ 0x180028600 (sub_180028600.c)
 *     sub_1800286AC @ 0x1800286AC (sub_1800286AC.c)
 *     sub_180028758 @ 0x180028758 (sub_180028758.c)
 *     sub_180028804 @ 0x180028804 (sub_180028804.c)
 *     sub_1800B6B08 @ 0x1800B6B08 (sub_1800B6B08.c)
 *     sub_1800B6BB4 @ 0x1800B6BB4 (sub_1800B6BB4.c)
 *     sub_1800B6C60 @ 0x1800B6C60 (sub_1800B6C60.c)
 *     sub_1800B6D0C @ 0x1800B6D0C (sub_1800B6D0C.c)
 *     sub_1800B6DB8 @ 0x1800B6DB8 (sub_1800B6DB8.c)
 *     sub_1800B6E64 @ 0x1800B6E64 (sub_1800B6E64.c)
 *     sub_1800B6F10 @ 0x1800B6F10 (sub_1800B6F10.c)
 *     sub_1800B6FBC @ 0x1800B6FBC (sub_1800B6FBC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800266F8(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v2 )
  {
    v3 = a2[1];
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = a2[1];
    }
    *a1 = v2;
    a1[1] = v3;
  }
  return a1;
}
