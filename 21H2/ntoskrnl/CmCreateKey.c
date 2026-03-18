/*
 * XREFs of CmCreateKey @ 0x14067F8D0
 * Callers:
 *     NtCreateKeyTransacted @ 0x14067EFD0 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x14067F860 (NtCreateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
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
  HANDLE *v10; // rsi
  unsigned int v11; // r12d
  char v12; // r14
  unsigned __int8 PreviousMode; // r14
  size_t v14; // rax
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  struct _PRIVILEGE_SET *v25; // rsi
  int v26; // ebx
  void *v27; // rax
  POBJECT_TYPE *v28; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  KPROCESSOR_MODE v31; // r9
  __int64 v32; // rcx
  char v33; // [rsp+40h] [rbp-238h]
  HANDLE Handle; // [rsp+48h] [rbp-230h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-228h]
  PVOID Object; // [rsp+58h] [rbp-220h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-218h]
  size_t Size; // [rsp+68h] [rbp-210h]
  __int128 v39; // [rsp+70h] [rbp-208h] BYREF
  __int64 v40; // [rsp+80h] [rbp-1F8h]
  HANDLE *v41; // [rsp+88h] [rbp-1F0h]
  __int128 v42; // [rsp+90h] [rbp-1E8h]
  void *Src; // [rsp+A0h] [rbp-1D8h]
  HANDLE *v44; // [rsp+A8h] [rbp-1D0h]
  ULONG_PTR v45; // [rsp+B0h] [rbp-1C8h]
  _DWORD *v46; // [rsp+B8h] [rbp-1C0h]
  __int128 v47; // [rsp+C0h] [rbp-1B8h]
  __int128 v48; // [rsp+D0h] [rbp-1A8h]
  _OWORD v49[19]; // [rsp+E0h] [rbp-198h] BYREF
  _OWORD v50[2]; // [rsp+210h] [rbp-68h] BYREF

  v10 = a1;
  v41 = a1;
  v44 = a1;
  v45 = a3;
  Size = (size_t)a5;
  v46 = a7;
  Handle = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  Privileges = 0LL;
  LODWORD(Object) = 0;
  memset(v50, 0, sizeof(v50));
  v40 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v50, 0x20000uLL);
  memset(v49, 0, 0x128uLL);
  LODWORD(v49[6]) = -1;
  *((_QWORD *)&v49[9] + 1) = &v49[9];
  *(_QWORD *)&v49[9] = &v49[9];
  memset((char *)&v49[13] + 8, 0, 0x50uLL);
  HIDWORD(v49[1]) = a2 & 0x300;
  v11 = a2 & 0xFFFFFCFF;
  v35 = v11;
  v12 = CmpAcquireShutdownRundown();
  v33 = v12;
  if ( v12 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        v47 = 0LL;
        v14 = Size;
        if ( Size >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        v15 = *(unsigned int *)v14;
        LODWORD(v47) = v15;
        v16 = *(void **)(v14 + 8);
        Src = v16;
        *((_QWORD *)&v47 + 1) = v16;
        v42 = v47;
        if ( (_WORD)v15 )
        {
          if ( ((unsigned __int8)v16 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = (unsigned __int64)v16 + (unsigned __int16)v15;
          if ( v23 > 0x7FFFFFFF0000LL || v23 < (unsigned __int64)v16 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (v15 & 1) != 0 )
        {
          v26 = -1073741811;
          v12 = v33;
          goto LABEL_45;
        }
        if ( (_WORD)v15 )
        {
          Size = (unsigned __int16)v15;
          TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                                 v15,
                                                                 (unsigned __int16)v15,
                                                                 0x78634D43u);
          Privileges = TransientPoolWithQuotaTag;
          if ( !TransientPoolWithQuotaTag )
          {
            v26 = -1073741670;
            v12 = v33;
            goto LABEL_45;
          }
          v25 = TransientPoolWithQuotaTag;
          memmove(TransientPoolWithQuotaTag, Src, Size);
          *((_QWORD *)&v42 + 1) = v25;
          v10 = v41;
        }
      }
      v17 = (__int64)v10;
      if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = 0LL;
      if ( a7 )
      {
        v18 = (__int64)a7;
        if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *(_QWORD *)(a3 + 16);
      v41 = (HANDLE *)v19;
      v48 = 0LL;
      if ( v19 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v20 = *(_DWORD *)v19;
      LODWORD(v48) = v20;
      v21 = *(_QWORD *)(v19 + 8);
      *((_QWORD *)&v48 + 1) = v21;
      v39 = v48;
      if ( (_WORD)v20 )
      {
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = v21 + (unsigned __int16)v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v39 & 1) != 0 )
      {
        v26 = -1073741811;
        v12 = v33;
        goto LABEL_45;
      }
      v27 = *(void **)(a3 + 8);
      Handle = v27;
    }
    else
    {
      if ( a5 )
        v42 = *a5;
      v39 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      v27 = *(void **)(a3 + 8);
      Handle = v27;
    }
    if ( CmpTraceRoutine )
    {
      if ( v27 )
      {
        v31 = KeGetCurrentThread()->PreviousMode;
        Object = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v31, &Object, 0LL) >= 0 )
        {
          v40 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      DWORD2(v49[1]) = a6;
      LODWORD(v49[0]) = 1;
      *((_QWORD *)&v49[0] + 1) = *((_QWORD *)&v42 + 1);
      WORD2(v49[0]) = v42;
      *((_QWORD *)&v49[4] + 1) = a8;
      v28 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v26 = ObOpenObjectByNameEx(a3, v28, PreviousMode, 0LL, v11, v49, CurrentSilo, &Handle);
      if ( v26 >= 0 )
      {
        *v10 = Handle;
        if ( a7 )
          *a7 = v49[2];
      }
      v12 = v33;
    }
    else
    {
      v26 = -1073741811;
      v12 = v33;
    }
  }
  else
  {
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v26 = -1073741431;
  }
LABEL_45:
  if ( CmpTraceRoutine )
  {
    v32 = v40;
    LOBYTE(v32) = 10;
    CmpTraceRoutine(v32, v50, (unsigned int)v26, 0LL, v40, &v39);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  CmpCleanupParseContext(v49, 0LL);
  if ( v12 )
    CmpReleaseShutdownRundown();
  return (unsigned int)v26;
}
