/*
 * XREFs of CmOpenKey @ 0x14060C320
 * Callers:
 *     NtOpenKeyEx @ 0x14060C300 (NtOpenKeyEx.c)
 *     NtOpenKeyTransactedEx @ 0x1406A12F0 (NtOpenKeyTransactedEx.c)
 *     NtOpenKey @ 0x1406BA300 (NtOpenKey.c)
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 *     AdtpObjsInitialize @ 0x1407B8BB0 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x14060CA70 (ObOpenObjectByName.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 v13; // si
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v25; // rcx
  HANDLE v26; // [rsp+58h] [rbp-200h]
  HANDLE Handle; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1F0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1E8h]
  __int128 v30; // [rsp+80h] [rbp-1D8h] BYREF
  int v31; // [rsp+90h] [rbp-1C8h]
  HANDLE *v32; // [rsp+98h] [rbp-1C0h]
  __int64 v33; // [rsp+A0h] [rbp-1B8h]
  __int128 v34; // [rsp+B0h] [rbp-1A8h]
  _OWORD v35[2]; // [rsp+C0h] [rbp-198h] BYREF
  _OWORD v36[19]; // [rsp+E0h] [rbp-178h] BYREF

  v32 = a1;
  v33 = a3;
  Handle = 0LL;
  v30 = 0LL;
  v31 = 0;
  memset(v35, 0, sizeof(v35));
  v29 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v35, 0x20000u);
  memset(v36, 0, 0x128uLL);
  LODWORD(v36[6]) = -1;
  *((_QWORD *)&v36[9] + 1) = &v36[9];
  *(_QWORD *)&v36[9] = &v36[9];
  *(_OWORD *)((char *)&v36[13] + 8) = 0LL;
  *(_OWORD *)((char *)&v36[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v36[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v36[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v36[17] + 8) = 0LL;
  HIDWORD(v36[1]) = a2 & 0x300;
  v9 = a2 & 0xFFFFFCFF;
  if ( (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      v13 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
      if ( v13 == 1 )
      {
        v14 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v14 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = *(_QWORD *)(a3 + 16);
        v34 = 0LL;
        if ( v15 >= 0x7FFFFFFF0000LL )
          v15 = 0x7FFFFFFF0000LL;
        v16 = *(_DWORD *)v15;
        LODWORD(v34) = v16;
        v17 = *(_QWORD *)(v15 + 8);
        *((_QWORD *)&v34 + 1) = v17;
        v30 = v34;
        if ( (_WORD)v16 )
        {
          if ( (v17 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = v17 + (unsigned __int16)v16;
          if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v30 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      v26 = *(HANDLE *)(a3 + 8);
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      {
        if ( *(_QWORD *)(a3 + 8) )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          Object = 0LL;
          if ( ObReferenceObjectByHandle(v26, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
          {
            v29 = *((_QWORD *)Object + 1);
            HalPutDmaAdapter((PADAPTER_OBJECT)Object);
          }
        }
      }
      *((_QWORD *)&v36[4] + 1) = a5;
      DWORD2(v36[1]) = a4;
      v19 = ObOpenObjectByName(a3, (_DWORD)CmKeyObjectType, v13, 0, v9, (__int64)v36, (__int64)&Handle);
      if ( v19 >= 0 )
        *a1 = Handle;
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      {
        v25 = v29;
        LOBYTE(v25) = 11;
        (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, __int128 *))((char *)&NlsMbCodePageTag + 7))(
          v25,
          v35,
          (unsigned int)v19,
          0LL,
          v29,
          &v30);
      }
      CmpCleanupParseContext(v36, 0LL);
      CmpReleaseShutdownRundown(v21, v20, v22);
      return (unsigned int)v19;
    }
    else
    {
      CmpReleaseShutdownRundown(v11, v10, v12);
      return 3221225714LL;
    }
  }
  else
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      LOBYTE(v11) = 11;
      (*(void (__fastcall **)(__int64, _OWORD *, __int64, _QWORD, _QWORD, _QWORD))((char *)&NlsMbCodePageTag + 7))(
        v11,
        v35,
        3221225865LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225865LL;
  }
}
