/*
 * XREFs of sub_180007F10 @ 0x180007F10
 * Callers:
 *     sub_180002F50 @ 0x180002F50 (sub_180002F50.c)
 *     sub_180007EAC @ 0x180007EAC (sub_180007EAC.c)
 *     sub_18001E880 @ 0x18001E880 (sub_18001E880.c)
 *     sub_180063B30 @ 0x180063B30 (sub_180063B30.c)
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180007F10(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx

  v3 = -1LL;
  if ( a2 == -1 || a1 == -1LL )
  {
    *a3 = -1LL;
    return 0;
  }
  v5 = a1 + a2;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  v6 = a1 + a2 < a1 ? 0xC0000095 : 0;
  *a3 = v3;
  if ( v5 >= a1 )
    return 0;
  return v6;
}
