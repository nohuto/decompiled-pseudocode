/*
 * XREFs of ExpSetDriverEntry @ 0x1409FDC88
 * Callers:
 *     NtAddDriverEntry @ 0x1409FF360 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x140A004C0 (NtModifyDriverEntry.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x14041F160 (ZwTranslateFilePath.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x14093E520 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14093E830 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x1409FD474 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1409FF178 (ExpVerifyFilePath.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, const void *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int i; // r14d
  unsigned __int64 v6; // r15
  void *v7; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  SIZE_T v13; // rbx
  unsigned __int64 v14; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  int EnvironmentVariable; // ebx
  __int64 v18; // rax
  char *v19; // rsi
  int v20; // eax
  __int64 v21; // r8
  size_t v22; // r13
  char *v23; // rax
  int v24; // eax
  PVOID v25; // rax
  _WORD *v26; // rbx
  struct _KTHREAD *v27; // rax
  _DWORD *v28; // r12
  int v29; // [rsp+34h] [rbp-A4h] BYREF
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-A0h]
  _DWORD *v31; // [rsp+40h] [rbp-98h]
  size_t Size; // [rsp+48h] [rbp-90h]
  char *v33; // [rsp+50h] [rbp-88h]
  int v35; // [rsp+5Ch] [rbp-7Ch]
  PVOID P; // [rsp+60h] [rbp-78h]
  PVOID v37; // [rsp+68h] [rbp-70h]
  unsigned int v38; // [rsp+70h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  wchar_t Dst[12]; // [rsp+90h] [rbp-48h] BYREF

  v3 = (_DWORD *)a3;
  v31 = (_DWORD *)a3;
  v35 = a1;
  v37 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  P = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v9 = (unsigned __int64)a2 + 4;
  v10 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v9 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)v9;
    v38 = v11;
  }
  else
  {
    v11 = *(_DWORD *)v9;
    v38 = v11;
  }
  if ( v11 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = v11;
    v14 = (unsigned __int64)a2 + v11;
    if ( v14 > 0x7FFFFFFF0000LL || v14 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v10 = a3;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v13 = v11;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x72766E45u);
  v16 = PoolWithTag;
  v37 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v13);
  if ( *v16 == 1 )
  {
    if ( !v35 && v16[2] > 0xFFFFu
      || (v18 = (unsigned int)v16[3], (v18 & 1) != 0)
      || (v16[4] & 3) != 0
      || (v19 = (char *)v16 + v18,
          v20 = ExpSafeWcslen((_DWORD *)((char *)v16 + v18), (unsigned __int64)v16 + v13),
          v20 == -1) )
    {
      EnvironmentVariable = -1073741811;
    }
    else
    {
      LODWORD(Size) = 2 * v20 + 2;
      v6 = (unsigned __int64)v16 + v21;
      EnvironmentVariable = ExpVerifyFilePath((char *)v16 + v21);
      if ( EnvironmentVariable >= 0 )
      {
        v22 = (unsigned int)Size;
        if ( (unsigned __int64)&v19[(unsigned int)Size] > v6 )
        {
          EnvironmentVariable = -1073741811;
LABEL_61:
          v7 = v33;
          goto LABEL_62;
        }
        if ( *(_DWORD *)(v6 + 8) == 4 )
        {
          v24 = *(_DWORD *)(v6 + 4);
          v33 = (char *)v6;
        }
        else
        {
          EnvironmentVariable = ZwTranslateFilePath(v6, 4LL);
          if ( EnvironmentVariable != -1073741789 )
            goto LABEL_61;
          v23 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
          v33 = v23;
          if ( !v23 )
          {
            EnvironmentVariable = -1073741670;
            v7 = 0LL;
            goto LABEL_62;
          }
          memset(v23, 0, (unsigned int)NumberOfBytes);
          v29 = NumberOfBytes;
          EnvironmentVariable = ZwTranslateFilePath(v6, 4LL);
          if ( EnvironmentVariable < 0 )
            goto LABEL_61;
          v24 = NumberOfBytes;
        }
        LODWORD(NumberOfBytes) = v24 - 12;
        LODWORD(Size) = Size + 6 + v24 - 12;
        v25 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72766E45u);
        P = v25;
        if ( !v25 )
        {
          EnvironmentVariable = -1073741670;
          goto LABEL_61;
        }
        v26 = v25;
        memset(v25, 0, (unsigned int)Size);
        v26[2] = NumberOfBytes;
        memmove(v26 + 3, v19, v22);
        memmove((char *)v26 + v22 + 6, v33 + 12, (unsigned int)NumberOfBytes);
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        if ( v35 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x", i);
            v29 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v29, 0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
              v29 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v29, 0LL);
            }
            if ( EnvironmentVariable == -1073741568 )
              break;
            if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
              goto LABEL_59;
          }
          if ( i > 0xFFFF )
          {
            EnvironmentVariable = -1073741670;
LABEL_59:
            ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v16 = v37;
            goto LABEL_61;
          }
        }
        else
        {
          v28 = v37;
          i = *((_DWORD *)v37 + 2);
          swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
          v29 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v29, 0LL);
          if ( EnvironmentVariable == -1073741568 && ((2 * ((v28[2] | (2 * v28[2])) & 0xC4444444)) & v28[2]) != 0 )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x");
            v29 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v29, 0LL);
          }
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
            goto LABEL_59;
        }
        EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, (__int64)P, Size, 1);
        goto LABEL_59;
      }
    }
LABEL_62:
    v3 = v31;
    goto LABEL_63;
  }
  EnvironmentVariable = -1073741811;
LABEL_63:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != (void *)v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v16, 0);
  if ( v35 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
