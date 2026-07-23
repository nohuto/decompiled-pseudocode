/*
 * XREFs of ExpKdPullRemoteFileForUser @ 0x14095BB9C
 * Callers:
 *     NtSystemDebugControl @ 0x1407CFD70 (NtSystemDebugControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     KeComputeSha256 @ 0x1403998E0 (KeComputeSha256.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlDowncaseUnicodeString @ 0x1405F6630 (RtlDowncaseUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     KdPullRemoteFile @ 0x1409B7724 (KdPullRemoteFile.c)
 */

__int64 __fastcall ExpKdPullRemoteFileForUser(_OWORD *a1)
{
  char PreviousMode; // dl
  int v2; // r14d
  wchar_t *PoolWithTag; // rax
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v7; // rdi
  int v8; // r13d
  char *v9; // r14
  int v10; // r12d
  int v11; // edi
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rax
  _RTL_BALANCED_NODE *v18; // rax
  _RTL_BALANCED_NODE *v19; // rdi
  __int64 v21; // rsi
  SIZE_T v22; // rdx
  __int64 v23; // rdx
  _DWORD *v24; // rdi
  int v25; // r12d
  int v26; // eax
  int v27; // ecx
  int v28; // edi
  int v29; // r13d
  int v30; // r14d
  int v31; // eax
  int v32; // edi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // [rsp+24h] [rbp-A4h]
  UNICODE_STRING SourceString; // [rsp+28h] [rbp-A0h] BYREF
  int v39; // [rsp+38h] [rbp-90h]
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
    BYTE2(v7[1].Left) |= 1u;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
  if ( v8 )
  {
    v5 = 255;
    goto LABEL_34;
  }
LABEL_35:
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v18 = KeAbPreAcquire((ULONG_PTR)&ExpSysDbgLock, 0LL, 0);
  v19 = v18;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock, v18, (ULONG_PTR)&ExpSysDbgLock);
  if ( v19 )
    BYTE2(v19[1].Left) |= 1u;
  v21 = -1LL;
  if ( !ExpSysDbgPulledFileTable )
  {
    v22 = 16400LL;
    goto LABEL_44;
  }
  if ( *(int *)ExpSysDbgPulledFileTable >= 0x1FFFFFFF )
    goto LABEL_76;
  v23 = *((int *)ExpSysDbgPulledFileTable + 1);
  if ( *(_DWORD *)ExpSysDbgPulledFileTable == (_DWORD)v23 )
  {
    v22 = 16 * (v23 + 1);
LABEL_44:
    v21 = (__int64)ExAllocatePoolWithTag(PagedPool, v22, 0x66644B55u);
  }
  if ( !v21 )
  {
LABEL_76:
    v5 = -1073741670;
    goto LABEL_77;
  }
  if ( v21 == -1 )
  {
    v21 = (__int64)ExpSysDbgPulledFileTable;
  }
  else
  {
    *(_DWORD *)v21 = 0;
    *(_DWORD *)(v21 + 4) = 2048;
    v24 = ExpSysDbgPulledFileTable;
    if ( ExpSysDbgPulledFileTable )
    {
      memmove((void *)v21, ExpSysDbgPulledFileTable, 8LL * *(int *)ExpSysDbgPulledFileTable + 16);
      *(_DWORD *)(v21 + 4) = 2 * v24[1];
      ExFreePoolWithTag(v24, 0);
    }
    ExpSysDbgPulledFileTable = (PVOID)v21;
  }
  v25 = 0;
  v26 = *(_DWORD *)v21;
  v37 = v26;
  v27 = *(_DWORD *)v21 - 1;
  v39 = v27;
  v28 = v26 - 1;
  v29 = 0;
  if ( v26 - 1 < 0 )
    goto LABEL_61;
  while ( 2 )
  {
    v30 = (v25 + v28) >> 1;
    v31 = memcmp(Buf1, (const void *)(v21 + 8 * (v30 + 1LL)), 8uLL);
    if ( v31 < 0 )
    {
      if ( !v30 )
        goto LABEL_60;
      v28 = v30 - 1;
LABEL_57:
      if ( v28 < v25 )
        goto LABEL_60;
      continue;
    }
    break;
  }
  if ( v31 > 0 )
  {
    v25 = v30 + 1;
    goto LABEL_57;
  }
  v29 = 1;
LABEL_60:
  v26 = v37;
  v27 = v39;
  v2 = 0;
LABEL_61:
  if ( v29 )
  {
    v5 = 255;
  }
  else
  {
    if ( v28 < v25 )
    {
      v25 = 0;
      v28 = v27;
      if ( !v26 )
      {
        *(_QWORD *)(v21 + 8) = Buf1[0];
        ++*(_DWORD *)v21;
        v21 = 0LL;
      }
    }
    if ( v21 )
    {
      if ( v25 >= 0 )
        v2 = v25;
      v32 = v28 + 1;
      while ( v2 < v32 && memcmp(Buf1, (const void *)(v21 + 8 * (v2 + 1LL)), 8uLL) >= 0 )
        ++v2;
      v33 = v21 + 8LL * v2;
      memmove((void *)(v21 + 8 * (v2 + 1 + 1LL)), (const void *)(v33 + 8), 8LL * (*(_DWORD *)v21 - v2));
      ++*(_DWORD *)v21;
      *(_QWORD *)(v33 + 8) = Buf1[0];
    }
    v5 = KdPullRemoteFile(&SourceString);
    if ( v5 >= 0 )
      DbgPrintEx(0x66u, 2u, "ExpKdPullRemoteFileForUser: Pulled %wZ from kd\n", &SourceString);
  }
LABEL_77:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpSysDbgLock);
  KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
LABEL_34:
  ExFreePoolWithTag(SourceString.Buffer, 0);
  return (unsigned int)v5;
}
