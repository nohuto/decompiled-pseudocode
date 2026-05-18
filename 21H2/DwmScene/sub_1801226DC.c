/*
 * XREFs of sub_1801226DC @ 0x1801226DC
 * Callers:
 *     sub_180122E60 @ 0x180122E60 (sub_180122E60.c)
 * Callees:
 *     sub_18011FE7C @ 0x18011FE7C (sub_18011FE7C.c)
 */

__int64 __fastcall sub_1801226DC(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r8
  __int64 v6; // rax
  int v7; // edx
  _QWORD *v8; // rax
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_DWORD *)(v6 + 32) >= v7 )
    {
      v4 = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v4 == *a1 || v7 < *(_DWORD *)(v4 + 32) )
  {
LABEL_10:
    v11 = a3;
    v8 = sub_18011FE7C(a1, v10, (__int64 *)v4, (__int64)&unk_1801DDDEC, &v11);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v8;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
