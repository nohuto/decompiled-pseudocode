/*
 * XREFs of MiLogTrimWs @ 0x14029EEA4
 * Callers:
 *     MiTrimWorkingSet @ 0x14029EC80 (MiTrimWorkingSet.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14029EF60 (MiFillLogProcessInfo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *v9; // r11
  __int64 v10; // rdx
  char v11; // al
  _QWORD *v12; // r9
  ULONG v13; // r10d
  __int64 v14; // r11
  char v15; // [rsp+40h] [rbp-128h] BYREF
  int v16; // [rsp+44h] [rbp-124h] BYREF
  const CHAR *v17; // [rsp+48h] [rbp-120h] BYREF
  int v18; // [rsp+50h] [rbp-118h] BYREF
  int v19; // [rsp+54h] [rbp-114h] BYREF
  __int64 v20; // [rsp+58h] [rbp-110h] BYREF
  __int64 v21; // [rsp+60h] [rbp-108h] BYREF
  __int64 v22; // [rsp+68h] [rbp-100h] BYREF
  __int64 v23; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+78h] [rbp-F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+80h] [rbp-E8h] BYREF
  char *v26; // [rsp+A0h] [rbp-C8h]
  __int64 v27; // [rsp+A8h] [rbp-C0h]
  _BYTE v28[16]; // [rsp+B0h] [rbp-B8h] BYREF
  int *v29; // [rsp+C0h] [rbp-A8h]
  __int64 v30; // [rsp+C8h] [rbp-A0h]
  __int64 *v31; // [rsp+D0h] [rbp-98h]
  __int64 v32; // [rsp+D8h] [rbp-90h]
  __int64 *v33; // [rsp+E0h] [rbp-88h]
  __int64 v34; // [rsp+E8h] [rbp-80h]
  __int64 *v35; // [rsp+F0h] [rbp-78h]
  __int64 v36; // [rsp+F8h] [rbp-70h]
  __int64 *v37; // [rsp+100h] [rbp-68h]
  __int64 v38; // [rsp+108h] [rbp-60h]
  __int64 *v39; // [rsp+110h] [rbp-58h]
  __int64 v40; // [rsp+118h] [rbp-50h]
  int *v41; // [rsp+120h] [rbp-48h]
  __int64 v42; // [rsp+128h] [rbp-40h]
  const CHAR **v43; // [rsp+130h] [rbp-38h]
  __int64 v44; // [rsp+138h] [rbp-30h]

  v17 = 0LL;
  v16 = 0;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    MiFillLogProcessInfo(a1, &v16, &v17, *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174)));
    if ( *v9 > 5u )
    {
      if ( tlgKeywordOn((__int64)v9, 1LL) )
      {
        v11 = *(_BYTE *)(a1 + 184) & 7;
        v27 = v10;
        v15 = v11;
        v26 = &v15;
        tlgCreate1Sz_char((__int64)v28, v17);
        v29 = &v18;
        v18 = v16;
        v31 = &v20;
        v30 = 4LL;
        v33 = &v21;
        v22 = v12[888];
        v35 = &v22;
        v23 = v12[936];
        v37 = &v23;
        v24 = v12[950];
        v39 = &v24;
        v41 = &v19;
        LODWORD(v17) = a5;
        v43 = &v17;
        v20 = a2;
        v32 = 8LL;
        v21 = a3;
        v34 = 8LL;
        v36 = 8LL;
        v38 = 8LL;
        v40 = 8LL;
        v19 = a4;
        v42 = 4LL;
        v44 = 4LL;
        tlgWriteEx_EtwWriteEx(v14, (unsigned __int8 *)&byte_14002601B, 0LL, v13, 0, 0, 0xCu, &v25);
      }
    }
  }
}
