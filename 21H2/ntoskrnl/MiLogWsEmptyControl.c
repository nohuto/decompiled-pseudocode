/*
 * XREFs of MiLogWsEmptyControl @ 0x14029EC00
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406BD464 (MmProcessWorkingSetControl.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14029EF60 (MiFillLogProcessInfo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  _DWORD *v1; // r10
  __int64 v2; // r9
  char v3; // al
  ULONG v4; // r9d
  int v5; // r11d
  __int64 v6; // r8
  __int64 v7; // r10
  int v8; // [rsp+20h] [rbp-B8h]
  int v9; // [rsp+28h] [rbp-B0h]
  char v10; // [rsp+40h] [rbp-98h] BYREF
  int v11; // [rsp+44h] [rbp-94h] BYREF
  const CHAR *v12; // [rsp+48h] [rbp-90h] BYREF
  int v13; // [rsp+50h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-78h] BYREF
  char *v15; // [rsp+80h] [rbp-58h]
  int v16; // [rsp+88h] [rbp-50h]
  int v17; // [rsp+8Ch] [rbp-4Ch]
  _BYTE v18[16]; // [rsp+90h] [rbp-48h] BYREF
  int *v19; // [rsp+A0h] [rbp-38h]
  ULONG v20; // [rsp+A8h] [rbp-30h]
  int v21; // [rsp+ACh] [rbp-2Ch]
  const CHAR **v22; // [rsp+B0h] [rbp-28h]
  ULONG v23; // [rsp+B8h] [rbp-20h]
  int v24; // [rsp+BCh] [rbp-1Ch]

  v12 = 0LL;
  v11 = 0;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    MiFillLogProcessInfo(a1, &v11, &v12, a1);
    if ( *v1 > 5u )
    {
      if ( tlgKeywordOn((__int64)v1, 16LL) )
      {
        v3 = *(_BYTE *)(v2 + 184) & 7;
        v17 = 0;
        v10 = v3;
        v15 = &v10;
        v16 = 1;
        tlgCreate1Sz_char((__int64)v18, v12);
        v21 = 0;
        v24 = 0;
        v19 = &v13;
        v13 = v11;
        v22 = &v12;
        v20 = v4 + 3;
        v23 = v4 + 3;
        LODWORD(v12) = v5;
        tlgWriteEx_EtwWriteEx(v7, (unsigned __int8 *)&byte_140026DAD, v6, v4, v8, v9, 6u, &v14);
      }
    }
  }
}
