/*
 * XREFs of CmOpenKey @ 0x1405EA950
 * Callers:
 *     NtOpenKeyEx @ 0x1405EA930 (NtOpenKeyEx.c)
 *     NtOpenKeyTransactedEx @ 0x140656800 (NtOpenKeyTransactedEx.c)
 *     NtOpenKey @ 0x1406C2C30 (NtOpenKey.c)
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     AdtpObjsInitialize @ 0x1407A7B10 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // r13d
  __int64 v10; // rcx
  unsigned __int8 v11; // si
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v20; // rcx
  HANDLE v21; // [rsp+58h] [rbp-200h]
  HANDLE Handle; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1F0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-1E8h]
  __int128 v25; // [rsp+80h] [rbp-1D8h] BYREF
  int v26; // [rsp+90h] [rbp-1C8h]
  HANDLE *v27; // [rsp+98h] [rbp-1C0h]
  __int64 v28; // [rsp+A0h] [rbp-1B8h]
  __int128 v29; // [rsp+B0h] [rbp-1A8h]
  _OWORD v30[2]; // [rsp+C0h] [rbp-198h] BYREF
  _OWORD v31[19]; // [rsp+E0h] [rbp-178h] BYREF

  v27 = a1;
  v28 = a3;
  Handle = 0LL;
  v25 = 0LL;
  v26 = 0;
  memset(v30, 0, sizeof(v30));
  v24 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v30, 0x20000u);
  memset(v31, 0, 0x128uLL);
  LODWORD(v31[6]) = -1;
  *((_QWORD *)&v31[9] + 1) = &v31[9];
  *(_QWORD *)&v31[9] = &v31[9];
  *(_OWORD *)((char *)&v31[13] + 8) = 0LL;
  *(_OWORD *)((char *)&v31[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v31[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v31[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v31[17] + 8) = 0LL;
  HIDWORD(v31[1]) = a2 & 0x300;
  v9 = a2 & 0xFFFFFCFF;
  if ( (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      v11 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
      if ( v11 == 1 )
      {
        v12 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v12 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = *(_QWORD *)(a3 + 16);
        v29 = 0LL;
        if ( v13 >= 0x7FFFFFFF0000LL )
          v13 = 0x7FFFFFFF0000LL;
        v14 = *(_DWORD *)v13;
        LODWORD(v29) = v14;
        v15 = *(_QWORD *)(v13 + 8);
        *((_QWORD *)&v29 + 1) = v15;
        v25 = v29;
        if ( (_WORD)v14 )
        {
          if ( (v15 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = v15 + (unsigned __int16)v14;
          if ( v16 > 0x7FFFFFFF0000LL || v16 < v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v25 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      v21 = *(HANDLE *)(a3 + 8);
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      {
        if ( *(_QWORD *)(a3 + 8) )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          Object = 0LL;
          if ( ObReferenceObjectByHandle(v21, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
          {
            v24 = *((_QWORD *)Object + 1);
            HalPutDmaAdapter((PADAPTER_OBJECT)Object);
          }
        }
      }
      *((_QWORD *)&v31[4] + 1) = a5;
      DWORD2(v31[1]) = a4;
      v17 = ObOpenObjectByName(a3, (_DWORD)CmKeyObjectType, v11, 0, v9, (__int64)v31, (__int64)&Handle);
      if ( v17 >= 0 )
        *a1 = Handle;
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      {
        v20 = v24;
        LOBYTE(v20) = 11;
        (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, __int128 *))((char *)&NlsMbCodePageTag + 7))(
          v20,
          v30,
          (unsigned int)v17,
          0LL,
          v24,
          &v25);
      }
      CmpCleanupParseContext(v31, 0LL);
      CmpReleaseShutdownRundown();
      return (unsigned int)v17;
    }
    else
    {
      CmpReleaseShutdownRundown();
      return 3221225714LL;
    }
  }
  else
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      LOBYTE(v10) = 11;
      (*(void (__fastcall **)(__int64, _OWORD *, __int64, _QWORD, _QWORD, _QWORD))((char *)&NlsMbCodePageTag + 7))(
        v10,
        v30,
        3221225865LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225865LL;
  }
}
