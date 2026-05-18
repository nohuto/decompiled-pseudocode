/*
 * XREFs of sub_180043ACC @ 0x180043ACC
 * Callers:
 *     sub_180044020 @ 0x180044020 (sub_180044020.c)
 *     sub_1800449CC @ 0x1800449CC (sub_1800449CC.c)
 * Callees:
 *     sub_1800383F0 @ 0x1800383F0 (sub_1800383F0.c)
 */

__int64 __fastcall sub_180043ACC(__int64 *a1, __int64 a2, unsigned int *a3)
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
    v8 = sub_1800383F0(a1, v10, (__int64 *)v4, (__int64)&unk_180144000, &v11);
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
