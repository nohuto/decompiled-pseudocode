/*
 * XREFs of RtlUdiv128 @ 0x180103020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlUdiv128(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r11

  v5 = 64LL;
  do
  {
    v6 = (2 * a1) | (a2 >> 63);
    v7 = v6 | (a1 >> 63);
    v8 = 2 * a2;
    v9 = 2 * a2;
    a1 = v6 - a3;
    if ( v7 < a3 )
      a1 = v6;
    a2 = v9 | 1;
    if ( v7 < a3 )
      a2 = v8;
    --v5;
  }
  while ( v5 );
  if ( a4 )
    *a4 = a1;
  return a2;
}
