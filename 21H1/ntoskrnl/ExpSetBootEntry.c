/*
 * XREFs of ExpSetBootEntry @ 0x14094C7D0
 * Callers:
 *     NtAddBootEntry @ 0x14094E660 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x14094F7B0 (NtModifyBootEntry.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     strcmp @ 0x1403CF2F0 (strcmp.c)
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
 *     ExpVerifyWindowsOsOptions @ 0x14094E5F4 (ExpVerifyWindowsOsOptions.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, const void *a2, unsigned __int64 a3)
{
  unsigned int i; // r15d
  __int64 v5; // r12
  void *v6; // r13
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
  void *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r13
  char *v22; // rsi
  int v23; // eax
  PVOID v24; // rax
  PVOID v25; // rsi
  int v26; // eax
  int v27; // eax
  unsigned int v28; // esi
  PVOID v29; // rax
  _WORD *v30; // rbx
  unsigned int v31; // ecx
  int v32; // eax
  char *v33; // rbx
  struct _KTHREAD *v34; // rax
  __int64 v36[3]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-B0h]
  int v39; // [rsp+60h] [rbp-A8h]
  unsigned int Size; // [rsp+64h] [rbp-A4h]
  int v42; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v43; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  unsigned int v45; // [rsp+80h] [rbp-88h]
  char *v46; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h]
  _DWORD *v48; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-58h]
  size_t Dst[3]; // [rsp+B8h] [rbp-50h] BYREF

  v48 = (_DWORD *)a3;
  P = 0LL;
  i = 0;
  v5 = 0LL;
  v6 = 0LL;
  v39 = 0;
  memset(v36, 0, 16);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(_DWORD *)v8;
    v45 = *(_DWORD *)v8;
  }
  else
  {
    v9 = *(_DWORD *)v8;
    v45 = *(_DWORD *)v8;
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
      v9 = v45;
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
  P = PoolWithTag;
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
      v43 = *((_DWORD *)v15 + 5);
      if ( (v43 & 3) == 0 )
      {
        v20 = *((unsigned int *)v15 + 6);
        if ( (unsigned int)v20 > v9 || (v46 = &v15[v20 + 28], (unsigned __int64)v46 >= v16) )
        {
          EnvironmentVariable = -1073741811;
          v19 = (void *)v36[1];
          goto LABEL_94;
        }
        if ( (unsigned int)v20 >= 8 && !strcmp(v15 + 28, "WINDOWS") )
        {
          if ( (unsigned int)v20 <= 0x14 )
          {
            EnvironmentVariable = -1073741811;
LABEL_93:
            v19 = (void *)v36[1];
            v5 = v36[1];
            goto LABEL_94;
          }
          EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 28, (unsigned int)v20);
          if ( EnvironmentVariable < 0 )
            goto LABEL_93;
          v42 = 1;
          v21 = (__int64)&v15[*((unsigned int *)v15 + 11) + 28];
        }
        else
        {
          v42 = 0;
          v21 = 0LL;
        }
        v22 = &v15[Size];
        Src = v22;
        v23 = ExpSafeWcslen(v22, v16);
        if ( v23 == -1 )
        {
          EnvironmentVariable = -1073741811;
          v19 = (void *)v36[1];
          v6 = (void *)v36[1];
          v5 = v36[1];
LABEL_94:
          v17 = a1;
          goto LABEL_95;
        }
        Size = 2 * v23 + 2;
        v37 = (unsigned __int64)&v15[v43];
        EnvironmentVariable = ExpVerifyFilePath(v37);
        if ( EnvironmentVariable >= 0 )
        {
          if ( v46 > v22 || (unsigned __int64)&v22[Size] > v37 )
          {
            EnvironmentVariable = -1073741811;
          }
          else
          {
            if ( *(_DWORD *)(v37 + 8) == 4 )
            {
              v26 = *(_DWORD *)(v37 + 4);
              v38 = v37;
              goto LABEL_52;
            }
            EnvironmentVariable = ZwTranslateFilePath(v37, 4LL);
            if ( EnvironmentVariable == -1073741789 )
            {
              v24 = ExAllocatePoolWithTag(NonPagedPoolNx, HIDWORD(v36[0]), 0x72766E45u);
              v25 = v24;
              v38 = (unsigned __int64)v24;
              if ( !v24 )
              {
                EnvironmentVariable = -1073741670;
                v6 = 0LL;
LABEL_47:
                v19 = (void *)v36[1];
LABEL_48:
                v5 = v37;
                goto LABEL_94;
              }
              memset(v24, 0, HIDWORD(v36[0]));
              LODWORD(v36[0]) = HIDWORD(v36[0]);
              EnvironmentVariable = ZwTranslateFilePath(v37, 4LL);
              if ( EnvironmentVariable < 0 )
              {
                v6 = v25;
                goto LABEL_47;
              }
              v26 = HIDWORD(v36[0]);
LABEL_52:
              v27 = v26 - 12;
              HIDWORD(v36[0]) = v27;
              if ( !v42 || *(_DWORD *)(v21 + 8) == 4 )
              {
                v28 = *((_DWORD *)v15 + 6);
              }
              else
              {
                EnvironmentVariable = ZwTranslateFilePath(v21, 4LL);
                if ( EnvironmentVariable != -1073741789 )
                {
LABEL_67:
                  v19 = (void *)v36[1];
                  goto LABEL_59;
                }
                v28 = v39 + *((_DWORD *)v15 + 6) - *(_DWORD *)(v21 + 4);
                v27 = HIDWORD(v36[0]);
              }
              v43 = Size + 6 + v28 + v27;
              v29 = ExAllocatePoolWithTag(NonPagedPoolNx, v43, 0x72766E45u);
              v19 = v29;
              v36[1] = (__int64)v29;
              if ( !v29 )
              {
                EnvironmentVariable = -1073741670;
LABEL_59:
                v6 = (void *)v38;
                goto LABEL_48;
              }
              v30 = v29;
              memset(v29, 0, v43);
              *(_DWORD *)v30 = 0;
              v31 = *((_DWORD *)v15 + 3);
              v32 = 0;
              if ( (v31 & 1) != 0 )
              {
                *(_DWORD *)v30 = 1;
                v31 = *((_DWORD *)v15 + 3);
                v32 = 1;
              }
              if ( (v31 & 0x10) != 0 )
                *(_DWORD *)v30 = v32 | 8;
              v30[2] = WORD2(v36[0]);
              memmove(v30 + 3, Src, Size);
              v33 = (char *)v30 + Size + 6;
              memmove(v33, (const void *)(v38 + 12), HIDWORD(v36[0]));
              if ( !v42 || *(_DWORD *)(v21 + 8) == 4 )
              {
                memmove(&v33[HIDWORD(v36[0])], v15 + 28, v28);
              }
              else
              {
                memmove(&v33[HIDWORD(v36[0])], v15 + 28, *((unsigned int *)v15 + 11));
                *(_DWORD *)&v33[HIDWORD(v36[0]) + 12] = v28;
                LODWORD(v36[0]) = v39;
                EnvironmentVariable = ZwTranslateFilePath(v21, 4LL);
                if ( EnvironmentVariable )
                  goto LABEL_67;
              }
              v34 = KeGetCurrentThread();
              --v34->KernelApcDisable;
              ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
              if ( a1 )
              {
                for ( i = 0; i <= 0xFFFF; ++i )
                {
                  swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x", i);
                  LODWORD(v36[0]) = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          0LL,
                                          (int *)v36,
                                          0LL);
                  if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                  {
                    swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
                    LODWORD(v36[0]) = 0;
                    EnvironmentVariable = IoGetEnvironmentVariableEx(
                                            Dst,
                                            (__int64)&EfiBootVariablesGuid,
                                            0LL,
                                            (int *)v36,
                                            0LL);
                  }
                  if ( EnvironmentVariable == -1073741568 )
                    break;
                  if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                  {
                    v15 = (char *)P;
                    goto LABEL_80;
                  }
                }
                v15 = (char *)P;
                if ( i <= 0xFFFF )
                  goto LABEL_88;
                EnvironmentVariable = -1073741670;
              }
              else
              {
                v15 = (char *)P;
                i = *((_DWORD *)P + 2);
                swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
                LODWORD(v36[0]) = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        Dst,
                                        (__int64)&EfiBootVariablesGuid,
                                        0LL,
                                        (int *)v36,
                                        0LL);
                if ( EnvironmentVariable == -1073741568
                  && ((2 * ((*((_DWORD *)v15 + 2) | (2 * *((_DWORD *)v15 + 2))) & 0xC4444444)) & *((_DWORD *)v15 + 2)) != 0 )
                {
                  swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x");
                  LODWORD(v36[0]) = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          0LL,
                                          (int *)v36,
                                          0LL);
                }
                if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
                {
LABEL_88:
                  v19 = (void *)v36[1];
                  EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, v36[1], v43, 1);
                  goto LABEL_81;
                }
              }
LABEL_80:
              v19 = (void *)v36[1];
LABEL_81:
              ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
              KeLeaveCriticalRegion();
              goto LABEL_59;
            }
          }
        }
        v19 = (void *)v36[1];
        v6 = (void *)v36[1];
        goto LABEL_48;
      }
    }
  }
  EnvironmentVariable = -1073741811;
  v19 = (void *)v36[1];
LABEL_95:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v6 && v6 != (void *)v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v17 && v48 && EnvironmentVariable >= 0 )
    *v48 = i;
  return (unsigned int)EnvironmentVariable;
}
