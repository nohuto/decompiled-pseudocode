/*
 * XREFs of EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405CE1A4
 * Callers:
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1403F16B0 (KiLogControlProtectionUserModeReturnMismatch.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     EtwpTiFillProcessIdentity @ 0x1402EBDD0 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F85D0 (ZwQueryVirtualMemory.c)
 *     EtwpQueryProcessCommandLine @ 0x140632B5C (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B7280 (ExAllocatePool2.c)
 */

void __fastcall EtwTimLogControlProtectionUserModeReturnMismatch(int a1, __int64 a2, void *a3, void *a4, int a5)
{
  __int64 *v5; // rax
  const wchar_t *v6; // r12
  __int64 *v7; // rcx
  ULONG v9; // r15d
  unsigned __int16 v11; // ax
  int v12; // eax
  const wchar_t *v13; // rcx
  PVOID v14; // r13
  int v15; // ecx
  __int16 v16; // ax
  unsigned int v17; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v19; // rsi
  unsigned __int16 v20; // ax
  __int64 v21; // rax
  ULONG v22; // ecx
  const wchar_t *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned __int16 *v27; // rax
  unsigned __int16 *v28; // rbx
  unsigned __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  unsigned int v34; // r9d
  int v35; // r14d
  __int64 v36; // rax
  ULONG v37; // r9d
  bool v38; // zf
  REGHANDLE v39; // rcx
  unsigned __int16 *v40; // r9
  unsigned __int16 *v41; // r10
  _WORD v42[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v43[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v44[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v45[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v50; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+70h] [rbp-90h] BYREF
  int *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  _DWORD *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  _DWORD v58[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  PVOID v61; // [rsp+D0h] [rbp-30h]
  _DWORD v62[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 **v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  _DWORD *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  __int64 v67; // [rsp+100h] [rbp+0h]
  _DWORD v68[2]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  _DWORD v72[2]; // [rsp+128h] [rbp+28h] BYREF
  int *v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  PVOID *p_BaseAddress; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  const wchar_t *v78; // [rsp+160h] [rbp+60h]
  int v79; // [rsp+168h] [rbp+68h]
  int v80; // [rsp+16Ch] [rbp+6Ch]
  _WORD *v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  const wchar_t *v83; // [rsp+180h] [rbp+80h]
  int v84; // [rsp+188h] [rbp+88h]
  int v85; // [rsp+18Ch] [rbp+8Ch]
  __int64 v86[22]; // [rsp+190h] [rbp+90h] BYREF

  v5 = *(__int64 **)(a2 + 1472);
  v6 = L"(null)";
  v47 = a1;
  v50 = 0LL;
  v7 = &EmptyUnicodeString;
  BaseAddress = a4;
  if ( v5 )
    v7 = v5;
  v49 = v7;
  v9 = 12;
  v11 = *(_WORD *)v7;
  *(_QWORD *)&UserData.Size = 2LL;
  *(_OWORD *)P = 0LL;
  if ( v11 )
  {
    v42[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v42;
    v12 = *(unsigned __int16 *)v7;
    v13 = (const wchar_t *)v7[1];
  }
  else
  {
    v42[0] = 6;
    UserData.Ptr = (ULONGLONG)v42;
    v13 = L"(null)";
    v12 = 12;
  }
  v78 = v13;
  v79 = v12;
  v80 = 0;
  EtwpQueryProcessCommandLine(a2, P);
  v14 = P[1];
  LOWORD(v46) = P[0];
  v82 = 2LL;
  if ( LOWORD(P[0]) )
  {
    v83 = (const wchar_t *)P[1];
    v81 = v45;
    v15 = LOWORD(P[0]);
    v16 = LOWORD(P[0]) >> 1;
  }
  else
  {
    v83 = L"(null)";
    v81 = v45;
    v15 = 12;
    v16 = 6;
  }
  v84 = v15;
  v45[0] = v16;
  v85 = 0;
  v17 = EtwpTiFillProcessIdentity(v86, a2, (unsigned __int64 *)&v50) + 4;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v19 = Pool2;
  if ( Pool2
    && (ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, MemoryMappedFilenameInformation, Pool2, 0x200uLL, 0LL) >= 0
      ? (v20 = *v19)
      : (*v19 = 0, v20 = 0),
        v20) )
  {
    v43[0] = v20 >> 1;
    v21 = 2LL * v17;
    *(&UserData.Ptr + v21) = (ULONGLONG)v43;
    *((_QWORD *)&UserData.Size + v21) = 2LL;
    v22 = *v19;
    v23 = (const wchar_t *)*((_QWORD *)v19 + 1);
  }
  else
  {
    v43[0] = 6;
    v23 = L"(null)";
    v24 = 2LL * v17;
    *(&UserData.Ptr + v24) = (ULONGLONG)v43;
    v22 = 12;
    *((_QWORD *)&UserData.Size + v24) = 2LL;
  }
  v25 = 2LL * (v17 + 1);
  v26 = v17 + 2;
  *(&UserData.Ptr + v25) = (ULONGLONG)v23;
  *(&UserData.Size + 2 * v25) = v22;
  *(&UserData.Reserved + 2 * v25) = 0;
  v27 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v28 = v27;
  if ( v27
    && (ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryMappedFilenameInformation,
          v27,
          0x200uLL,
          0LL) >= 0
      ? (v29 = *v28)
      : (*v28 = 0, v29 = 0),
        v29) )
  {
    v44[0] = v29 >> 1;
    v30 = 2LL * v26;
    *(&UserData.Ptr + v30) = (ULONGLONG)v44;
    *((_QWORD *)&UserData.Size + v30) = 2LL;
    v9 = *v28;
    v6 = (const wchar_t *)*((_QWORD *)v28 + 1);
  }
  else
  {
    v44[0] = 6;
    v31 = 2LL * v26;
    *(&UserData.Ptr + v31) = (ULONGLONG)v44;
    *((_QWORD *)&UserData.Size + v31) = 2LL;
  }
  v32 = 2LL * (v26 + 1);
  v33 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_CONTROL_PROTECTION_USER_MODE_RETURN_MISMATCH;
  v34 = v26 + 2;
  *(&UserData.Ptr + v32) = (ULONGLONG)v6;
  *(&UserData.Size + 2 * v32) = v9;
  *(&UserData.Reserved + 2 * v32) = 0;
  v35 = v47;
  v36 = 2LL * v34;
  v37 = v34 + 1;
  v38 = v47 == 1;
  *(&UserData.Ptr + v36) = (ULONGLONG)&a5;
  v39 = EtwSecurityMitigationsRegHandle;
  *((_QWORD *)&UserData.Size + v36) = 4LL;
  if ( !v38 )
    v33 = &MITIGATION_ENFORCE_CONTROL_PROTECTION_USER_MODE_RETURN_MISMATCH;
  EtwWrite(v39, v33, 0LL, v37, &UserData);
  if ( (unsigned int)dword_140C02B78 > 5 && tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL) )
  {
    v53 = &v47;
    v47 = v35;
    v55 = v58;
    v57 = v49[1];
    v58[0] = *(unsigned __int16 *)v49;
    v59 = v62;
    v62[0] = (unsigned __int16)v46;
    v49 = v50;
    v63 = &v49;
    v65 = v68;
    v67 = *((_QWORD *)v40 + 1);
    v68[0] = *v40;
    v69 = v72;
    v71 = *((_QWORD *)v41 + 1);
    v72[0] = *v41;
    v46 = a5;
    v73 = &v46;
    p_BaseAddress = &BaseAddress;
    v54 = 4LL;
    v56 = 2LL;
    v58[1] = 0;
    v60 = 2LL;
    v61 = v14;
    v62[1] = 0;
    v64 = 8LL;
    v66 = 2LL;
    v68[1] = 0;
    v70 = 2LL;
    v72[1] = 0;
    v74 = 4LL;
    BaseAddress = (PVOID)0x1000000;
    v76 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02B78,
      (unsigned __int8 *)byte_14002C7BD,
      0LL,
      0LL,
      0xEu,
      &v52);
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
}
