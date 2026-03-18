/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x140958900
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x1403F5D40 (ZwPssCaptureVaSpaceBulk.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     NtQueryVirtualMemory @ 0x1405FF990 (NtQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 */

__int64 __fastcall NtPssCaptureVaSpaceBulk(void *a1, unsigned __int64 a2, __int128 *a3, SIZE_T a4, __int64 *a5)
{
  ULONG v5; // r10d
  __int128 *MappedSystemVa; // r14
  int v7; // ebx
  struct _MDL *v8; // r15
  int v9; // edi
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v12; // rcx
  struct _MDL *Mdl; // rax
  _QWORD *v14; // r13
  PVOID BaseAddress; // [rsp+58h] [rbp-E0h]
  __int64 v16; // [rsp+60h] [rbp-D8h]
  char *Handlea; // [rsp+68h] [rbp-D0h]
  PVOID Object; // [rsp+80h] [rbp-B8h] BYREF
  ULONG_PTR ReturnLength; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+90h] [rbp-A8h]
  void *v23; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-90h]
  __int128 *v25; // [rsp+B0h] [rbp-88h]
  SIZE_T v26; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-70h] BYREF

  v5 = a4;
  MappedSystemVa = a3;
  BaseAddress = (PVOID)a2;
  v23 = a1;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  Object = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  ReturnLength = 0LL;
  v16 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( a4 < 0x10 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v22 = 0LL;
    ProbeForWrite(a3, a4, 8u);
    if ( a5 )
    {
      v12 = (__int64)a5;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    v22 = *MappedSystemVa;
    a2 = (unsigned __int64)BaseAddress;
    v5 = a4;
  }
  else
  {
    v22 = *a3;
  }
  if ( (_DWORD)v22 )
  {
    if ( (v22 & 0xFFFFFFFC) != 0 )
    {
      v9 = -1073741637;
    }
    else
    {
      if ( a2 <= 0x7FFFFFFEFFFFLL )
      {
        if ( PreviousMode )
        {
          Mdl = IoAllocateMdl(MappedSystemVa, v5, 0, 0, 0LL);
          v8 = Mdl;
          if ( !Mdl
            || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), (v8->MdlFlags & 5) == 0)
              ? (MappedSystemVa = (__int128 *)MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u))
              : (MappedSystemVa = (__int128 *)v8->MappedSystemVa),
                !MappedSystemVa) )
          {
            v9 = -1073741670;
            goto LABEL_44;
          }
        }
        else
        {
          v8 = 0LL;
        }
        if ( a1 != (void *)-1LL )
        {
          v9 = ObReferenceObjectByHandleWithTag(
                 a1,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x41737350u,
                 &Object,
                 0LL);
          if ( v9 < 0 )
            goto LABEL_44;
          if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x41737350u);
            v9 = -1073741790;
            goto LABEL_44;
          }
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          v7 = 1;
        }
        if ( PreviousMode )
        {
          v9 = ZwPssCaptureVaSpaceBulk(-1LL, (__int64)BaseAddress);
        }
        else
        {
          *((_DWORD *)MappedSystemVa + 1) = 0;
          v16 = 16LL;
          Handlea = (char *)(a4 - 16);
          v14 = MappedSystemVa + 1;
          if ( a4 - 16 >= 0x30 )
          {
            while ( 1 )
            {
              if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
              {
                v9 = -1073741749;
                goto LABEL_44;
              }
              v9 = NtQueryVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     BaseAddress,
                     MemoryBasicInformation,
                     v14,
                     0x30uLL,
                     &ReturnLength);
              if ( v9 < 0 )
                break;
              Handlea -= ReturnLength;
              v16 += ReturnLength;
              BaseAddress = (PVOID)(*v14 + v14[3]);
              v14 += 6;
              ++*((_DWORD *)MappedSystemVa + 1);
              *((_QWORD *)MappedSystemVa + 1) = BaseAddress;
              if ( (unsigned __int64)Handlea < 0x30 )
                goto LABEL_41;
            }
            if ( *((_DWORD *)MappedSystemVa + 1) )
              v9 = 0;
          }
LABEL_41:
          if ( v9 >= 0 && *((_QWORD *)MappedSystemVa + 1) != 0x7FFFFFFF0000LL )
            v9 = 261;
        }
        goto LABEL_44;
      }
      v9 = -1073741503;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_44:
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  if ( v8 )
  {
    MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( a5 )
    *a5 = v16;
  return (unsigned int)v9;
}
