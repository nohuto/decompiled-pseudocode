/*
 * XREFs of CrmLogActivityUpdate @ 0x1800306C0
 * Callers:
 *     CrmActivityListenerCallback @ 0x1800304B0 (CrmActivityListenerCallback.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18003C124 (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

int __fastcall CrmLogActivityUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  char *v12; // rbx
  const void *v13; // rdx
  __int64 v14; // rax
  size_t v15; // r8
  int v18; // edx
  bool v20; // [rsp+30h] [rbp-D0h] BYREF
  bool v21; // [rsp+31h] [rbp-CFh] BYREF
  int Key; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+70h] [rbp-90h] BYREF
  UUID *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int *p_Key; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  bool *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  bool *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  __int64 *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]

  Key = a2;
  v12 = (char *)&CrmPolicyTable + 568 * a2;
  v13 = 0LL;
  LODWORD(v14) = dword_1800B3EF8;
  v15 = 0LL;
  if ( dword_1800B3EF8 == 14 )
  {
    v13 = &CrmPolicyTable8828080Override;
    v15 = 1LL;
  }
  else if ( dword_1800B3EF8 == 5 || dword_1800B3EF8 == 11 )
  {
    goto LABEL_10;
  }
  if ( dword_1800B3EF8 != 12 )
  {
    if ( !v13 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_10:
  v13 = &CrmPolicyTableXboxOverride;
  v15 = 3LL;
LABEL_11:
  v14 = (__int64)bsearch(&Key, v13, v15, 0x238uLL, CrmPolicyTableCompare);
  if ( v14 )
    v12 = (char *)v14;
LABEL_6:
  v18 = *((_DWORD *)v12 + 1);
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 4) != 0 )
  {
    v14 = qword_1800B3268 & 4;
    if ( v14 == qword_1800B3268 )
    {
      v32 = &Uuid;
      v20 = a5 != 0;
      v24 = v18;
      v34 = &v27;
      v33 = 16LL;
      p_Key = &Key;
      v21 = a6 != 0;
      v27 = a1;
      v38 = &v28;
      v35 = 8LL;
      v40 = &v23;
      Key = a2;
      v42 = &v20;
      v44 = &v21;
      v46 = &v24;
      v25 = a7;
      v48 = &v25;
      v26 = a8;
      v50 = &v26;
      v29 = a9;
      v52 = &v29;
      v30 = a10;
      v54 = &v30;
      v37 = 4LL;
      v28 = a3;
      v39 = 8LL;
      v23 = a4;
      v41 = 4LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 8LL;
      v55 = 8LL;
      LODWORD(v14) = tlgWriteTransfer_EventWriteTransfer(
                       (__int64)&dword_1800B3250,
                       (unsigned __int8 *)dword_1800A2C4E,
                       0LL,
                       0LL,
                       0xEu,
                       &v31);
    }
  }
  return v14;
}
