/*
 * XREFs of CmCreateKey @ 0x14068D940
 * Callers:
 *     NtCreateKey @ 0x14068D900 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140754DC0 (NtCreateKeyTransacted.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v11; // r14
  unsigned int v12; // r13d
  char PreviousMode; // dl
  __int64 v14; // rcx
  const void *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  struct _PRIVILEGE_SET *v24; // r14
  int v25; // ebx
  void *v26; // rax
  KPROCESSOR_MODE v28; // r9
  __int64 v29; // rcx
  char v30; // [rsp+40h] [rbp-248h]
  BOOLEAN v31; // [rsp+43h] [rbp-245h]
  unsigned int v32; // [rsp+48h] [rbp-240h]
  HANDLE Handle; // [rsp+50h] [rbp-238h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-230h]
  __int128 v35; // [rsp+60h] [rbp-228h] BYREF
  PVOID Object; // [rsp+70h] [rbp-218h] BYREF
  __int64 v37; // [rsp+78h] [rbp-210h]
  __int128 v38; // [rsp+80h] [rbp-208h]
  int v39; // [rsp+90h] [rbp-1F8h]
  size_t Size; // [rsp+98h] [rbp-1F0h]
  HANDLE *v41; // [rsp+A0h] [rbp-1E8h]
  ULONG_PTR v42; // [rsp+A8h] [rbp-1E0h]
  _DWORD *v43; // [rsp+B0h] [rbp-1D8h]
  __int128 v44; // [rsp+C0h] [rbp-1C8h]
  __int128 v45; // [rsp+D0h] [rbp-1B8h]
  unsigned __int64 v46; // [rsp+E0h] [rbp-1A8h]
  _OWORD v47[19]; // [rsp+F0h] [rbp-198h] BYREF
  LARGE_INTEGER v48[4]; // [rsp+220h] [rbp-68h] BYREF

  v41 = a1;
  v42 = a3;
  v11 = (__int64)a5;
  v43 = a7;
  Handle = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  Privileges = 0LL;
  v39 = 0;
  memset(v48, 0, sizeof(v48));
  v37 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v48, 0x20000u);
  memset(v47, 0, 0x128uLL);
  LODWORD(v47[6]) = -1;
  *((_QWORD *)&v47[9] + 1) = &v47[9];
  *(_QWORD *)&v47[9] = &v47[9];
  memset((char *)&v47[13] + 8, 0, 0x50uLL);
  HIDWORD(v47[1]) = a2 & 0x300;
  v12 = a2 & 0xFFFFFCFF;
  v32 = v12;
  v31 = CmpAcquireShutdownRundown();
  if ( v31 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v30 = PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        v44 = 0LL;
        if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v14 = *(unsigned int *)v11;
        LODWORD(v44) = v14;
        v15 = *(const void **)(v11 + 8);
        *((_QWORD *)&v44 + 1) = v15;
        v38 = v44;
        if ( (_WORD)v14 )
        {
          if ( ((unsigned __int8)v15 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v22 = (unsigned __int64)v15 + (unsigned __int16)v14;
          if ( v22 > 0x7FFFFFFF0000LL || v22 < (unsigned __int64)v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (v14 & 1) != 0 )
        {
          v25 = -1073741811;
          goto LABEL_45;
        }
        if ( (_WORD)v14 )
        {
          Size = (unsigned __int16)v14;
          TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                                 v14,
                                                                 (unsigned __int16)v14,
                                                                 0x78634D43u);
          Privileges = TransientPoolWithQuotaTag;
          if ( !TransientPoolWithQuotaTag )
          {
            v25 = -1073741670;
            goto LABEL_45;
          }
          v24 = TransientPoolWithQuotaTag;
          memmove(TransientPoolWithQuotaTag, v15, Size);
          *((_QWORD *)&v38 + 1) = v24;
        }
        v12 = v32;
      }
      v16 = (__int64)a1;
      if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v16 = 0LL;
      if ( a7 )
      {
        v17 = (__int64)a7;
        if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v17 = *(_DWORD *)v17;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_QWORD *)(a3 + 16);
      v46 = v18;
      v45 = 0LL;
      if ( v18 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v19 = *(_DWORD *)v18;
      LODWORD(v45) = v19;
      v20 = *(_QWORD *)(v18 + 8);
      *((_QWORD *)&v45 + 1) = v20;
      v35 = v45;
      if ( (_WORD)v19 )
      {
        if ( (v20 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = v20 + (unsigned __int16)v19;
        if ( v21 > 0x7FFFFFFF0000LL || v21 < v20 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v35 & 1) != 0 )
      {
        v25 = -1073741811;
        goto LABEL_45;
      }
      v26 = *(void **)(a3 + 8);
      Handle = v26;
      PreviousMode = 1;
    }
    else
    {
      if ( a5 )
        v38 = *a5;
      v35 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      v26 = *(void **)(a3 + 8);
      Handle = v26;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v26 )
    {
      v28 = KeGetCurrentThread()->PreviousMode;
      Object = 0LL;
      if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v28, &Object, 0LL) >= 0 )
      {
        v37 = *((_QWORD *)Object + 1);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
      PreviousMode = v30;
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      DWORD2(v47[1]) = a6;
      LODWORD(v47[0]) = 1;
      *((_QWORD *)&v47[0] + 1) = *((_QWORD *)&v38 + 1);
      WORD2(v47[0]) = v38;
      *((_QWORD *)&v47[4] + 1) = a8;
      v25 = ObOpenObjectByName(a3, (__int64)CmKeyObjectType, PreviousMode, 0LL, v12, (__int64)v47, (__int64)&Handle);
      if ( v25 >= 0 )
      {
        *a1 = Handle;
        if ( a7 )
          *a7 = v47[2];
      }
    }
    else
    {
      v25 = -1073741811;
    }
  }
  else
  {
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v25 = -1073741431;
  }
LABEL_45:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v29 = v37;
    LOBYTE(v29) = 10;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, __int128 *))((char *)&NlsMbCodePageTag + 7))(
      v29,
      v48,
      (unsigned int)v25,
      0LL,
      v37,
      &v35);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  CmpCleanupParseContext((__int64)v47, 0);
  if ( v31 )
    CmpReleaseShutdownRundown();
  return (unsigned int)v25;
}
