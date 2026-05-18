/*
 * XREFs of sub_180020E28 @ 0x180020E28
 * Callers:
 *     sub_180022474 @ 0x180022474 (sub_180022474.c)
 *     sub_180022520 @ 0x180022520 (sub_180022520.c)
 *     sub_1800225CC @ 0x1800225CC (sub_1800225CC.c)
 *     sub_180022678 @ 0x180022678 (sub_180022678.c)
 *     sub_180022724 @ 0x180022724 (sub_180022724.c)
 *     sub_1800227D0 @ 0x1800227D0 (sub_1800227D0.c)
 *     sub_18002287C @ 0x18002287C (sub_18002287C.c)
 *     sub_180022928 @ 0x180022928 (sub_180022928.c)
 *     sub_1800229D4 @ 0x1800229D4 (sub_1800229D4.c)
 *     sub_180022A80 @ 0x180022A80 (sub_180022A80.c)
 *     sub_180022B2C @ 0x180022B2C (sub_180022B2C.c)
 *     sub_180022BD8 @ 0x180022BD8 (sub_180022BD8.c)
 *     sub_180022C84 @ 0x180022C84 (sub_180022C84.c)
 *     sub_180022D30 @ 0x180022D30 (sub_180022D30.c)
 *     sub_180022DDC @ 0x180022DDC (sub_180022DDC.c)
 *     sub_180022E88 @ 0x180022E88 (sub_180022E88.c)
 *     sub_180022F34 @ 0x180022F34 (sub_180022F34.c)
 *     sub_1800B1238 @ 0x1800B1238 (sub_1800B1238.c)
 *     sub_1800B12E4 @ 0x1800B12E4 (sub_1800B12E4.c)
 *     sub_1800B1390 @ 0x1800B1390 (sub_1800B1390.c)
 *     sub_1800B143C @ 0x1800B143C (sub_1800B143C.c)
 *     sub_1800B14E8 @ 0x1800B14E8 (sub_1800B14E8.c)
 *     sub_1800B1594 @ 0x1800B1594 (sub_1800B1594.c)
 *     sub_1800B1640 @ 0x1800B1640 (sub_1800B1640.c)
 *     sub_1800B16EC @ 0x1800B16EC (sub_1800B16EC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180020E28(_QWORD *a1, __int64 *a2)
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
