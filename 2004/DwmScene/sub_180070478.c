/*
 * XREFs of sub_180070478 @ 0x180070478
 * Callers:
 *     sub_1800733D0 @ 0x1800733D0 (sub_1800733D0.c)
 * Callees:
 *     sub_180070A18 @ 0x180070A18 (sub_180070A18.c)
 */

__int64 __fastcall sub_180070478(__int64 **a1, __int64 a2, _DWORD *a3)
{
  __int64 *v4; // r8
  __int64 *v6; // rax
  int v7; // edx
  _QWORD *v8; // rax
  char v10; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *((_DWORD *)v6 + 8) >= v7 )
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
  if ( v4 == *a1 || v7 < *((_DWORD *)v4 + 8) )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_180070A18(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_1801C53E0,
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
