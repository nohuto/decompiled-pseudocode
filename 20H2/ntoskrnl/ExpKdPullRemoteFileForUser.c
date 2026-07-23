/*
 * XREFs of ExpKdPullRemoteFileForUser @ 0x14095E14C
 * Callers:
 *     NtSystemDebugControl @ 0x1407CB940 (NtSystemDebugControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     KeComputeSha256 @ 0x140399320 (KeComputeSha256.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2070 (memcmp.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlDowncaseUnicodeString @ 0x1406BC640 (RtlDowncaseUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     KdPullRemoteFile @ 0x1409B9724 (KdPullRemoteFile.c)
 */

__int64 __fastcall ExpKdPullRemoteFileForUser(_OWORD *a1)
{
  char PreviousMode; // dl
  int v2; // r14d
  wchar_t *PoolWithTag; // rax
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  int v8; // r13d
  char *v9; // r14
  int v10; // r12d
  int v11; // edi
  int v12; // esi
  int v13; // eax
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rsi
  SIZE_T v19; // rdx
  __int64 v20; // rdx
  _DWORD *v21; // rdi
  int v22; // r12d
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // r13d
  int v27; // r14d
  int v28; // eax
  int v29; // edi
  __int64 v30; // rdi
  int v31; // [rsp+24h] [rbp-A4h]
  UNICODE_STRING SourceString; // [rsp+28h] [rbp-A0h] BYREF
  int v33; // [rsp+38h] [rbp-90h]
  void *Src[2]; // [rsp+40h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-78h] BYREF
  _QWORD Buf1[4]; // [rsp+70h] [rbp-58h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)Src = *a1;
  if ( PreviousMode == 1 )
  {
    if ( ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src[1] + 2 > 0x7FFFFFFF0000LL || (char *)Src[1] + 2 < Src[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v2 = 0;
  if ( !LOWORD(Src[0]) || ((__int64)Src[0] & 1) != 0 || (BYTE2(Src[0]) & 1) != 0 || WORD1(Src[0]) < LOWORD(Src[0]) )
    return 3221225485LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x46644B55u);
  SourceString.Buffer = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  SourceString.Length = (unsigned __int16)Src[0];
  SourceString.MaximumLength = (unsigned __int16)Src[0];
  memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x46644B55u);
  if ( !DestinationString.Buffer )
  {
    v5 = -1073741670;
    goto LABEL_34;
  }
  DestinationString.Length = SourceString.Length;
  DestinationString.MaximumLength = SourceString.MaximumLength;
  RtlDowncaseUnicodeString(&DestinationString, &SourceString, 0);
  KeComputeSha256((__int64)DestinationString.Buffer, DestinationString.Length, (__int64)Buf1);
  ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( !ExpSysDbgPulledFileTable )
    goto LABEL_35;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpSysDbgLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpSysDbgLock, v7, (ULONG_PTR)&ExpSysDbgLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = 0;
  v9 = (char *)ExpSysDbgPulledFileTable;
  if ( !ExpSysDbgPulledFileTable )
    goto LABEL_30;
  v10 = 0;
  v11 = *(_DWORD *)ExpSysDbgPulledFileTable - 1;
  if ( v11 < 0 )
    goto LABEL_30;
  while ( 1 )
  {
    v12 = (v10 + v11) >> 1;
    v13 = memcmp(Buf1, &v9[8 * v12 + 8], 8uLL);
    if ( v13 < 0 )
    {
      if ( !v12 )
        goto LABEL_30;
      v11 = v12 - 1;
      goto LABEL_27;
    }
    if ( v13 <= 0 )
      break;
    v10 = v12 + 1;
LABEL_27:
    if ( v11 < v10 )
      goto LABEL_30;
  }
  v8 = 1;
LABEL_30:
  v2 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock);
  KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 )
  {
    v5 = 255;
    goto LABEL_34;
  }
