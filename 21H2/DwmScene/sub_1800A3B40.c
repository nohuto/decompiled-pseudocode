/*
 * XREFs of sub_1800A3B40 @ 0x1800A3B40
 * Callers:
 *     sub_1800A6074 @ 0x1800A6074 (sub_1800A6074.c)
 * Callees:
 *     sub_1800A3E50 @ 0x1800A3E50 (sub_1800A3E50.c)
 */

__int64 __fastcall sub_1800A3B40(__int64 **a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v4; // r8
  __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  char v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 *v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( v6[4] >= v7 )
    {
      v4 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v4 == *a1 || v7 < v4[4] )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_1800A3E50(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_1801D67F5,
                     (__int64)&v11);
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
