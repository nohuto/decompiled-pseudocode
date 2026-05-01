/*
 * XREFs of sub_180002738 @ 0x180002738
 * Callers:
 *     sub_180001E34 @ 0x180001E34 (sub_180001E34.c)
 *     sub_18002C924 @ 0x18002C924 (sub_18002C924.c)
 *     sub_180067AF0 @ 0x180067AF0 (sub_180067AF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002738(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  v1 = 8LL << *(_BYTE *)(a1 + 32);
  if ( v1 )
  {
    v2 = 0LL;
    do
    {
      *(_QWORD *)(v2 + *(_QWORD *)(a1 + 16)) = 0LL;
      v2 += 16LL;
      result = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(result + v2 - 8) = 0LL;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
