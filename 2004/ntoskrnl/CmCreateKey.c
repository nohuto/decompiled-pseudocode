/*
 * XREFs of CmCreateKey @ 0x140651FB0
 * Callers:
 *     NtCreateKey @ 0x140651F70 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140757740 (NtCreateKeyTransacted.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int8 v13; // dl
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v32; // rcx
  unsigned __int8 v33; // [rsp+40h] [rbp-248h]
  char v34; // [rsp+43h] [rbp-245h]
  unsigned int v35; // [rsp+48h] [rbp-240h]
  HANDLE Handle; // [rsp+50h] [rbp-238h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-230h]
  __int128 v38; // [rsp+60h] [rbp-228h] BYREF
  PVOID Object; // [rsp+70h] [rbp-218h] BYREF
  __int64 v40; // [rsp+78h] [rbp-210h]
  __int128 v41; // [rsp+80h] [rbp-208h]
  int v42; // [rsp+90h] [rbp-1F8h]
  size_t Size; // [rsp+98h] [rbp-1F0h]
  HANDLE *v44; // [rsp+A0h] [rbp-1E8h]
  ULONG_PTR v45; // [rsp+A8h] [rbp-1E0h]
  _DWORD *v46; // [rsp+B0h] [rbp-1D8h]
  __int128 v47; // [rsp+C0h] [rbp-1C8h]
  __int128 v48; // [rsp+D0h] [rbp-1B8h]
  unsigned __int64 v49; // [rsp+E0h] [rbp-1A8h]
  _OWORD v50[19]; // [rsp+F0h] [rbp-198h] BYREF
  LARGE_INTEGER v51[4]; // [rsp+220h] [rbp-68h] BYREF

  v44 = a1;
  v45 = a3;
  v11 = (__int64)a5;
  v46 = a7;
  Handle = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  Privileges = 0LL;
  v42 = 0;
  memset(v51, 0, sizeof(v51));
  v40 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v51, 0x20000u);
  memset(v50, 0, 0x128uLL);
  LODWORD(v50[6]) = -1;
  *((_QWORD *)&v50[9] + 1) = &v50[9];
  *(_QWORD *)&v50[9] = &v50[9];
  memset((char *)&v50[13] + 8, 0, 0x50uLL);
  HIDWORD(v50[1]) = a2 & 0x300;
  v12 = a2 & 0xFFFFFCFF;
  v35 = v12;
  v34 = CmpAcquireShutdownRundown();
  if ( v34 )
  {
    v13 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
    v33 = v13;
    if ( v13 == 1 )
    {
      if ( a5 )
      {
        v47 = 0LL;
        if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v14 = *(unsigned int *)v11;
        LODWORD(v47) = v14;
        v15 = *(const void **)(v11 + 8);
        *((_QWORD *)&v47 + 1) = v15;
        v41 = v47;
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
          *((_QWORD *)&v41 + 1) = v24;
        }
        v12 = v35;
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
      v49 = v18;
      v48 = 0LL;
      if ( v18 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v19 = *(_DWORD *)v18;
      LODWORD(v48) = v19;
      v20 = *(_QWORD *)(v18 + 8);
      *((_QWORD *)&v48 + 1) = v20;
      v38 = v48;
      if ( (_WORD)v19 )
      {
        if ( (v20 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = v20 + (unsigned __int16)v19;
        if ( v21 > 0x7FFFFFFF0000LL || v21 < v20 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v38 & 1) != 0 )
      {
        v25 = -1073741811;
        goto LABEL_45;
      }
      v26 = *(void **)(a3 + 8);
      Handle = v26;
      v13 = 1;
    }
    else
    {
      if ( a5 )
        v41 = *a5;
      v38 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      v26 = *(void **)(a3 + 8);
      Handle = v26;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v26 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      Object = 0LL;
      if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
      {
        v40 = *((_QWORD *)Object + 1);
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      }
      v13 = v33;
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      DWORD2(v50[1]) = a6;
      LODWORD(v50[0]) = 1;
      *((_QWORD *)&v50[0] + 1) = *((_QWORD *)&v41 + 1);
      WORD2(v50[0]) = v41;
      *((_QWORD *)&v50[4] + 1) = a8;
      v25 = ObOpenObjectByName(a3, (_DWORD)CmKeyObjectType, v13, 0, v12, (__int64)v50, (__int64)&Handle);
      if ( v25 >= 0 )
      {
        *a1 = Handle;
        if ( a7 )
          *a7 = v50[2];
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
    v32 = v40;
    LOBYTE(v32) = 10;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, __int128 *))((char *)&NlsMbCodePageTag + 7))(
      v32,
      v51,
      (unsigned int)v25,
      0LL,
      v40,
      &v38);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  CmpCleanupParseContext(v50, 0LL);
  if ( v34 )
    CmpReleaseShutdownRundown(v28, v27, v29);
  return (unsigned int)v25;
}
