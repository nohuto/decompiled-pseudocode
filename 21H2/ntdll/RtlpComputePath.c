/*
 * XREFs of RtlpComputePath @ 0x18006D800
 * Callers:
 *     RtlpComputeExePath @ 0x18006D490 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18006D520 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006D5D0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006D700 (RtlpComputeDllPath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpGetDirPath @ 0x18006DEA4 (RtlpGetDirPath.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     RtlpAddForwarderPath @ 0x1800DEE5C (RtlpAddForwarderPath.c)
 */

_WORD *__fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  unsigned __int64 v4; // rdi
  size_t v5; // r14
  SIZE_T v6; // rbx
  _WORD *v7; // rsi
  int v8; // r12d
  __int128 *v9; // r15
  unsigned int v10; // r13d
  _DWORD *v11; // r15
  __int64 Length; // rax
  __int64 v13; // rax
  void *DirPath; // rax
  PVOID Heap; // rax
  NTSTATUS v16; // eax
  _WORD *v17; // rdi
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int v22; // r15d
  size_t v23; // r13
  ULONG_PTR v24; // r12
  __int128 *v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v29; // rcx
  void **v30; // rbx
  size_t v31; // rax
  bool v32; // [rsp+30h] [rbp-48h]
  NTSTATUS v33; // [rsp+34h] [rbp-44h]
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int128 *v36; // [rsp+48h] [rbp-30h]
  size_t v37; // [rsp+50h] [rbp-28h]
  PVOID BaseAddress; // [rsp+58h] [rbp-20h]
  void *Src; // [rsp+60h] [rbp-18h]
  void *v40; // [rsp+68h] [rbp-10h]
  _DWORD *v41; // [rsp+C0h] [rbp+48h]
  wchar_t *v43; // [rsp+D0h] [rbp+58h]
  char v44; // [rsp+D8h] [rbp+60h]

  v44 = a4;
  v43 = a3;
  v41 = a1;
  v4 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 60) & 3;
  v40 = 0LL;
  v37 = 0LL;
  v5 = 0LL;
  Src = 0LL;
  v6 = 128LL;
  Size = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  v8 = 0;
  ReturnLength = 0LL;
  v9 = 0LL;
  v32 = 0;
  v10 = 0;
  v33 = 0;
  v36 = 0LL;
  if ( a2 )
  {
    v11 = a1;
    while ( *v11 )
    {
      switch ( *v11 )
      {
        case 1:
          goto LABEL_32;
        case 2:
          v6 += RtlpSystemDirs.Length;
          if ( (_BYTE)v4 == 1 )
            v36 = (__int128 *)&RtlpSystemDirs;
          break;
        case 3:
          RtlEnterCriticalSection(&FastPebLock);
          v33 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
          v8 = v33;
          if ( v33 == -1073741789 )
          {
            Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * ReturnLength);
            BaseAddress = Heap;
            if ( !Heap )
            {
              RtlLeaveCriticalSection(&FastPebLock);
              return v7;
            }
            v16 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, (PWSTR)Heap, ReturnLength, &ReturnLength);
            v5 = Size;
            v8 = v16;
            v33 = v16;
          }
          RtlLeaveCriticalSection(&FastPebLock);
          if ( v8 == -1073741568 )
          {
            ReturnLength = 0LL;
            v8 = 0;
            v33 = 0;
          }
          else
          {
            if ( v8 < 0 )
              goto LABEL_70;
            v6 += 2 * ReturnLength + 2;
          }
          break;
        case 4:
          v6 += 4LL;
          break;
        case 5:
          if ( a3 )
          {
            DirPath = (void *)RtlpGetDirPath(a3);
            v5 = Size;
            Src = DirPath;
          }
          if ( v5 )
          {
            v6 += v5 + 2;
            break;
          }
LABEL_32:
          v40 = (void *)RtlpGetDirPath(0LL);
          v6 += v37 + 2;
          break;
        case 6:
          v13 = (unsigned __int16)word_1801664B8;
LABEL_36:
          v6 += v13;
          break;
        case 7:
          v6 += (unsigned __int16)RtlpSystem32Dirs;
          if ( a4 )
          {
            v6 += (unsigned __int16)RtlpSystem32Dirs + 22LL;
            v32 = (LdrpPolicyBits & 0x100) != 0;
            if ( (LdrpPolicyBits & 0x100) != 0 )
            {
              v32 = (LdrpPolicyBits & 0x100) != 0;
              v6 += (unsigned __int16)RtlpSystem32Dirs + 30LL;
            }
          }
          if ( (_BYTE)v4 == 1 )
            v36 = &RtlpSystem32Dirs;
          break;
        default:
          Length = (unsigned __int16)LdrpAppPackagesPath;
LABEL_34:
          if ( !(_WORD)Length )
            break;
          v13 = Length + 2;
          goto LABEL_36;
      }
      ++v10;
      ++v11;
      if ( v10 >= a2 )
      {
        v9 = v36;
        goto LABEL_41;
      }
      a3 = v43;
      a4 = v44;
    }
    Length = LdrpDllDirectory.Length;
    goto LABEL_34;
  }
