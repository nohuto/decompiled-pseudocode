/*
 * XREFs of ExpSetDriverEntry @ 0x14094CFC4
 * Callers:
 *     NtAddDriverEntry @ 0x14094E690 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x14094F7E0 (NtModifyDriverEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D24B0 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x1403F5BB0 (ZwTranslateFilePath.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IoGetEnvironmentVariableEx @ 0x1408954AC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1408957BC (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x14094C7A0 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14094E498 (ExpVerifyFilePath.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, const void *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int i; // r14d
  _FILE_PATH *v6; // r15
  _FILE_PATH *v7; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  SIZE_T v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  int EnvironmentVariable; // ebx
  __int64 v19; // rax
  char *v20; // rsi
  int v21; // eax
  __int64 v22; // r8
  _FILE_PATH *v23; // rax
  ULONG Length; // eax
  unsigned int v25; // ebx
  PVOID v26; // rax
  _WORD *v27; // rdi
  __int64 v28; // rbx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  ULONG v33; // [rsp+34h] [rbp-A4h] BYREF
  ULONG OutputFilePathLength; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD *v35; // [rsp+40h] [rbp-98h]
  unsigned int Size; // [rsp+4Ch] [rbp-8Ch]
  int Size_4; // [rsp+50h] [rbp-88h]
  PVOID v39; // [rsp+58h] [rbp-80h]
  PVOID P; // [rsp+60h] [rbp-78h]
  unsigned int v41; // [rsp+68h] [rbp-70h]
  unsigned int v42; // [rsp+6Ch] [rbp-6Ch]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-58h]
  size_t Dst[3]; // [rsp+88h] [rbp-50h] BYREF

  v3 = (_DWORD *)a3;
  v35 = (_DWORD *)a3;
  Size_4 = a1;
  v39 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v33 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v9 = (unsigned __int64)a2 + 4;
  if ( PreviousMode )
  {
    if ( v9 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v9;
    v41 = v10;
  }
  else
  {
    v10 = *(_DWORD *)v9;
    v41 = v10;
  }
  if ( v10 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v10;
    v13 = (unsigned __int64)a2 + v10;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      v14 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v12 = v10;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72766E45u);
  v16 = PoolWithTag;
  v39 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v12);
  v17 = (unsigned __int64)v16 + v12;
  if ( *v16 == 1 )
  {
    if ( !Size_4 && v16[2] > 0xFFFFu )
      goto LABEL_26;
    v19 = (unsigned int)v16[3];
    if ( (v19 & 1) != 0 )
      goto LABEL_26;
    if ( (v16[4] & 3) != 0 )
      goto LABEL_26;
    v20 = (char *)v16 + v19;
    v21 = ExpSafeWcslen((_DWORD *)((char *)v16 + v19), v17);
    if ( v21 == -1 )
      goto LABEL_26;
    Size = 2 * v21 + 2;
    v6 = (_FILE_PATH *)((char *)v16 + v22);
    EnvironmentVariable = ExpVerifyFilePath((char *)v16 + v22);
    if ( EnvironmentVariable < 0 )
      goto LABEL_59;
    if ( &v20[Size] > (char *)v6 )
    {
LABEL_26:
      EnvironmentVariable = -1073741811;
    }
    else
    {
      if ( v6->Type == 4 )
      {
        Length = v6->Length;
        v7 = v6;
        goto LABEL_39;
      }
      EnvironmentVariable = ZwTranslateFilePath(v6, 4u, 0LL, &OutputFilePathLength);
      if ( EnvironmentVariable == -1073741789 )
      {
        v23 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
        v7 = v23;
        if ( !v23 )
        {
LABEL_35:
          EnvironmentVariable = -1073741670;
          goto LABEL_59;
        }
        memset(v23, 0, OutputFilePathLength);
        v33 = OutputFilePathLength;
        EnvironmentVariable = ZwTranslateFilePath(v6, 4u, v7, &v33);
        if ( EnvironmentVariable < 0 )
          goto LABEL_59;
        Length = OutputFilePathLength;
LABEL_39:
        OutputFilePathLength = Length - 12;
        v42 = Size + 6 + Length - 12;
        v25 = v42;
        v26 = ExAllocatePoolWithTag(NonPagedPoolNx, v42, 0x72766E45u);
        P = v26;
        if ( !v26 )
          goto LABEL_35;
        v27 = v26;
        memset(v26, 0, v25);
        v27[2] = OutputFilePathLength;
        v28 = Size;
        memmove(v27 + 3, v20, Size);
        memmove((char *)v27 + v28 + 6, v7->FilePath, OutputFilePathLength);
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        if ( Size_4 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x", i);
            v33 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    Dst,
                                    (__int64)&EfiDriverVariablesGuid,
                                    0LL,
                                    (int *)&v33,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", i);
              v33 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      Dst,
                                      (__int64)&EfiDriverVariablesGuid,
                                      0LL,
                                      (int *)&v33,
                                      0LL);
            }
            if ( EnvironmentVariable == -1073741568 )
              break;
            if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
              goto LABEL_57;
          }
          if ( i > 0xFFFF )
          {
            EnvironmentVariable = -1073741670;
LABEL_57:
            ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31, v32);
            v16 = v39;
            goto LABEL_59;
          }
        }
        else
        {
          i = *((_DWORD *)v39 + 2);
          swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", i);
          v33 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, (int *)&v33, 0LL);
          if ( EnvironmentVariable == -1073741568
            && ((2 * ((*((_DWORD *)v39 + 2) | (2 * *((_DWORD *)v39 + 2))) & 0xC4444444)) & *((_DWORD *)v39 + 2)) != 0 )
          {
            swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x");
            v33 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    Dst,
                                    (__int64)&EfiDriverVariablesGuid,
                                    0LL,
                                    (int *)&v33,
                                    0LL);
          }
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
            goto LABEL_57;
        }
        EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, (__int64)P, v42, 1);
        goto LABEL_57;
      }
    }
LABEL_59:
    v3 = v35;
    goto LABEL_60;
  }
  EnvironmentVariable = -1073741811;
LABEL_60:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v16, 0);
  if ( Size_4 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
