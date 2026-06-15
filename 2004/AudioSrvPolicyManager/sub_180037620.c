/*
 * XREFs of sub_180037620 @ 0x180037620
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     sub_180037338 @ 0x180037338 (sub_180037338.c)
 */

__int64 __fastcall sub_180037620(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v5) = a2;
  v2 = sub_180037338(a1, a2, &v5);
  v3 = 0;
  if ( v2 >= 0 )
    return v5;
  return v3;
}
