/*
 * XREFs of StorpTelemetryMiniportLogError @ 0x1C0055B3C
 * Callers:
 *     StorEtwMiniportLogError @ 0x1C0037660 (StorEtwMiniportLogError.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0002AFC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C0019900 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0019AA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019B50 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMiniportLogError(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _WORD *a7,
        _BYTE *a8,
        _BYTE *a9,
        _BYTE *a10,
        int a11,
        __int64 a12,
        int a13,
        _WORD *a14)
{
  _UNKNOWN **v14; // rax
  int v17; // ecx
  char v18; // r9
  unsigned __int16 v19; // r10
  int v20; // r11d
  __int64 v21; // r8
  __int64 v22; // r9
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  char v25; // [rsp+39h] [rbp-CFh] BYREF
  char v26; // [rsp+3Ah] [rbp-CEh] BYREF
  char v27; // [rsp+3Bh] [rbp-CDh] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh] BYREF
  int v29; // [rsp+40h] [rbp-C8h] BYREF
  int v30; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  char *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  int *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  char *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  char *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  char *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  __int64 v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  __int64 v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  _BYTE v49[16]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v50[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v51[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v52[16]; // [rsp+128h] [rbp+20h] BYREF
  int *v53; // [rsp+138h] [rbp+30h]
  int v54; // [rsp+140h] [rbp+38h]
  int v55; // [rsp+144h] [rbp+3Ch]
  _DWORD *v56; // [rsp+148h] [rbp+40h]
  int v57; // [rsp+150h] [rbp+48h]
  int v58; // [rsp+154h] [rbp+4Ch]
  __int64 v59; // [rsp+158h] [rbp+50h]
  _DWORD v60[2]; // [rsp+160h] [rbp+58h] BYREF
  int *v61; // [rsp+168h] [rbp+60h]
  int v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+174h] [rbp+6Ch]
  _BYTE v64[16]; // [rsp+178h] [rbp+70h] BYREF
  _UNKNOWN *retaddr; // [rsp+1C0h] [rbp+B8h] BYREF

  v14 = &retaddr;
  if ( (unsigned int)dword_1C0068058 > 5 )
  {
    LOBYTE(v14) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v14 )
    {
      v28 = v17;
      v24 = 1;
      v33 = &v31;
      v36 = 1LL;
      v35 = &v24;
      v37 = &v28;
      v39 = &v25;
      v41 = &v26;
      v43 = &v27;
      v45 = a5;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 1LL;
      v47 = a6;
      v31 = 0x1000000LL;
      v34 = 8LL;
      v38 = 4LL;
      v25 = a2;
      v26 = a3;
      v27 = v18;
      v46 = 16LL;
      v48 = 16LL;
      tlgCreate1Sz_wchar_t((__int64)v49, a7);
      tlgCreate1Sz_char((__int64)v50, a8);
      tlgCreate1Sz_char((__int64)v51, a9);
      tlgCreate1Sz_char((__int64)v52, a10);
      v55 = 0;
      v58 = 0;
      v53 = &v29;
      v56 = v60;
      v54 = 4;
      v60[0] = v19;
      v60[1] = 0;
      v63 = 0;
      v30 = a13;
      v59 = a12 & -(__int64)(v19 != 0);
      v62 = 4;
      v61 = &v30;
      v29 = v20;
      v57 = 2;
      tlgCreate1Sz_wchar_t((__int64)v64, a14);
      LOBYTE(v14) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&v32,
                      (unsigned __int8 *)dword_1C005CFDC,
                      v21,
                      v22,
                      0x13u,
                      &v32);
    }
  }
  return (char)v14;
}
