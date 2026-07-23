/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x14072FA00
 * Callers:
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwpTiFillThreadIdentity @ 0x14027E480 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x14027E4B8 (EtwpTiFillProcessIdentity.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1406F20C8 (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  __int64 *v5; // r14
  char v8; // r12
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // r15
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // bx
  int v15; // eax
  int v16; // eax
  ULONGLONG v17; // r10
  int v18; // r8d
  unsigned int v19; // r9d
  ULONGLONG v20; // r11
  ULONG v21; // r8d
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rcx
  ULONG v25; // r8d
  __int16 v26; // ax
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rcx
  ULONG v30; // r9d
  bool v31; // zf
  const EVENT_DESCRIPTOR *v32; // rdx
  wchar_t *v33; // rbx
  int v34; // r9d
  __int64 v35; // r11
  _WORD v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+3Ch] [rbp-CCh] BYREF
  int v38; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+44h] [rbp-C4h] BYREF
  int DestinationString; // [rsp+48h] [rbp-C0h]
  int DestinationString_4; // [rsp+4Ch] [rbp-BCh] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v45; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v46; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-70h] BYREF
  int *p_DestinationString_4; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  _DWORD *v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  __int64 v52; // [rsp+D8h] [rbp-30h]
  _DWORD v53[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v54; // [rsp+E8h] [rbp-20h]
  __int64 v55; // [rsp+F0h] [rbp-18h]
  wchar_t *v56; // [rsp+F8h] [rbp-10h]
  _DWORD v57[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *v58; // [rsp+108h] [rbp+0h]
  __int64 v59; // [rsp+110h] [rbp+8h]
  _DWORD *v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  wchar_t *v62; // [rsp+128h] [rbp+20h]
  _DWORD v63[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]
  wchar_t *v66; // [rsp+148h] [rbp+40h]
  _DWORD v67[2]; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+158h] [rbp+50h] BYREF
  _DWORD *v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+180h] [rbp+78h]
  __int64 v71; // [rsp+188h] [rbp+80h]
  _DWORD v72[2]; // [rsp+190h] [rbp+88h] BYREF
  _DWORD *v73; // [rsp+198h] [rbp+90h]
  __int64 v74; // [rsp+1A0h] [rbp+98h]
  wchar_t *v75; // [rsp+1A8h] [rbp+A0h]
  _DWORD v76[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  _DWORD *v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+B8h]
  wchar_t *v79; // [rsp+1C8h] [rbp+C0h]
  _DWORD v80[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  _DWORD *v81; // [rsp+1D8h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+D8h]
  wchar_t *v83; // [rsp+1E8h] [rbp+E0h]
  _DWORD v84[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF
  const wchar_t *v86; // [rsp+208h] [rbp+100h]
  int v87; // [rsp+210h] [rbp+108h]
  int v88; // [rsp+214h] [rbp+10Ch]
  __int16 *v89; // [rsp+218h] [rbp+110h]
  __int64 v90; // [rsp+220h] [rbp+118h]
  const wchar_t *v91; // [rsp+228h] [rbp+120h]
  int v92; // [rsp+230h] [rbp+128h]
  int v93; // [rsp+234h] [rbp+12Ch]
  __int64 v94[24]; // [rsp+238h] [rbp+130h] BYREF

  DestinationString = a1;
  v5 = &EmptyUnicodeString;
  v43 = 0LL;
  v8 = 1;
  if ( *(_QWORD *)(a2 + 1472) )
    v5 = *(__int64 **)(a2 + 1472);
  DestinationString_8 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  EtwpQueryProcessCommandLine(a2, (__int64)&DestinationString_8);
  Length = DestinationString_8.Length;
  if ( !DestinationString_8.Length )
  {
    RtlInitUnicodeString(&DestinationString_8, L"Unknown");
    Length = DestinationString_8.Length;
    v8 = 0;
  }
  if ( !a3 || !a3->Length )
  {
    RtlInitUnicodeString(&v45, L"Unknown");
    a3 = &v45;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v46, L"Unknown");
    a4 = &v46;
  }
  Buffer = DestinationString_8.Buffer;
  if ( DestinationString == 2
    && (unsigned int)dword_140C02BB8 > 5
    && tlgKeywordOn((__int64)&dword_140C02BB8, 0x200000000001LL) )
  {
    v72[1] = v34;
    v69 = v72;
    v71 = v5[1];
    v72[0] = *(unsigned __int16 *)v5;
    v73 = v76;
    v76[0] = Length;
    v77 = v80;
    v79 = a3->Buffer;
    v80[0] = a3->Length;
    v81 = v84;
    v83 = a4->Buffer;
    v84[0] = a4->Length;
    v76[1] = v34;
    v80[1] = v34;
    v84[1] = v34;
    v70 = v35;
    v74 = v35;
    v75 = Buffer;
    v78 = v35;
    v82 = v35;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02BB8,
      (unsigned __int8 *)&unk_14002D3C0,
      0LL,
      0LL,
      0xAu,
      &v68);
  }
  if ( v5 && *(_WORD *)v5 )
  {
    v36[0] = *(_WORD *)v5 >> 1;
    UserData.Ptr = (ULONGLONG)v36;
    *(_QWORD *)&UserData.Size = 2LL;
    v11 = *(unsigned __int16 *)v5;
    v12 = (const wchar_t *)v5[1];
  }
  else
  {
    v36[0] = 6;
    UserData.Ptr = (ULONGLONG)v36;
    v12 = L"(null)";
    v11 = 12;
    *(_QWORD *)&UserData.Size = 2LL;
  }
  v87 = v11;
  v89 = &v37;
  v86 = v12;
  v88 = 0;
  v90 = 2LL;
  if ( Length )
  {
    v13 = Length;
    v14 = Length >> 1;
    v91 = Buffer;
  }
  else
  {
    v91 = L"(null)";
    v13 = 12;
    v14 = 6;
  }
  v93 = 0;
  v37 = v14;
  v92 = v13;
  v15 = EtwpTiFillProcessIdentity(v94, a2, &v43);
  v16 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v19 = v16 + v18;
  if ( a3 && a3->Length )
  {
    v20 = (ULONGLONG)a3->Buffer;
    v21 = a3->Length;
    v22 = a3->Length >> 1;
  }
  else
  {
    v21 = 12;
    v20 = v17;
    v22 = 6;
  }
  LOWORD(v38) = v22;
  v23 = 2LL * v19;
  v24 = 2LL * (v19 + 1);
  *(&UserData.Ptr + v23) = (ULONGLONG)&v38;
  *((_QWORD *)&UserData.Size + v23) = 2LL;
  *(&UserData.Ptr + v24) = v20;
  *(&UserData.Size + 2 * v24) = v21;
  *(&UserData.Reserved + 2 * v24) = 0;
  if ( a4 && a4->Length )
  {
    v17 = (ULONGLONG)a4->Buffer;
    v25 = a4->Length;
    v26 = a4->Length >> 1;
  }
  else
  {
    v26 = 6;
    v25 = 12;
  }
  v27 = DestinationString;
  LOWORD(v39) = v26;
  v28 = 2LL * (v19 + 2);
  v29 = 2LL * (v19 + 3);
  v30 = v19 + 4;
  v31 = DestinationString == 1;
  *(&UserData.Ptr + v28) = (ULONGLONG)&v39;
  v32 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  *((_QWORD *)&UserData.Size + v28) = 2LL;
  *(&UserData.Ptr + v29) = v17;
  if ( !v31 )
    v32 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  *(&UserData.Size + 2 * v29) = v25;
  *(&UserData.Reserved + 2 * v29) = 0;
  EtwWrite(EtwSecurityMitigationsRegHandle, v32, 0LL, v30, &UserData);
  v33 = DestinationString_8.Buffer;
  if ( (unsigned int)dword_140C02BF0 > 5 && tlgKeywordOn((__int64)&dword_140C02BF0, 0x400000000000LL) )
  {
    DestinationString_4 = v27;
    p_DestinationString_4 = &DestinationString_4;
    v49 = 4LL;
    v50 = v53;
    v52 = v5[1];
    v53[0] = *(unsigned __int16 *)v5;
    v54 = v57;
    v57[0] = DestinationString_8.Length;
    v44 = v43;
    v58 = &v44;
    v60 = v63;
    v62 = a3->Buffer;
    v63[0] = a3->Length;
    v64 = v67;
    v66 = a4->Buffer;
    v67[0] = a4->Length;
    v51 = 2LL;
    v53[1] = 0;
    v55 = 2LL;
    v56 = v33;
    v57[1] = 0;
    v59 = 8LL;
    v61 = 2LL;
    v63[1] = 0;
    v65 = 2LL;
    v67[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02BF0,
      (unsigned __int8 *)byte_14002D50B,
      0LL,
      0LL,
      0xCu,
      &v47);
  }
  if ( v8 )
    ExFreePoolWithTag(v33, 0);
}
