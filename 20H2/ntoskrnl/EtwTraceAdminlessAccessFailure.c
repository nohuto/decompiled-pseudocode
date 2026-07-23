/*
 * XREFs of EtwTraceAdminlessAccessFailure @ 0x140942468
 * Callers:
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

char __fastcall EtwTraceAdminlessAccessFailure(int a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v5; // rax
  unsigned __int16 *v6; // r9
  int v7; // r11d
  unsigned __int16 *v8; // r9
  int v9; // r11d
  __int16 *v10; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v11; // rax
  unsigned __int16 *v12; // r9
  int v13; // r11d
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v22[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-98h] BYREF
  int *v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+98h] [rbp-70h] BYREF
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  _DWORD *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  __int64 v31; // [rsp+D8h] [rbp-30h]
  _DWORD v32[2]; // [rsp+E0h] [rbp-28h] BYREF
  int *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  char v37; // [rsp+108h] [rbp+0h] BYREF
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  _DWORD *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  __int64 v42; // [rsp+148h] [rbp+40h]
  _DWORD v43[2]; // [rsp+150h] [rbp+48h] BYREF
  int *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  char v46; // [rsp+168h] [rbp+60h] BYREF
  int *v47; // [rsp+188h] [rbp+80h]
  __int64 v48; // [rsp+190h] [rbp+88h]
  _DWORD *v49; // [rsp+198h] [rbp+90h]
  __int64 v50; // [rsp+1A0h] [rbp+98h]
  __int64 v51; // [rsp+1A8h] [rbp+A0h]
  _DWORD v52[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 *v53; // [rsp+1B8h] [rbp+B0h]
  __int64 v54; // [rsp+1C0h] [rbp+B8h]
  int v55; // [rsp+1F8h] [rbp+F0h] BYREF

  v55 = a1;
  v22[0].QuadPart = 0LL;
  v22[2].QuadPart = (LONGLONG)&word_1407D36E0;
  v22[1].QuadPart = 0x20000LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( !a3 )
  {
    if ( a4 )
    {
      if ( (unsigned int)dword_140C02B78 <= 5 )
        goto LABEL_13;
      LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL);
      if ( !(_BYTE)v5 )
        goto LABEL_13;
      v20 = v13;
      v47 = &v20;
      v10 = word_14002CA3A;
      v48 = 4LL;
      v49 = v52;
      v51 = *((_QWORD *)v12 + 1);
      v52[0] = *v12;
      LODWORD(v21) = v55;
      v53 = &v21;
      v11 = (struct _EVENT_DATA_DESCRIPTOR *)&v46;
      v50 = 2LL;
      v52[1] = 0;
      v54 = 4LL;
    }
    else
    {
      if ( (unsigned int)dword_140C02B78 <= 5 )
        goto LABEL_13;
      LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL);
      if ( !(_BYTE)v5 )
        goto LABEL_13;
      v18 = v9;
      v38 = &v18;
      v10 = word_14002CA82;
      v39 = 4LL;
      v40 = v43;
      v42 = *((_QWORD *)v8 + 1);
      v43[0] = *v8;
      v19 = v55;
      v44 = &v19;
      v11 = (struct _EVENT_DATA_DESCRIPTOR *)&v37;
      v41 = 2LL;
      v43[1] = 0;
      v45 = 4LL;
    }
    LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02B78, (unsigned __int8 *)v10, 0LL, 0LL, 6u, v11);
    goto LABEL_13;
  }
  if ( (unsigned int)dword_140C02B78 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v15 = v7;
      v27 = &v15;
      v28 = 4LL;
      v29 = v32;
      v31 = *((_QWORD *)v6 + 1);
      v32[0] = *v6;
      v16 = v55;
      v33 = &v16;
      v35 = &v17;
      v30 = 2LL;
      v32[1] = 0;
      v34 = 4LL;
      v17 = a3;
      v36 = 4LL;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C02B78,
                     (unsigned __int8 *)&word_14002C9CE,
                     0LL,
                     0LL,
                     7u,
                     &v26);
    }
  }
LABEL_13:
  if ( EtwAdminlessProvRegHandle && SeAdminlessEnableEventLogging )
  {
    KeQuerySystemTimePrecise(v22);
    UserData.Ptr = (ULONGLONG)v22;
    *(_QWORD *)&UserData.Size = 8LL;
    v24 = &v55;
    v25 = 4LL;
    LOBYTE(v5) = EtwWrite(EtwAdminlessProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
  return v5;
}
