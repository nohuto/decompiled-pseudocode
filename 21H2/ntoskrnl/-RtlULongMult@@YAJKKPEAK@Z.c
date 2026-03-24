/*
 * XREFs of ?RtlULongMult@@YAJKKPEAK@Z @ 0x1405C0824
 * Callers:
 *     sub_14064D36C @ 0x14064D36C (sub_14064D36C.c)
 *     sub_140688274 @ 0x140688274 (sub_140688274.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongMult(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // ecx

  v3 = a2 * (unsigned __int64)a1;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *a3 = v4;
  return v3 > 0xFFFFFFFF ? 0xC0000095 : 0;
}
