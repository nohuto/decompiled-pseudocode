/*
 * XREFs of sub_180067924 @ 0x180067924
 * Callers:
 *     sub_180067E20 @ 0x180067E20 (sub_180067E20.c)
 *     sub_180068014 @ 0x180068014 (sub_180068014.c)
 * Callees:
 *     sub_1800679AC @ 0x1800679AC (sub_1800679AC.c)
 */

__int64 __fastcall sub_180067924(__int64 **a1, __int64 a2, unsigned int *a3)
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
    if ( *((_DWORD *)v6 + 7) >= v7 )
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
  if ( v4 == *a1 || v7 < *((_DWORD *)v4 + 7) )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_1800679AC(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_1801CAB59,
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
