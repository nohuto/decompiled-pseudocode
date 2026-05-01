/*
 * XREFs of CrmLogSrvActivityStopStop @ 0x18002EE8C
 * Callers:
 *     CrmSrvActivityStop @ 0x18002F128 (CrmSrvActivityStop.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18002E750 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

int __fastcall CrmLogSrvActivityStopStop(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  _UNKNOWN **v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  _WORD *v12; // rdx
  __int64 v13; // r10
  _WORD *v14; // r11
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+88h] [rbp-80h] BYREF
  UUID *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  __int64 *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  __int64 *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  __int64 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  int *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  char v54[16]; // [rsp+168h] [rbp+60h] BYREF
  char v55[16]; // [rsp+178h] [rbp+70h] BYREF
  int *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  __int64 *v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  _UNKNOWN *retaddr; // [rsp+1C0h] [rbp+B8h] BYREF

  v6 = &retaddr;
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 0x400000000001LL) != 0 )
  {
    LODWORD(v6) = qword_1800B3268 & 1;
    if ( (qword_1800B3268 & 0x400000000001LL) == qword_1800B3268 )
    {
      v30 = 16LL;
      v29 = &Uuid;
      v17 = *(_DWORD *)(a1 + 24);
      v31 = &v17;
      v33 = a1 + 72;
      v7 = *(unsigned __int8 *)(a1 + 73);
      v32 = 4LL;
      v35 = 0;
      v34 = 4 * v7 + 8;
      if ( a3 )
        v8 = *(_DWORD *)(a3 + 56);
      else
        v8 = 1001;
      v18 = v8;
      v36 = &v18;
      v38 = &v22;
      v9 = -1LL;
      v37 = 4LL;
      v22 = a2;
      v39 = 8LL;
      if ( a3 )
        v10 = *(_QWORD *)(a3 + 176);
      else
        v10 = -1LL;
      v23 = v10;
      v40 = &v23;
      v41 = 8LL;
      if ( a3 )
        v9 = *(_QWORD *)(a3 + 184);
      v24 = v9;
      v42 = &v24;
      v25 = a5;
      v44 = &v25;
      v43 = 8LL;
      v45 = 8LL;
      v26 = MEMORY[0x7FFE0008];
      v46 = &v26;
      v47 = 8LL;
      if ( a3 )
        v11 = *(_DWORD *)(a3 + 136);
      else
        v11 = 0;
      v19 = v11;
      v48 = &v19;
      v50 = &v20;
      v49 = 4LL;
      v20 = a4;
      v51 = 4LL;
      if ( a3 )
        v16 = *(_DWORD *)(a3 + 64);
      else
        v16 = 0;
      v53 = 4LL;
      v52 = &v16;
      if ( a3 )
        v12 = *(_WORD **)(a3 + 200);
      else
        v12 = &unk_180095550;
      tlgCreate1Sz_wchar_t((__int64)v54, v12);
      if ( v13 )
        v14 = *(_WORD **)(v13 + 208);
      tlgCreate1Sz_wchar_t((__int64)v55, v14);
      v56 = &v21;
      v21 = a6;
      v58 = &v27;
      v57 = 4LL;
      v27 = 0x2000000LL;
      v59 = 8LL;
      LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800B3250,
                      (unsigned __int8 *)dword_1800A2A8C,
                      0LL,
                      0LL,
                      0x12u,
                      &v28);
    }
  }
  return (int)v6;
}
