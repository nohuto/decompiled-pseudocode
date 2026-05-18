/*
 * XREFs of sub_18007606C @ 0x18007606C
 * Callers:
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 * Callees:
 *     sub_18007624C @ 0x18007624C (sub_18007624C.c)
 */

__int64 __fastcall sub_18007606C(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r8
  __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  char v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  v7 = *(_QWORD *)(a3 + 8);
  do
  {
    if ( v6[5] >= v7 )
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
  if ( v4 == *a1 || v7 < v4[5] )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_18007624C(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_1801CB718,
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
