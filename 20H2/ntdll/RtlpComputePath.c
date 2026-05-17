/*
 * XREFs of RtlpComputePath @ 0x18006C7D0
 * Callers:
 *     RtlpComputeExePath @ 0x18006C460 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18006C4F0 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006C5A0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006C6D0 (RtlpComputeDllPath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpGetDirPath @ 0x18006CE74 (RtlpGetDirPath.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpAddForwarderPath @ 0x1800DF0EC (RtlpAddForwarderPath.c)
 */

__int64 __fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  unsigned __int64 v4; // rdi
  size_t v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // r12d
  __int128 *v9; // r15
  unsigned int v10; // r13d
  _DWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  void *DirPath; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *Heap; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  _WORD *v21; // rdi
  unsigned int v22; // r14d
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned int v26; // r15d
  size_t v27; // r13
  unsigned __int64 v28; // r12
  __int128 *v29; // rax
  _DWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v33; // rcx
  void **v34; // rbx
  size_t v35; // rax
  bool v36; // [rsp+30h] [rbp-48h]
  int v37; // [rsp+34h] [rbp-44h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int128 *v40; // [rsp+48h] [rbp-30h]
  size_t v41; // [rsp+50h] [rbp-28h]
  void *v42; // [rsp+58h] [rbp-20h]
  void *Src; // [rsp+60h] [rbp-18h]
  void *v44; // [rsp+68h] [rbp-10h]
  _DWORD *v45; // [rsp+C0h] [rbp+48h]
  wchar_t *v47; // [rsp+D0h] [rbp+58h]
  char v48; // [rsp+D8h] [rbp+60h]

  v48 = a4;
  v47 = a3;
  v45 = a1;
  v4 = ((unsigned __int64)xmmword_180181390 >> 60) & 3;
  v44 = 0LL;
  v41 = 0LL;
  v5 = 0LL;
  Src = 0LL;
  v6 = 128LL;
  Size = 0LL;
  v7 = 0LL;
  v42 = 0LL;
  v8 = 0;
  v38 = 0LL;
  v9 = 0LL;
  v36 = 0;
  v10 = 0;
  v37 = 0;
  v40 = 0LL;
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
          v6 += (unsigned __int16)RtlpSystemDirs;
          if ( (_BYTE)v4 == 1 )
            v40 = &RtlpSystemDirs;
          break;
        case 3:
          RtlEnterCriticalSection((__int64)&FastPebLock);
          v37 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &v38);
          v8 = v37;
          if ( v37 == -1073741789 )
          {
            Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * v38);
            v42 = Heap;
            if ( !Heap )
            {
              RtlLeaveCriticalSection((__int64)&FastPebLock, v18, v19);
              return v7;
            }
            v20 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, Heap, v38, &v38);
            v5 = Size;
            v8 = v20;
            v37 = v20;
          }
          RtlLeaveCriticalSection((__int64)&FastPebLock, v15, v16);
          if ( v8 == -1073741568 )
          {
            v38 = 0LL;
            v8 = 0;
            v37 = 0;
          }
          else
          {
            if ( v8 < 0 )
              goto LABEL_70;
            v6 += 2 * v38 + 2;
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
          v44 = (void *)RtlpGetDirPath(0LL);
          v6 += v41 + 2;
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
            v36 = (LdrpPolicyBits & 0x100) != 0;
            if ( (LdrpPolicyBits & 0x100) != 0 )
            {
              v36 = (LdrpPolicyBits & 0x100) != 0;
              v6 += (unsigned __int16)RtlpSystem32Dirs + 30LL;
            }
          }
          if ( (_BYTE)v4 == 1 )
            v40 = &RtlpSystem32Dirs;
          break;
        default:
          v12 = (unsigned __int16)LdrpAppPackagesPath;
LABEL_34:
          if ( !(_WORD)v12 )
            break;
          v13 = v12 + 2;
          goto LABEL_36;
      }
      ++v10;
      ++v11;
      if ( v10 >= a2 )
      {
        v9 = v40;
        goto LABEL_41;
      }
      a3 = v47;
      a4 = v48;
    }
    v12 = (unsigned __int16)LdrpDllDirectory;
    goto LABEL_34;
  }
