/*
 * XREFs of MiStoreLogWriteIssueRetry @ 0x140552EB8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140330EEC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogWriteIssueRetry(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-D8h]
  int v13; // [rsp+28h] [rbp-D0h]
  int v14; // [rsp+40h] [rbp-B8h] BYREF
  int v15; // [rsp+44h] [rbp-B4h] BYREF
  int v16; // [rsp+48h] [rbp-B0h] BYREF
  int v17; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v18; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-98h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-78h]
  int v22; // [rsp+88h] [rbp-70h]
  int v23; // [rsp+8Ch] [rbp-6Ch]
  __int64 *v24; // [rsp+90h] [rbp-68h]
  int v25; // [rsp+98h] [rbp-60h]
  int v26; // [rsp+9Ch] [rbp-5Ch]
  int *v27; // [rsp+A0h] [rbp-58h]
  int v28; // [rsp+A8h] [rbp-50h]
  int v29; // [rsp+ACh] [rbp-4Ch]
  int *v30; // [rsp+B0h] [rbp-48h]
  int v31; // [rsp+B8h] [rbp-40h]
  int v32; // [rsp+BCh] [rbp-3Ch]
  int *v33; // [rsp+C0h] [rbp-38h]
  int v34; // [rsp+C8h] [rbp-30h]
  int v35; // [rsp+CCh] [rbp-2Ch]
  int *v36; // [rsp+D0h] [rbp-28h]
  int v37; // [rsp+D8h] [rbp-20h]
  int v38; // [rsp+DCh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4ED60 && **(_DWORD **)&qword_140C4ED60 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4ED60, 2LL) )
    {
      v11 = *v10;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v18 = v11;
      v21 = &v18;
      v19 = v10[1];
      v24 = &v19;
      v27 = &v14;
      v30 = &v15;
      v33 = &v16;
      v17 = a5;
      v36 = &v17;
      v16 = v8;
      v22 = 8;
      v25 = 8;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      v14 = a2;
      v15 = a3;
      tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&byte_140025C81, v7, 1u, v12, v13, 8u, &v20);
    }
  }
}
