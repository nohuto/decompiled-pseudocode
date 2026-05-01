/*
 * XREFs of sub_1800863E0 @ 0x1800863E0
 * Callers:
 *     sub_180085F94 @ 0x180085F94 (sub_180085F94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800863E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  LPVOID v7; // rax
  unsigned int v8; // ecx

  v7 = VirtualAlloc(0LL, 0x10000uLL, 0x3000u, 4u);
  v8 = 0;
  a1[4] = v7;
  if ( v7 )
  {
    *a1 = a2;
    a1[2] = sub_180085E80;
    a1[3] = a4;
  }
  else
  {
    return 8;
  }
  return v8;
}
