/*
 * XREFs of sub_1800A2D84 @ 0x1800A2D84
 * Callers:
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 *     sub_1800A4B30 @ 0x1800A4B30 (sub_1800A4B30.c)
 * Callees:
 *     sub_1800A1F0C @ 0x1800A1F0C (sub_1800A1F0C.c)
 *     sub_1800A2928 @ 0x1800A2928 (sub_1800A2928.c)
 */

__int64 __fastcall sub_1800A2D84(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // rax
  int v7; // edx
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *((_DWORD *)v6 + 8) >= v7 )
    {
      v3 = (__int64)v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v3 == *a1 || v7 < *(_DWORD *)(v3 + 32) )
  {
LABEL_10:
    v8 = *a1;
    v12 = a3;
    v9 = sub_1800A1F0C((__int64)a1, v8, (__int64)&unk_1801D0E28, &v12);
    sub_1800A2928(a1, &v11, (__int64 *)v3, (int *)v9 + 8, v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