LABEL_35:
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)&ExpSysDbgLock, 0LL, 0);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock, v15, (ULONG_PTR)&ExpSysDbgLock);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  v18 = -1LL;
  if ( !ExpSysDbgPulledFileTable )
  {
    v19 = 16400LL;
    goto LABEL_44;
  }
  if ( *(int *)ExpSysDbgPulledFileTable >= 0x1FFFFFFF )
    goto LABEL_76;
  v20 = *((int *)ExpSysDbgPulledFileTable + 1);
  if ( *(_DWORD *)ExpSysDbgPulledFileTable == (_DWORD)v20 )
  {
    v19 = 16 * (v20 + 1);
LABEL_44:
    v18 = (__int64)ExAllocatePoolWithTag(PagedPool, v19, 0x66644B55u);
  }
  if ( !v18 )
  {
LABEL_76:
    v5 = -1073741670;
    goto LABEL_77;
  }
  if ( v18 == -1 )
  {
    v18 = (__int64)ExpSysDbgPulledFileTable;
  }
  else
  {
    *(_DWORD *)v18 = 0;
    *(_DWORD *)(v18 + 4) = 2048;
    v21 = ExpSysDbgPulledFileTable;
    if ( ExpSysDbgPulledFileTable )
    {
      memmove((void *)v18, ExpSysDbgPulledFileTable, 8LL * *(int *)ExpSysDbgPulledFileTable + 16);
      *(_DWORD *)(v18 + 4) = 2 * v21[1];
      ExFreePoolWithTag(v21, 0);
    }
    ExpSysDbgPulledFileTable = (PVOID)v18;
  }
  v22 = 0;
  v23 = *(_DWORD *)v18;
  v31 = v23;
  v24 = *(_DWORD *)v18 - 1;
  v33 = v24;
  v25 = v23 - 1;
  v26 = 0;
  if ( v23 - 1 < 0 )
    goto LABEL_61;
  while ( 2 )
  {
    v27 = (v22 + v25) >> 1;
    v28 = memcmp(Buf1, (const void *)(v18 + 8 * (v27 + 1LL)), 8uLL);
    if ( v28 < 0 )
    {
      if ( !v27 )
        goto LABEL_60;
      v25 = v27 - 1;
LABEL_57:
      if ( v25 < v22 )
        goto LABEL_60;
      continue;
    }
    break;
  }
  if ( v28 > 0 )
  {
    v22 = v27 + 1;
    goto LABEL_57;
  }
  v26 = 1;
LABEL_60:
  v23 = v31;
  v24 = v33;
  v2 = 0;
LABEL_61:
  if ( v26 )
  {
    v5 = 255;
  }
  else
  {
    if ( v25 < v22 )
    {
      v22 = 0;
      v25 = v24;
      if ( !v23 )
      {
        *(_QWORD *)(v18 + 8) = Buf1[0];
        ++*(_DWORD *)v18;
        v18 = 0LL;
      }
    }
    if ( v18 )
    {
      if ( v22 >= 0 )
        v2 = v22;
      v29 = v25 + 1;
      while ( v2 < v29 && memcmp(Buf1, (const void *)(v18 + 8 * (v2 + 1LL)), 8uLL) >= 0 )
        ++v2;
      v30 = v18 + 8LL * v2;
      memmove((void *)(v18 + 8 * (v2 + 1 + 1LL)), (const void *)(v30 + 8), 8LL * (*(_DWORD *)v18 - v2));
      ++*(_DWORD *)v18;
      *(_QWORD *)(v30 + 8) = Buf1[0];
    }
    v5 = KdPullRemoteFile(&SourceString);
    if ( v5 >= 0 )
      DbgPrintEx(0x66u, 2u, "ExpKdPullRemoteFileForUser: Pulled %wZ from kd\n", &SourceString);
  }
LABEL_77:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock);
  KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_34:
  ExFreePoolWithTag(SourceString.Buffer, 0);
  return (unsigned int)v5;
}
