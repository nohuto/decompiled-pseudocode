/*
 * XREFs of sub_18008F6B0 @ 0x18008F6B0
 * Callers:
 *     sub_18008A90C @ 0x18008A90C (sub_18008A90C.c)
 *     sub_18008AB40 @ 0x18008AB40 (sub_18008AB40.c)
 *     sub_18008AECC @ 0x18008AECC (sub_18008AECC.c)
 *     sub_18008FAB8 @ 0x18008FAB8 (sub_18008FAB8.c)
 *     sub_18011F04C @ 0x18011F04C (sub_18011F04C.c)
 *     sub_18011F3D0 @ 0x18011F3D0 (sub_18011F3D0.c)
 *     sub_18011FC60 @ 0x18011FC60 (sub_18011FC60.c)
 *     sub_18011FD28 @ 0x18011FD28 (sub_18011FD28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008F6B0(char *a1, __int64 a2)
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
