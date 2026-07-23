/*
 * XREFs of ExpSetBootEntry @ 0x1409512D0
 * Callers:
 *     NtAddBootEntry @ 0x140953160 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x1409542B0 (NtModifyBootEntry.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strcmp @ 0x1403D38A0 (strcmp.c)
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x1403FDE40 (ZwTranslateFilePath.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     IoGetEnvironmentVariableEx @ 0x140899BAC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140899EBC (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x1409512A0 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140952F98 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409530F4 (ExpVerifyWindowsOsOptions.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, const void *a2, unsigned __int64 a3)
{
  unsigned int i; // r15d
  PVOID v5; // r12
  PVOID v6; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  SIZE_T v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  char *PoolWithTag; // rax
  char *v15; // rdi
  unsigned __int64 v16; // r14
  int v17; // esi
  int EnvironmentVariable; // ebx
  PVOID v19; // r14
  __int64 v20; // rsi
  _FILE_PATH *v21; // r13
  char *v22; // rsi
  int v23; // eax
  unsigned int v24; // r14d
  _FILE_PATH *v25; // rax
  _FILE_PATH *v26; // rsi
  ULONG Length; // eax
  ULONG v28; // eax
  ULONG v29; // esi
  size_t v30; // rbx
  PVOID v31; // rax
  size_t v32; // r8
  _WORD *v33; // rbx
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // r14
  char *v37; // rbx
  char *v38; // r14
  _FILE_PATH *v39; // r8
  struct _KTHREAD *v40; // rax
  ULONG v42; // [rsp+38h] [rbp-D0h] BYREF
  ULONG OutputFilePathLength; // [rsp+3Ch] [rbp-CCh] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h]
  PFILE_PATH InputFilePath; // [rsp+50h] [rbp-B8h]
  PFILE_PATH v46; // [rsp+58h] [rbp-B0h]
  ULONG v47; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int Size; // [rsp+64h] [rbp-A4h]
  int v50; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v51; // [rsp+70h] [rbp-98h]
  PVOID v52; // [rsp+78h] [rbp-90h]
  unsigned int v53; // [rsp+80h] [rbp-88h]
  char *v54; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h]
  _DWORD *v56; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-58h]
  size_t Dst[3]; // [rsp+B8h] [rbp-50h] BYREF

  v56 = (_DWORD *)a3;
  v52 = 0LL;
  i = 0;
  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v47 = 0;
  v42 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(_DWORD *)v8;
    v53 = *(_DWORD *)v8;
  }
  else
  {
    v9 = *(_DWORD *)v8;
    v53 = *(_DWORD *)v8;
  }
  if ( v9 < 0x1C )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = v9;
    v12 = (unsigned __int64)a2 + v9;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      v13 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
      v9 = v53;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v11 = v9;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
  v15 = PoolWithTag;
  v52 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v11);
  v16 = (unsigned __int64)&v15[v11];
  v17 = a1;
  if ( *(_DWORD *)v15 == 1 && (a1 || *((_DWORD *)v15 + 2) <= 0xFFFFu) )
  {
    *((_DWORD *)v15 + 3) &= 0x13u;
    Size = *((_DWORD *)v15 + 4);
    if ( (Size & 1) == 0 )
    {
      v51 = *((_DWORD *)v15 + 5);
      if ( (v51 & 3) == 0 )
      {
        v20 = *((unsigned int *)v15 + 6);
        if ( (unsigned int)v20 > v9 || (v54 = &v15[v20 + 28], (unsigned __int64)v54 >= v16) )
        {
          EnvironmentVariable = -1073741811;
          v19 = P;
          goto LABEL_94;
        }
        if ( (unsigned int)v20 >= 8 && !strcmp(v15 + 28, "WINDOWS") )
        {
          if ( (unsigned int)v20 <= 0x14 )
          {
            EnvironmentVariable = -1073741811;
LABEL_93:
            v19 = P;
            v5 = P;
            goto LABEL_94;
          }
          EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 28, (unsigned int)v20);
          if ( EnvironmentVariable < 0 )
            goto LABEL_93;
          v50 = 1;
          v21 = (_FILE_PATH *)&v15[*((unsigned int *)v15 + 11) + 28];
        }
        else
        {
          v50 = 0;
          v21 = 0LL;
        }
        v22 = &v15[Size];
        Src = v22;
        v23 = ExpSafeWcslen(v22, v16);
        if ( v23 == -1 )
        {
          EnvironmentVariable = -1073741811;
          v19 = P;
          v6 = P;
          v5 = P;
LABEL_94:
          v17 = a1;
          goto LABEL_95;
        }
        Size = 2 * v23 + 2;
        InputFilePath = (PFILE_PATH)&v15[v51];
        EnvironmentVariable = ExpVerifyFilePath(InputFilePath);
        if ( EnvironmentVariable >= 0 )
        {
          if ( v54 > v22 || (v24 = Size, &v22[Size] > (char *)InputFilePath) )
          {
            EnvironmentVariable = -1073741811;
          }
          else
          {
            if ( InputFilePath->Type == 4 )
            {
              Length = InputFilePath->Length;
              v46 = InputFilePath;
              goto LABEL_52;
            }
            EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, 0LL, &OutputFilePathLength);
            if ( EnvironmentVariable == -1073741789 )
            {
              v25 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
              v26 = v25;
              v46 = v25;
              if ( !v25 )
              {
                EnvironmentVariable = -1073741670;
                v6 = 0LL;
LABEL_47:
                v19 = P;
LABEL_48:
                v5 = InputFilePath;
                goto LABEL_94;
              }
              memset(v25, 0, OutputFilePathLength);
              v42 = OutputFilePathLength;
              EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, v26, &v42);
              if ( EnvironmentVariable < 0 )
              {
                v6 = v26;
                goto LABEL_47;
              }
              Length = OutputFilePathLength;
LABEL_52:
              v28 = Length - 12;
              OutputFilePathLength = v28;
              if ( !v50 || v21->Type == 4 )
              {
                v29 = *((_DWORD *)v15 + 6);
              }
              else
              {
                EnvironmentVariable = ZwTranslateFilePath(v21, 4u, 0LL, &v47);
                if ( EnvironmentVariable != -1073741789 )
                {
LABEL_67:
                  v19 = P;
                  goto LABEL_59;
                }
                v29 = v47 + *((_DWORD *)v15 + 6) - v21->Length;
                v28 = OutputFilePathLength;
              }
              v51 = v24 + 6 + v29 + v28;
              v30 = v51;
              v31 = ExAllocatePoolWithTag(NonPagedPoolNx, v51, 0x72766E45u);
              v19 = v31;
              P = v31;
              if ( !v31 )
              {
                EnvironmentVariable = -1073741670;
LABEL_59:
                v6 = v46;
                goto LABEL_48;
              }
              v32 = v30;
              v33 = v31;
              memset(v31, 0, v32);
              *(_DWORD *)v33 = 0;
              v34 = *((_DWORD *)v15 + 3);
              v35 = 0;
              if ( (v34 & 1) != 0 )
              {
                *(_DWORD *)v33 = 1;
                v34 = *((_DWORD *)v15 + 3);
                v35 = 1;
              }
              if ( (v34 & 0x10) != 0 )
                *(_DWORD *)v33 = v35 | 8;
              v33[2] = OutputFilePathLength;
              v36 = Size;
              memmove(v33 + 3, Src, Size);
              v37 = (char *)v33 + v36 + 6;
              memmove(v37, v46->FilePath, OutputFilePathLength);
              v38 = &v37[OutputFilePathLength];
              if ( !v50 || v21->Type == 4 )
              {
                memmove(&v37[OutputFilePathLength], v15 + 28, v29);
              }
              else
              {
                memmove(&v37[OutputFilePathLength], v15 + 28, *((unsigned int *)v15 + 11));
                *((_DWORD *)v38 + 3) = v29;
                v39 = (_FILE_PATH *)&v38[*((unsigned int *)v15 + 11)];
                v42 = v47;
                EnvironmentVariable = ZwTranslateFilePath(v21, 4u, v39, &v47);
                if ( EnvironmentVariable )
                  goto LABEL_67;
              }
              v40 = KeGetCurrentThread();
              --v40->KernelApcDisable;
              ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
              if ( a1 )
              {
                for ( i = 0; i <= 0xFFFF; ++i )
                {
                  swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x", i);
                  v42 = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          0LL,
                                          (int *)&v42,
                                          0LL);
                  if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                  {
                    swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
                    v42 = 0;
                    EnvironmentVariable = IoGetEnvironmentVariableEx(
                                            Dst,
                                            (__int64)&EfiBootVariablesGuid,
                                            0LL,
                                            (int *)&v42,
                                            0LL);
                  }
                  if ( EnvironmentVariable == -1073741568 )
                    break;
                  if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                  {
                    v15 = (char *)v52;
                    goto LABEL_80;
                  }
                }
                v15 = (char *)v52;
                if ( i <= 0xFFFF )
                  goto LABEL_88;
                EnvironmentVariable = -1073741670;
              }
              else
              {
                v15 = (char *)v52;
                i = *((_DWORD *)v52 + 2);
                swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
                v42 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        Dst,
                                        (__int64)&EfiBootVariablesGuid,
                                        0LL,
                                        (int *)&v42,
                                        0LL);
                if ( EnvironmentVariable == -1073741568
                  && ((2 * ((*((_DWORD *)v15 + 2) | (2 * *((_DWORD *)v15 + 2))) & 0xC4444444)) & *((_DWORD *)v15 + 2)) != 0 )
                {
                  swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x");
                  v42 = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          0LL,
                                          (int *)&v42,
                                          0LL);
                }
                if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
                {
LABEL_88:
                  v19 = P;
                  EnvironmentVariable = IoSetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          (__int64)P,
                                          v51,
                                          1);
                  goto LABEL_81;
                }
              }
LABEL_80:
              v19 = P;
LABEL_81:
              ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
              KeLeaveCriticalRegion();
              goto LABEL_59;
            }
          }
        }
        v19 = P;
        v6 = P;
        goto LABEL_48;
      }
    }
  }
  EnvironmentVariable = -1073741811;
  v19 = P;
LABEL_95:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v6 && v6 != v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v17 && v56 && EnvironmentVariable >= 0 )
    *v56 = i;
  return (unsigned int)EnvironmentVariable;
}
