/*
 * XREFs of sub_180020350 @ 0x180020350
 * Callers:
 *     sub_18001CC40 @ 0x18001CC40 (sub_18001CC40.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 */

char __fastcall sub_180020350(__int64 a1, _WORD **a2, unsigned __int64 a3)
{
  char v3; // al
  _WORD *v4; // rbx
  _WORD *v8; // rbp
  size_t v9; // r9
  char result; // al

  v3 = *(_BYTE *)(a1 + 2);
  v4 = *a2;
  if ( v3 == 1 )
  {
    v8 = v4 + 1;
    if ( (unsigned __int64)(v4 + 1) > a3 )
      return 0;
    if ( v4 )
    {
      *v4 = *(_WORD *)(a1 + 4);
    }
    else
    {
      *(_DWORD *)o__errno(a1, a2) = 22;
      o__invalid_parameter_noinfo();
    }
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_10;
    v8 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    sub_18000F088(v4, 4uLL, (const void *)(a1 + 4), 4uLL);
  }
  v4 = v8;
LABEL_10:
  if ( *(_WORD *)a1 )
    goto LABEL_13;
  if ( (unsigned __int64)(v4 + 1) > a3 )
    return 0;
  sub_18000F088(v4, a3 - (_QWORD)v4, (const void *)(a1 + 8), 2uLL);
  ++v4;
LABEL_13:
  v9 = *(unsigned __int16 *)(a1 + 8);
  if ( (unsigned __int64)v4 + v9 > a3 )
    return 0;
  sub_18000F088(v4, a3 - (_QWORD)v4, *(const void **)(a1 + 24), v9);
  result = 1;
  *a2 = (_WORD *)((char *)v4 + *(unsigned __int16 *)(a1 + 8));
  return result;
}
