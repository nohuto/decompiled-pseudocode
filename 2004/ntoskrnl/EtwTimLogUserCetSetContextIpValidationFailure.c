/*
 * XREFs of EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C91F0
 * Callers:
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405C7C90 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     EtwpTiFillProcessIdentity @ 0x1402FB800 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F3A20 (ZwQueryVirtualMemory.c)
 *     EtwpQueryProcessCommandLine @ 0x14065F0CC (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 */

void __fastcall EtwTimLogUserCetSetContextIpValidationFailure(int a1, __int64 a2, void *a3, int a4, int a5)
{
  __int64 *v5; // rax
  __int64 *v6; // rsi
  const wchar_t *v7; // r13
  unsigned __int16 v9; // ax
  ULONG v10; // r12d
  int v11; // eax
  const wchar_t *v12; // rcx
  PVOID v13; // r15
  int v14; // ecx
  __int16 v15; // ax
  unsigned int v16; // r14d
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v18; // rbx
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  unsigned int v24; // r9d
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rax
  ULONG v28; // r9d
  REGHANDLE v29; // rcx
  unsigned __int16 *v30; // r9
  _WORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v32[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v33[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+80h] [rbp-80h] BYREF
  int *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  _DWORD *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  _DWORD v47[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  PVOID v50; // [rsp+E0h] [rbp-20h]
  _DWORD v51[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  _DWORD *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  __int64 v56; // [rsp+110h] [rbp+10h]
  _DWORD v57[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  PVOID *p_BaseAddress; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  const wchar_t *v65; // [rsp+160h] [rbp+60h]
  int v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+16Ch] [rbp+6Ch]
  _WORD *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  const wchar_t *v70; // [rsp+180h] [rbp+80h]
  int v71; // [rsp+188h] [rbp+88h]
  int v72; // [rsp+18Ch] [rbp+8Ch]
  _QWORD v73[20]; // [rsp+190h] [rbp+90h] BYREF
  int v74; // [rsp+298h] [rbp+198h] BYREF

  v74 = a4;
  v5 = *(__int64 **)(a2 + 1472);
  v6 = &EmptyUnicodeString;
  v35 = a1;
  v37 = 0LL;
  BaseAddress = a3;
  if ( v5 )
    v6 = v5;
  v7 = L"(null)";
  *(_OWORD *)P = 0LL;
  v9 = *(_WORD *)v6;
  v10 = 12;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v31[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v31;
    v11 = *(unsigned __int16 *)v6;
    v12 = (const wchar_t *)v6[1];
  }
  else
  {
    v31[0] = 6;
    UserData.Ptr = (ULONGLONG)v31;
    v12 = L"(null)";
    v11 = 12;
  }
  v65 = v12;
  v66 = v11;
  v67 = 0;
  EtwpQueryProcessCommandLine(a2, P);
  v13 = P[1];
  LOWORD(v34) = P[0];
  v69 = 2LL;
  if ( LOWORD(P[0]) )
  {
    v70 = (const wchar_t *)P[1];
    v68 = v33;
    v14 = LOWORD(P[0]);
    v15 = LOWORD(P[0]) >> 1;
  }
  else
  {
    v70 = L"(null)";
    v68 = v33;
    v14 = 12;
    v15 = 6;
  }
  v71 = v14;
  v33[0] = v15;
  v72 = 0;
  v16 = EtwpTiFillProcessIdentity(v73, a2, &v37) + 4;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v18 = Pool2;
  if ( Pool2
    && (ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryMappedFilenameInformation,
          Pool2,
          0x200uLL,
          0LL) >= 0
      ? (v19 = *v18)
      : (*v18 = 0, v19 = 0),
        v19) )
  {
    v32[0] = v19 >> 1;
    v20 = 2LL * v16;
    *(&UserData.Ptr + v20) = (ULONGLONG)v32;
    *((_QWORD *)&UserData.Size + v20) = 2LL;
    v10 = *v18;
    v7 = (const wchar_t *)*((_QWORD *)v18 + 1);
  }
  else
  {
    v32[0] = 6;
    v21 = 2LL * v16;
    *(&UserData.Ptr + v21) = (ULONGLONG)v32;
    *((_QWORD *)&UserData.Size + v21) = 2LL;
  }
  v22 = 2LL * (v16 + 1);
  v23 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_USER_CET_SET_CONTEXT_IP_VALIDATION_FAILURE;
  v24 = v16 + 2;
  *(&UserData.Ptr + v22) = (ULONGLONG)v7;
  *(&UserData.Size + 2 * v22) = v10;
  *(&UserData.Reserved + 2 * v22) = 0;
  v25 = v35;
  v26 = 2LL * v24++;
  *(&UserData.Ptr + v26) = (ULONGLONG)&v74;
  *((_QWORD *)&UserData.Size + v26) = 4LL;
  v27 = 2LL * v24;
  v28 = v24 + 1;
  *(&UserData.Ptr + v27) = (ULONGLONG)&a5;
  v29 = EtwSecurityMitigationsRegHandle;
  *((_QWORD *)&UserData.Size + v27) = 4LL;
  if ( v25 != 1 )
    v23 = &MITIGATION_ENFORCE_USER_CET_SET_CONTEXT_IP_VALIDATION_FAILURE;
  EtwWrite(v29, v23, 0LL, v28, &UserData);
  if ( (unsigned int)dword_140C02BB0 > 5 && tlgKeywordOn((__int64)&dword_140C02BB0, 0x400000000000LL) )
  {
    v35 = v25;
    v42 = &v35;
    v43 = 4LL;
    v44 = v47;
    v46 = v6[1];
    v47[0] = *(unsigned __int16 *)v6;
    v48 = v51;
    v51[0] = (unsigned __int16)v34;
    v38 = v37;
    v52 = &v38;
    v54 = v57;
    v56 = *((_QWORD *)v30 + 1);
    v57[0] = *v30;
    v34 = v74;
    v58 = &v34;
    LODWORD(BaseAddress) = a5;
    p_BaseAddress = &BaseAddress;
    v62 = &v39;
    v45 = 2LL;
    v47[1] = 0;
    v49 = 2LL;
    v50 = v13;
    v51[1] = 0;
    v53 = 8LL;
    v55 = 2LL;
    v57[1] = 0;
    v59 = 4LL;
    v61 = 4LL;
    v39 = 0x1000000LL;
    v63 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02BB0,
      (unsigned __int8 *)&byte_14002C317,
      0LL,
      0LL,
      0xDu,
      &v41);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
}