LABEL_41:
  if ( v6 - 128 <= 0xFFFE )
  {
    v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( !v7 )
    {
      v8 = -1073741801;
      goto LABEL_70;
    }
    v17 = v7 + 64;
    v7[36] = a2;
    v18 = 0;
    *((_QWORD *)v7 + 11) = 0LL;
    *((_QWORD *)v7 + 12) = 0LL;
    *((_QWORD *)v7 + 13) = 0LL;
    *((_DWORD *)v7 + 28) = v6;
    *((_QWORD *)v7 + 15) = 0LL;
    if ( v9 )
    {
      *((_QWORD *)v7 + 3) = v17;
      v19 = 7;
      if ( &RtlpSystem32Dirs != v9 )
        v19 = 2;
      *(_DWORD *)v7 = v19;
      memmove(v7 + 64, *((const void **)v9 + 1), *(unsigned __int16 *)v9);
      v18 = 1;
      v17 += (unsigned __int64)*(unsigned __int16 *)v9 >> 1;
      if ( v44 )
      {
        LOBYTE(v20) = v32;
        v17 = (_WORD *)RtlpAddForwarderPath(v20, v17);
      }
    }
    v21 = a2;
    v22 = 0;
    if ( !a2 )
    {
LABEL_69:
      *(v17 - 1) = 0;
      goto LABEL_70;
    }
    v23 = Size;
    v24 = ReturnLength;
    v25 = v36;
    v26 = v41;
    while ( 1 )
    {
      if ( v25 && (*v26 == 2 || *v26 == 7) )
        goto LABEL_67;
      *(_DWORD *)&v7[2 * v18] = *v26;
      *(_QWORD *)&v7[4 * v18 + 12] = v17;
      if ( !*v26 )
        break;
      switch ( *v26 )
      {
        case 1:
          goto LABEL_89;
        case 2:
          memmove(v17, RtlpSystemDirs.Buffer, RtlpSystemDirs.Length);
          v17 += (unsigned __int64)RtlpSystemDirs.Length >> 1;
          goto LABEL_65;
        case 3:
          if ( !v24 )
            goto LABEL_66;
          memmove(v17, BaseAddress, 2 * v24);
          v17 += v24 + 1;
          v21 = a2;
LABEL_84:
          *(v17 - 1) = 59;
LABEL_65:
          v26 = v41;
          goto LABEL_66;
        case 4:
          *((_QWORD *)v7 + 15) = v17;
          *v17 = 46;
          v17 += 2;
          *(v17 - 1) = 59;
          goto LABEL_66;
        case 5:
          if ( v23 )
          {
            memmove(v17, Src, v23);
            v31 = v23;
          }
          else
          {
LABEL_89:
            memmove(v17, v40, v37);
            v31 = v37;
          }
          goto LABEL_83;
        case 6:
          v30 = (void **)LdrpUserDllDirectories;
          if ( LdrpUserDllDirectories == (_UNKNOWN *)&LdrpUserDllDirectories )
          {
            v21 = a2;
            goto LABEL_66;
          }
          do
          {
            memmove(v17, (char *)v30 + 18, *((unsigned __int16 *)v30 + 8));
            v17 += ((unsigned __int64)*((unsigned __int16 *)v30 + 8) >> 1) + 1;
            *(v17 - 1) = 59;
            v30 = (void **)*v30;
          }
          while ( v30 != (void **)&LdrpUserDllDirectories );
          v23 = Size;
          v24 = ReturnLength;
          v21 = a2;
          goto LABEL_65;
        case 7:
          memmove(v17, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
          v17 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
          if ( v44 )
          {
            LOBYTE(v29) = v32;
            v17 = (_WORD *)RtlpAddForwarderPath(v29, v17);
          }
          goto LABEL_65;
      }
      if ( (_WORD)LdrpAppPackagesPath )
      {
        *(v17 - 1) = 0;
        memmove(v17, *((const void **)&LdrpAppPackagesPath + 1), (unsigned __int16)LdrpAppPackagesPath);
        v27 = LdrpAppPackagesPathVersion;
        *((_QWORD *)v7 + 13) = v17;
        *((_QWORD *)v7 + 12) = v27;
        v17 += ((unsigned __int64)(unsigned __int16)LdrpAppPackagesPath >> 1) + 1;
        goto LABEL_65;
      }
LABEL_66:
      v25 = v36;
      ++v18;
LABEL_67:
      ++v26;
      ++v22;
      v41 = v26;
      if ( v22 >= v21 )
      {
        v8 = v33;
        goto LABEL_69;
      }
    }
    if ( !LdrpDllDirectory.Length )
      goto LABEL_66;
    memmove(v17, LdrpDllDirectory.Buffer, LdrpDllDirectory.Length);
    v31 = LdrpDllDirectory.Length;
LABEL_83:
    v17 += (v31 >> 1) + 1;
    goto LABEL_84;
  }
  v8 = -1073741562;
LABEL_70:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v7 && v8 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return 0LL;
  }
  return v7;
}
