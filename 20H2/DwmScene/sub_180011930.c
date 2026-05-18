/*
 * XREFs of sub_180011930 @ 0x180011930
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A2F8 @ 0x18001A2F8 (sub_18001A2F8.c)
 */

__int64 __fastcall sub_180011930(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(unsigned __int8)sub_18001A2F8(qword_180218710) )
    v3 = a2 * 3.1415927;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  else
    *(float *)(a1 + 68) = v3;
  return 0LL;
}
