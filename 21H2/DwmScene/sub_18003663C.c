/*
 * XREFs of sub_18003663C @ 0x18003663C
 * Callers:
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180034E48 @ 0x180034E48 (sub_180034E48.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 * Callees:
 *     sub_18003659C @ 0x18003659C (sub_18003659C.c)
 */

__int64 __fastcall sub_18003663C(unsigned int a1, int a2, int a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v7; // r9d
  char *v8; // rdi
  __int64 i; // rcx
  unsigned int v10; // ecx
  _DWORD v12[2]; // [rsp+20h] [rbp-78h]
  char v13; // [rsp+28h] [rbp-70h] BYREF
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]
  int v16; // [rsp+80h] [rbp-18h]

  v4 = 0;
  v5 = a1;
  if ( a4 )
    v7 = *a4;
  else
    v7 = sub_18003659C(a1, a2);
  if ( (_DWORD)v5 == 23 )
  {
    return v7 * (a3 + ((unsigned int)(a3 + 1) >> 1));
  }
  else
  {
    v12[0] = 0;
    v12[1] = 1;
    v8 = &v13;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v8 = 1;
      v8 += 4;
    }
    v14 = 4;
    v15 = 1;
    v16 = 1;
    v10 = v12[v5];
    if ( v10 )
      return v7 * ((v10 + a3 - 1) / v10);
  }
  return v4;
}
