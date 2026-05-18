/*
 * XREFs of sub_1801001C4 @ 0x1801001C4
 * Callers:
 *     sub_1800FF27C @ 0x1800FF27C (sub_1800FF27C.c)
 *     sub_1800FF83C @ 0x1800FF83C (sub_1800FF83C.c)
 * Callees:
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x1800FD8E4 (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

bool __fastcall sub_1801001C4(__int64 *a1, char *a2)
{
  __int64 *v3; // rdi
  char *v4; // r9
  unsigned __int64 v5; // rsi
  bool v6; // bp
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // r8
  bool result; // al

  v3 = a1;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v4 = *(char **)a2;
  v5 = a1[3];
  if ( v5 >= 0x10 )
    a1 = (__int64 *)*a1;
  v6 = std::_Traits_find<std::char_traits<char>>((__int64)a1, v3[2], 0LL, v4, *((_QWORD *)a2 + 2)) == 0;
  if ( v5 >= 0x10 )
  {
    v7 = *v3;
    if ( v5 + 1 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v7 - 8);
      v9 = v5 + 40;
      v10 = (char *)(v7 - v8);
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
        goto LABEL_16;
      v7 = v8;
    }
    j_j__o_free(v7);
  }
  v3[2] = 0LL;
  v3[3] = 15LL;
  *(_BYTE *)v3 = 0;
  v11 = *((_QWORD *)a2 + 3);
  if ( v11 >= 0x10 )
  {
    v12 = *(char **)a2;
    v13 = v11 + 1;
    if ( v13 < 0x1000 )
    {
LABEL_14:
      j_j__o_free(v12);
      goto LABEL_15;
    }
    v14 = (char *)*((_QWORD *)v12 - 1);
    v9 = v13 + 39;
    v10 = (char *)(v12 - v14);
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
    {
      v12 = v14;
      goto LABEL_14;
    }
LABEL_16:
    o__invalid_parameter_noinfo_noreturn(v10, v9);
    JUMPOUT(0x1801002B2LL);
  }
LABEL_15:
  *((_QWORD *)a2 + 2) = 0LL;
  result = v6;
  *((_QWORD *)a2 + 3) = 15LL;
  *a2 = 0;
  return result;
}