LABEL_41:
  if ( (unsigned __int64)(v6 - 128) <= 0xFFFE )
  {
    v7 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( !v7 )
    {
      v8 = -1073741801;
      goto LABEL_70;
    }
    v21 = (_WORD *)(v7 + 128);
    *(_WORD *)(v7 + 72) = a2;
    v22 = 0;
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_QWORD *)(v7 + 104) = 0LL;
    *(_DWORD *)(v7 + 112) = v6;
    *(_QWORD *)(v7 + 120) = 0LL;
    if ( v9 )
    {
      *(_QWORD *)(v7 + 24) = v21;
      v23 = 7;
      if ( &RtlpSystem32Dirs != v9 )
        v23 = 2;
      *(_DWORD *)v7 = v23;
      memmove((void *)(v7 + 128), *((const void **)v9 + 1), *(unsigned __int16 *)v9);
      v22 = 1;
      v21 += (unsigned __int64)*(unsigned __int16 *)v9 >> 1;
      if ( v48 )
      {
        LOBYTE(v24) = v36;
        v21 = (_WORD *)RtlpAddForwarderPath(v24, v21);
      }
    }
    v25 = a2;
    v26 = 0;
    if ( !a2 )
    {
LABEL_69:
      *(v21 - 1) = 0;
      goto LABEL_70;
    }
    v27 = Size;
    v28 = v38;
    v29 = v40;
    v30 = v45;
    while ( 1 )
    {
      if ( v29 && (*v30 == 2 || *v30 == 7) )
        goto LABEL_67;
      *(_DWORD *)(v7 + 4LL * v22) = *v30;
      *(_QWORD *)(v7 + 8LL * v22 + 24) = v21;
      if ( !*v30 )
        break;
      switch ( *v30 )
      {
        case 1:
          goto LABEL_89;
        case 2:
          memmove(v21, *((const void **)&RtlpSystemDirs + 1), (unsigned __int16)RtlpSystemDirs);
          v21 += (unsigned __int64)(unsigned __int16)RtlpSystemDirs >> 1;
          goto LABEL_65;
        case 3:
          if ( !v28 )
            goto LABEL_66;
          memmove(v21, v42, 2 * v28);
          v21 += v28 + 1;
          v25 = a2;
LABEL_84:
          *(v21 - 1) = 59;
LABEL_65:
          v30 = v45;
          goto LABEL_66;
        case 4:
          *(_QWORD *)(v7 + 120) = v21;
          *v21 = 46;
          v21 += 2;
          *(v21 - 1) = 59;
          goto LABEL_66;
        case 5:
          if ( v27 )
          {
            memmove(v21, Src, v27);
            v35 = v27;
          }
          else
          {
LABEL_89:
            memmove(v21, v44, v41);
            v35 = v41;
          }
          goto LABEL_83;
        case 6:
          v34 = (void **)LdrpUserDllDirectories;
          if ( LdrpUserDllDirectories == (_UNKNOWN *)&LdrpUserDllDirectories )
          {
            v25 = a2;
            goto LABEL_66;
          }
          do
          {
            memmove(v21, (char *)v34 + 18, *((unsigned __int16 *)v34 + 8));
            v21 += ((unsigned __int64)*((unsigned __int16 *)v34 + 8) >> 1) + 1;
            *(v21 - 1) = 59;
            v34 = (void **)*v34;
          }
          while ( v34 != (void **)&LdrpUserDllDirectories );
          v27 = Size;
          v28 = v38;
          v25 = a2;
          goto LABEL_65;
        case 7:
          memmove(v21, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
          v21 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
          if ( v48 )
          {
            LOBYTE(v33) = v36;
            v21 = (_WORD *)RtlpAddForwarderPath(v33, v21);
          }
          goto LABEL_65;
      }
      if ( (_WORD)LdrpAppPackagesPath )
      {
        *(v21 - 1) = 0;
        memmove(v21, *((const void **)&LdrpAppPackagesPath + 1), (unsigned __int16)LdrpAppPackagesPath);
        v31 = LdrpAppPackagesPathVersion;
        *(_QWORD *)(v7 + 104) = v21;
        *(_QWORD *)(v7 + 96) = v31;
        v21 += ((unsigned __int64)(unsigned __int16)LdrpAppPackagesPath >> 1) + 1;
        goto LABEL_65;
      }
LABEL_66:
      v29 = v40;
      ++v22;
LABEL_67:
      ++v30;
      ++v26;
      v45 = v30;
      if ( v26 >= v25 )
      {
        v8 = v37;
        goto LABEL_69;
      }
    }
    if ( !(_WORD)LdrpDllDirectory )
      goto LABEL_66;
    memmove(v21, *((const void **)&LdrpDllDirectory + 1), (unsigned __int16)LdrpDllDirectory);
    v35 = (unsigned __int16)LdrpDllDirectory;
LABEL_83:
    v21 += (v35 >> 1) + 1;
    goto LABEL_84;
  }
  v8 = -1073741562;
LABEL_70:
  if ( v42 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v42);
  if ( v7 && v8 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    return 0LL;
  }
  return v7;
}
