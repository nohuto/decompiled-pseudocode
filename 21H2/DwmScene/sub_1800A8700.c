/*
 * XREFs of sub_1800A8700 @ 0x1800A8700
 * Callers:
 *     sub_1800AA400 @ 0x1800AA400 (sub_1800AA400.c)
 * Callees:
 *     sub_1800A3E50 @ 0x1800A3E50 (sub_1800A3E50.c)
 */

__int64 __fastcall sub_1800A8700(__int64 **a1, __int64 a2, __int64 **a3)
{
  __int64 *v4; // r8
  __int64 v6; // rax
  __int64 *v7; // rdx
  _QWORD *v8; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 **v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= (unsigned __int64)v7 )
    {
      v4 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v4 == *a1 || (unsigned __int64)v7 < v4[4] )
  {
LABEL_10:
    v11 = a3;
    v8 = sub_1800A3E50(a1, v10, v4, (__int64)&unk_1801D7188, &v11);
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
