/*
 * XREFs of sub_180037F1C @ 0x180037F1C
 * Callers:
 *     sub_180038950 @ 0x180038950 (sub_180038950.c)
 *     sub_18003AAF0 @ 0x18003AAF0 (sub_18003AAF0.c)
 *     sub_18006885C @ 0x18006885C (sub_18006885C.c)
 *     sub_180068E78 @ 0x180068E78 (sub_180068E78.c)
 * Callees:
 *     sub_1800383F0 @ 0x1800383F0 (sub_1800383F0.c)
 */

__int64 __fastcall sub_180037F1C(__int64 **a1, __int64 a2, unsigned int *a3)
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
    v8 = (_QWORD *)sub_1800383F0(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_1801436C0,
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
