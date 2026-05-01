/*
 * XREFs of sub_180011CD0 @ 0x180011CD0
 * Callers:
 *     sub_1800101F0 @ 0x1800101F0 (sub_1800101F0.c)
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_180010360 @ 0x180010360 (sub_180010360.c)
 *     sub_1800104B0 @ 0x1800104B0 (sub_1800104B0.c)
 *     sub_1800104D0 @ 0x1800104D0 (sub_1800104D0.c)
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 *     sub_1800105A0 @ 0x1800105A0 (sub_1800105A0.c)
 *     sub_1800378F0 @ 0x1800378F0 (sub_1800378F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180011CD0(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 136);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
