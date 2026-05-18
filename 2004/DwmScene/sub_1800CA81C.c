/*
 * XREFs of sub_1800CA81C @ 0x1800CA81C
 * Callers:
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 *     sub_1800CB8B0 @ 0x1800CB8B0 (sub_1800CB8B0.c)
 * Callees:
 *     sub_180032B20 @ 0x180032B20 (sub_180032B20.c)
 */

__int64 __fastcall sub_1800CA81C(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // r8
  __int64 v6; // rax
  unsigned int v7; // edx
  _QWORD *v8; // rax
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int *v11; // [rsp+68h] [rbp+20h] BYREF

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
    v8 = sub_180032B20(a1, v10, (__int64 *)v4, (__int64)&unk_1801D2CF8, &v11);
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
