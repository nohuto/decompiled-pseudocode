/*
 * XREFs of sub_18002660C @ 0x18002660C
 * Callers:
 *     sub_1800248CC @ 0x1800248CC (sub_1800248CC.c)
 *     sub_1800249BC @ 0x1800249BC (sub_1800249BC.c)
 *     sub_180024AAC @ 0x180024AAC (sub_180024AAC.c)
 *     sub_180024B9C @ 0x180024B9C (sub_180024B9C.c)
 *     sub_180024C8C @ 0x180024C8C (sub_180024C8C.c)
 *     sub_180024D7C @ 0x180024D7C (sub_180024D7C.c)
 *     sub_180024E6C @ 0x180024E6C (sub_180024E6C.c)
 *     sub_180024F5C @ 0x180024F5C (sub_180024F5C.c)
 *     sub_18002504C @ 0x18002504C (sub_18002504C.c)
 *     sub_18002513C @ 0x18002513C (sub_18002513C.c)
 *     sub_18002522C @ 0x18002522C (sub_18002522C.c)
 *     sub_18002531C @ 0x18002531C (sub_18002531C.c)
 *     sub_18002540C @ 0x18002540C (sub_18002540C.c)
 *     sub_1800254FC @ 0x1800254FC (sub_1800254FC.c)
 *     sub_1800255EC @ 0x1800255EC (sub_1800255EC.c)
 *     sub_1800256DC @ 0x1800256DC (sub_1800256DC.c)
 *     sub_1800257CC @ 0x1800257CC (sub_1800257CC.c)
 *     sub_1800B5EAC @ 0x1800B5EAC (sub_1800B5EAC.c)
 *     sub_1800B5F9C @ 0x1800B5F9C (sub_1800B5F9C.c)
 *     sub_1800B608C @ 0x1800B608C (sub_1800B608C.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B626C @ 0x1800B626C (sub_1800B626C.c)
 *     sub_1800B635C @ 0x1800B635C (sub_1800B635C.c)
 *     sub_1800B644C @ 0x1800B644C (sub_1800B644C.c)
 *     sub_1800B653C @ 0x1800B653C (sub_1800B653C.c)
 * Callees:
 *     sub_180026728 @ 0x180026728 (sub_180026728.c)
 */

__int64 __fastcall sub_18002660C(__int64 **a1, __int64 a2, unsigned __int64 *a3)
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
    v8 = (_QWORD *)sub_180026728(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v4,
                     (unsigned int)&unk_180141461,
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
