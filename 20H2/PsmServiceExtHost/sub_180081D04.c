/*
 * XREFs of sub_180081D04 @ 0x180081D04
 * Callers:
 *     sub_180082200 @ 0x180082200 (sub_180082200.c)
 * Callees:
 *     sub_180007FF8 @ 0x180007FF8 (sub_180007FF8.c)
 *     sub_180025704 @ 0x180025704 (sub_180025704.c)
 *     sub_180025EC8 @ 0x180025EC8 (sub_180025EC8.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_180027C9C @ 0x180027C9C (sub_180027C9C.c)
 */

unsigned __int64 __fastcall sub_180081D04(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rbx

  for ( result = sub_180025704(a1 + 32); ; result = sub_180027434((_QWORD *)v4) )
  {
    v4 = result;
    if ( !result )
      break;
    sub_180007FF8(result, v2);
    *(_BYTE *)(v4 + 185) |= 8u;
    sub_180025EC8(v4);
    sub_180027C9C(v4, v3);
  }
  return result;
}
