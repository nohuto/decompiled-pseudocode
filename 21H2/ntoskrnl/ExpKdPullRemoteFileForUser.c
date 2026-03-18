/*
 * XREFs of ExpKdPullRemoteFileForUser @ 0x1408536D4
 * Callers:
 *     NtSystemDebugControl @ 0x1406DC120 (NtSystemDebugControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KeComputeSha256 @ 0x1403A55A0 (KeComputeSha256.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlDowncaseUnicodeString @ 0x1406B4AE0 (RtlDowncaseUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     KdPullRemoteFile @ 0x140A6F300 (KdPullRemoteFile.c)
 */

__int64 __fastcall ExpKdPullRemoteFileForUser(_OWORD *a1)
{
  char PreviousMode; // dl
  int v2; // r14d
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  int v7; // r12d
  char *v8; // rsi
  int v9; // ebx
  int v10; // edi
  int v11; // eax
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // r12d
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // r14d
  int v24; // ebx
  __int64 v25; // rbx
  char v26; // r13
  SIZE_T v27; // rdx
  _DWORD *v28; // rbx
  PVOID P[2]; // [rsp+28h] [rbp-A0h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-80h] BYREF
  _QWORD Buf1[4]; // [rsp+70h] [rbp-58h] BYREF

  *(_OWORD *)P = 0LL;
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
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x46644B55u);
  P[1] = PoolWithTag;
  if ( PoolWithTag )
  {
    LOWORD(P[0]) = Src[0];
    WORD1(P[0]) = Src[0];
    memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x46644B55u);
    if ( DestinationString.Buffer )
    {
      *(_DWORD *)&DestinationString.Length = P[0];
      RtlDowncaseUnicodeString(&DestinationString, (PCUNICODE_STRING)P, 0);
      KeComputeSha256((__int64)DestinationString.Buffer, DestinationString.Length, (__int64)Buf1);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( !ExpSysDbgPulledFileTable )
        goto LABEL_28;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&ExpSysDbgLock, 0, v6, (__int64)&ExpSysDbgLock);
      if ( v6 )
        *(_BYTE *)(v6 + 18) = 1;
      v7 = 0;
      v8 = (char *)ExpSysDbgPulledFileTable;
      if ( ExpSysDbgPulledFileTable )
      {
        v9 = *(_DWORD *)ExpSysDbgPulledFileTable - 1;
        if ( v9 < 0 )
        {
LABEL_24:
          v2 = 0;
          goto LABEL_25;
        }
        while ( 1 )
        {
          v10 = (v2 + v9) >> 1;
          v11 = memcmp(Buf1, &v8[8 * v10 + 8], 8uLL);
          if ( v11 >= 0 )
          {
            v2 = 0;
            if ( v11 <= 0 )
            {
              v7 = 1;
              break;
            }
            v2 = v10 + 1;
          }
          else
          {
            if ( !v10 )
              goto LABEL_24;
            v9 = v10 - 1;
          }
          if ( v9 < v2 )
            goto LABEL_24;
        }
      }
LABEL_25:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock);
      KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !v7 )
      {
LABEL_28:
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        v13 = KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock, v13, (__int64)&ExpSysDbgLock);
        if ( v14 )
          *(_BYTE *)(v14 + 18) = 1;
        v16 = -1LL;
        if ( ExpSysDbgPulledFileTable )
        {
          if ( *(int *)ExpSysDbgPulledFileTable >= 0x1FFFFFFF )
            goto LABEL_81;
          v17 = *((int *)ExpSysDbgPulledFileTable + 1);
          if ( *(_DWORD *)ExpSysDbgPulledFileTable != (_DWORD)v17 )
          {
LABEL_35:
            if ( v16 )
            {
              if ( v16 == -1 )
              {
                v16 = (__int64)ExpSysDbgPulledFileTable;
              }
              else
              {
                *(_DWORD *)v16 = 0;
                *(_DWORD *)(v16 + 4) = 2048;
                v28 = ExpSysDbgPulledFileTable;
                if ( ExpSysDbgPulledFileTable )
                {
                  memmove((void *)v16, ExpSysDbgPulledFileTable, 8LL * *(int *)ExpSysDbgPulledFileTable + 16);
                  *(_DWORD *)(v16 + 4) = 2 * v28[1];
                  ExFreePoolWithTag(v28, 0);
                }
                ExpSysDbgPulledFileTable = (PVOID)v16;
              }
              v18 = 0;
              v19 = *(_DWORD *)v16 - 1;
              if ( v19 >= 0 )
              {
                do
                {
                  v20 = (v18 + v19) >> 1;
                  v21 = memcmp(Buf1, (const void *)(v16 + 8 * (v20 + 1LL)), 8uLL);
                  if ( v21 >= 0 )
                  {
                    if ( v21 <= 0 )
                    {
                      v2 = 1;
                      break;
                    }
                    v18 = v20 + 1;
                  }
                  else
                  {
                    if ( !v20 )
                      break;
                    v19 = v20 - 1;
                  }
                }
                while ( v19 >= v18 );
              }
              if ( v2 )
              {
                v22 = 255;
              }
              else
              {
                v22 = KdPullRemoteFile(P);
                if ( v22 < 0
                  || (DbgPrintEx(0x66u, 2u, "ExpKdPullRemoteFileForUser: Pulled %wZ from kd\n", P), ExpSysDbgPullOnce) )
                {
                  if ( v19 < v18 )
                  {
                    v18 = 0;
                    v19 = *(_DWORD *)v16 - 1;
                    if ( !*(_DWORD *)v16 )
                    {
                      *(_QWORD *)(v16 + 8) = Buf1[0];
                      *(_DWORD *)v16 = 1;
                      v16 = 0LL;
                    }
                  }
                  if ( v16 )
                  {
                    v23 = 0;
                    if ( v18 >= 0 )
                      v23 = v18;
                    v24 = v19 + 1;
                    while ( v23 < v24 && memcmp(Buf1, (const void *)(v16 + 8 * (v23 + 1LL)), 8uLL) >= 0 )
                      ++v23;
                    v25 = v16 + 8LL * v23;
                    memmove((void *)(v16 + 8 * (v23 + 1 + 1LL)), (const void *)(v25 + 8), 8LL * (*(_DWORD *)v16 - v23));
                    ++*(_DWORD *)v16;
                    *(_QWORD *)(v25 + 8) = Buf1[0];
                  }
                }
              }
              goto LABEL_51;
            }
LABEL_81:
            v22 = -1073741670;
LABEL_51:
            v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
              ExfTryToWakePushLock(&ExpSysDbgLock);
            KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            goto LABEL_53;
          }
          v27 = 16 * (v17 + 1);
        }
        else
        {
          v27 = 16400LL;
        }
        v16 = (__int64)ExAllocatePoolWithTag(PagedPool, v27, 0x66644B55u);
        goto LABEL_35;
      }
      v22 = 255;
    }
    else
    {
      v22 = -1073741670;
    }
LABEL_53:
    ExFreePoolWithTag(P[1], 0);
    return (unsigned int)v22;
  }
  return 3221225626LL;
}
