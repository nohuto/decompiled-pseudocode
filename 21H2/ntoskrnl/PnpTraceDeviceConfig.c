/*
 * XREFs of PnpTraceDeviceConfig @ 0x14073ACE4
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PnpTraceDeviceConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const size_t *a4,
        const size_t *a5,
        const size_t *a6,
        const size_t *a7,
        const size_t *a8,
        const size_t *a9,
        const size_t *a10,
        char a11,
        unsigned __int16 *a12,
        char a13,
        char a14,
        __int64 a15,
        int a16,
        __int64 *a17)
{
  unsigned __int16 *v18; // r9
  const size_t *v19; // r10
  int v20; // eax
  const size_t *v21; // r11
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23; // [rsp+31h] [rbp-CFh] BYREF
  char v24; // [rsp+32h] [rbp-CEh] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  int *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  _DWORD *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  _DWORD v38[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  _DWORD v42[2]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v43[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v44[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v45[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v46[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v47[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v48[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v49[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v50[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v51[16]; // [rsp+160h] [rbp+60h] BYREF
  char *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  char *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  char *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  __int64 *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  int *v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  __int64 *v62; // [rsp+1C0h] [rbp+C0h]
  __int64 v63; // [rsp+1C8h] [rbp+C8h]

  v27 = 0LL;
  if ( a17 )
    v27 = *a17;
  if ( (unsigned int)dword_140C02DC8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02DC8, 0x800000000000LL) )
    {
      v31 = &v28;
      v33 = &v25;
      v35 = v38;
      v37 = *((_QWORD *)v18 + 1);
      v38[0] = *v18;
      v39 = v42;
      v41 = *((_QWORD *)a12 + 1);
      v20 = *a12;
      v25 = 0;
      v38[1] = 0;
      v42[1] = 0;
      v42[0] = v20;
      v28 = 2048LL;
      v32 = 8LL;
      v34 = 4LL;
      v36 = 2LL;
      v40 = 2LL;
      tlgCreate1Sz_wchar_t((__int64)v43, v19);
      tlgCreate1Sz_wchar_t((__int64)v44, v21);
      tlgCreate1Sz_wchar_t((__int64)v45, a4);
      tlgCreate1Sz_wchar_t((__int64)v46, a5);
      tlgCreate1Sz_wchar_t((__int64)v47, a6);
      tlgCreate1Sz_wchar_t((__int64)v48, a7);
      tlgCreate1Sz_wchar_t((__int64)v49, a8);
      tlgCreate1Sz_wchar_t((__int64)v50, a9);
      tlgCreate1Sz_wchar_t((__int64)v51, a10);
      v52 = &v22;
      v23 = a13;
      v54 = &v23;
      v24 = a14;
      v56 = &v24;
      v29 = a15;
      v58 = &v29;
      v26 = a16;
      v60 = &v26;
      v62 = &v27;
      v22 = a11;
      v53 = 1LL;
      v55 = 1LL;
      v57 = 1LL;
      v59 = 8LL;
      v61 = 4LL;
      v63 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02DC8,
        (unsigned __int8 *)&dword_1400256A4,
        0LL,
        0LL,
        0x17u,
        &v30);
    }
  }
}
