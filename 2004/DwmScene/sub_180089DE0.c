/*
 * XREFs of sub_180089DE0 @ 0x180089DE0
 * Callers:
 *     sub_18008503C @ 0x18008503C (sub_18008503C.c)
 *     sub_180085270 @ 0x180085270 (sub_180085270.c)
 *     sub_1800855FC @ 0x1800855FC (sub_1800855FC.c)
 *     sub_18008A1E8 @ 0x18008A1E8 (sub_18008A1E8.c)
 *     sub_18011977C @ 0x18011977C (sub_18011977C.c)
 *     sub_180119B00 @ 0x180119B00 (sub_180119B00.c)
 *     sub_18011A390 @ 0x18011A390 (sub_18011A390.c)
 *     sub_18011A458 @ 0x18011A458 (sub_18011A458.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180089DE0(char *a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  signed __int64 v7; // r8
  unsigned __int16 v8; // r10
  __int64 result; // rax

  v2 = (char *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(char **)a2;
  v3 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v3 = *(char **)a1;
  v4 = *(_QWORD *)(a2 + 16);
  v6 = *((_QWORD *)a1 + 2);
  v5 = v6;
  if ( v4 < v6 )
    v6 = v4;
  if ( v6 )
  {
    v7 = v3 - v2;
    while ( 1 )
    {
      v8 = *(_WORD *)&v2[v7];
      if ( v8 != *(_WORD *)v2 )
        break;
      v2 += 2;
      if ( !--v6 )
        goto LABEL_11;
    }
    result = v8 < *(_WORD *)v2 ? -1 : 1;
  }
  else
  {
LABEL_11:
    result = 0LL;
  }
  if ( !(_DWORD)result )
  {
    if ( v5 >= v4 )
      return v5 > v4;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}
