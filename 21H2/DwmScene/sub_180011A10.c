/*
 * XREFs of sub_180011A10 @ 0x180011A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B9C8 @ 0x18001B9C8 (sub_18001B9C8.c)
 */

__int64 __fastcall sub_180011A10(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(unsigned __int8)sub_18001B9C8(qword_18021F908) )
    v3 = a2 * 3.1415927;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  else
    *(float *)(a1 + 68) = v3;
  return 0LL;
}
