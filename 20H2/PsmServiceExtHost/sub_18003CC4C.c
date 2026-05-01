/*
 * XREFs of sub_18003CC4C @ 0x18003CC4C
 * Callers:
 *     sub_18003CAD0 @ 0x18003CAD0 (sub_18003CAD0.c)
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 * Callees:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 */

__int64 sub_18003CC4C()
{
  int v0; // eax
  unsigned int v1; // ecx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_18003CC78(&v3);
  v1 = 0;
  if ( v0 >= 0 )
    LOBYTE(v1) = v3 != 0;
  return v1;
}
