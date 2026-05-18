/*
 * XREFs of sub_180091378 @ 0x180091378
 * Callers:
 *     sub_180092C14 @ 0x180092C14 (sub_180092C14.c)
 * Callees:
 *     sub_180091404 @ 0x180091404 (sub_180091404.c)
 */

__int64 __fastcall sub_180091378(__int64 **a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 *v4; // r8
  __int64 *v6; // rax
  unsigned __int16 v7; // dx
  _QWORD *v8; // rax
  char v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 *v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *((_WORD *)v6 + 14) >= v7 )
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
  if ( v4 == *a1 || v7 < *((_WORD *)v4 + 14) )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_180091404(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_1801D41C2,
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
