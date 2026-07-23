/*
 * XREFs of NtEnumerateDriverEntries @ 0x140953B30
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140899A4C (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x1409512A0 (ExpSafeWcslen.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140952310 (ExpTranslateDriverEntryNameToId.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r14
  unsigned int *v4; // r15
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  NTSTATUS v10; // ebx
  _DWORD *v11; // r13
  struct _KTHREAD *v12; // rax
  int v13; // r12d
  unsigned int *PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // r14
  __int64 v19; // rax
  char *v20; // r8
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // r9d
  unsigned int v24; // r10d
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  BOOL v27; // r8d
  unsigned int v28; // edx
  BOOL v29; // eax
  BOOL v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // eax
  _DWORD *v33; // rcx
  size_t v34; // r8
  __int64 v35; // rax
  BOOL v36; // [rsp+38h] [rbp-A0h]
  int v37; // [rsp+3Ch] [rbp-9Ch] BYREF
  unsigned int v38; // [rsp+40h] [rbp-98h]
  unsigned int v39; // [rsp+44h] [rbp-94h]
  unsigned int v40; // [rsp+48h] [rbp-90h]
  NTSTATUS v41; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v42; // [rsp+50h] [rbp-88h]
  _DWORD *v43; // [rsp+58h] [rbp-80h] BYREF
  PVOID P; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-70h]
  size_t Size; // [rsp+70h] [rbp-68h]
  void *Src; // [rsp+78h] [rbp-60h]
  void *v48; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+F8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v43 = 0LL;
  P = 0LL;
  v4 = 0LL;
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v7 = (__int64)BufferLength;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    v8 = Buffer != 0LL ? *BufferLength : 0;
    if ( v8 )
      ProbeForWrite(Buffer, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v8 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( !v8
    || (result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v43, (struct _MDL **)&P),
        result >= 0) )
  {
    v9 = v43;
    v10 = 0;
    v36 = v8 != 0;
    v11 = 0LL;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    LODWORD(NumberOfBytes) = 0;
    v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, 0LL, &NumberOfBytes);
    if ( v13 == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
        v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, (__int64)PoolWithTag, &NumberOfBytes);
      else
        v13 = -1073741670;
    }
    else
    {
      LODWORD(NumberOfBytes) = 0;
    }
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
    if ( v13 || !(_DWORD)NumberOfBytes )
      goto LABEL_53;
    v18 = v4;
    v45 = (unsigned __int64)v4 + 2 * (unsigned int)NumberOfBytes;
    while ( 1 )
    {
      v37 = 0;
      v19 = *((_QWORD *)v18 + 2) - EfiDriverVariablesGuid;
      if ( !v19 )
        v19 = *((_QWORD *)v18 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v19 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v18 + 16, &v37) && v18[2] >= 8 )
      {
        v20 = (char *)v18 + v18[1];
        v40 = *((unsigned __int16 *)v20 + 2);
        Src = v20 + 6;
        v21 = ExpSafeWcslen((_WORD *)v20 + 3, v45);
        if ( v21 != -1 )
          v21 = 2 * v21 + 2;
        if ( v21 != -1 && v24 < v23 && v23 >= v24 + v21 + 6 )
          break;
      }
LABEL_49:
      v35 = *v18;
      if ( !(_DWORD)v35 )
      {
        v2 = BufferLength;
        if ( v11 )
          *v11 = 0;
LABEL_53:
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        if ( P )
          ExUnlockUserBuffer((struct _MDL *)P);
        if ( v13 < 0 )
          v10 = v13;
        *v2 = (_DWORD)v9 - (_DWORD)v43;
        return v10;
      }
      v18 = (unsigned int *)((char *)v18 + v35);
    }
    Size = v21;
    v48 = (void *)(v22 + v21 + 6LL);
    v25 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_DWORD *)v25 != v9 )
    {
      v26 = v25 - (_DWORD)v9;
      v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v8 < v26 )
      {
        v27 = 0;
        v8 = 0;
        v10 = -1073741789;
LABEL_38:
        v38 = (v21 + 23) & 0xFFFFFFFC;
        v39 = v24 + v38 + 12;
        v28 = v39 + 4;
        v42 = v39 + 4;
        if ( v8 < v39 + 4 )
          v10 = -1073741789;
        v41 = v10;
        v29 = 0;
        if ( v8 >= v28 )
          v29 = v27;
        v30 = v29;
        v36 = v29;
        v31 = v8;
        v32 = v8 - v28;
        v8 = 0;
        if ( v31 >= v28 )
          v8 = v32;
        if ( v30 )
        {
          memset(v9, 0, v28);
          v9[1] = 1;
          v9[2] = v39;
          v9[3] = v37;
          v9[4] = 20;
          v9[5] = v38;
          memmove(v9 + 6, Src, Size);
          v33 = (_DWORD *)((char *)v9 + v38 + 4);
          *v33 = 1;
          v34 = v40;
          v33[1] = v40 + 12;
          v33[2] = 4;
          memmove(v33 + 3, v48, v34);
          if ( v11 )
            *v11 = (_DWORD)v9 - (_DWORD)v11;
          v11 = v9;
          v10 = v41;
          v28 = v42;
        }
        v9 = (_DWORD *)((char *)v9 + v28);
        goto LABEL_49;
      }
      v8 -= v26;
    }
    v27 = v36;
    goto LABEL_38;
  }
  return result;
}
