/*
 * XREFs of sub_180075F1C @ 0x180075F1C
 * Callers:
 *     sub_18007F580 @ 0x18007F580 (sub_18007F580.c)
 *     sub_1800E2524 @ 0x1800E2524 (sub_1800E2524.c)
 * Callees:
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 */

__int64 __fastcall sub_180075F1C(__int64 **a1, __int64 a2, unsigned __int64 *a3)
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
    v8 = (_QWORD *)sub_1800763F0(
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
