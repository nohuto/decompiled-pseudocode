/*
 * XREFs of sub_18003264C @ 0x18003264C
 * Callers:
 *     sub_180033080 @ 0x180033080 (sub_180033080.c)
 *     sub_180035220 @ 0x180035220 (sub_180035220.c)
 *     sub_180062F8C @ 0x180062F8C (sub_180062F8C.c)
 *     sub_1800635A8 @ 0x1800635A8 (sub_1800635A8.c)
 * Callees:
 *     sub_180032B20 @ 0x180032B20 (sub_180032B20.c)
 */

__int64 __fastcall sub_18003264C(__int64 **a1, __int64 a2, unsigned int *a3)
{
  __int64 *v4; // r8
  __int64 *v6; // rax
  unsigned int v7; // edx
  _QWORD *v8; // rax
  char v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int *v11; // [rsp+68h] [rbp+20h] BYREF

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
    v8 = (_QWORD *)sub_180032B20(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_18013D370,
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
