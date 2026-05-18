/*
 * XREFs of sub_180069610 @ 0x180069610
 * Callers:
 *     sub_18006AC30 @ 0x18006AC30 (sub_18006AC30.c)
 *     sub_18006B620 @ 0x18006B620 (sub_18006B620.c)
 * Callees:
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 */

__int64 __fastcall sub_180069610(__int64 **a1, __int64 a2, _DWORD *a3)
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
    v8 = (_QWORD *)sub_180069760(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_1801C5038,
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
