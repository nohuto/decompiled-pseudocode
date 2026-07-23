/*
 * XREFs of _RtlpComputePath@16 @ 0x4B2B2EA8
 * Callers:
 *     _RtlpComputeSearchPath@8 @ 0x4B2ABB20 (_RtlpComputeSearchPath@8.c)
 *     _RtlpComputeExePath@8 @ 0x4B2AC050 (_RtlpComputeExePath@8.c)
 *     _RtlpComputeDllPath@8 @ 0x4B2B2DF2 (_RtlpComputeDllPath@8.c)
 *     _RtlpComputeDllPathWithOptions@8 @ 0x4B2B3600 (_RtlpComputeDllPathWithOptions@8.c)
 * Callees:
 *     _RtlpGetDirPath@8 @ 0x4B2B340C (_RtlpGetDirPath@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     RtlpAddForwarderPath @ 0x4B33CF6E (RtlpAddForwarderPath.c)
 */

_DWORD *__fastcall RtlpComputePath(int a1, unsigned int a2, wchar_t *a3, char a4)
{
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  unsigned __int16 Length; // ax
  int DirPath; // eax
  int *v10; // eax
  NTSTATUS EnvironmentVariable; // esi
  PVOID Heap; // eax
  int v13; // eax
  _DWORD *result; // eax
  char *v15; // eax
  _DWORD *v16; // esi
  _WORD *v17; // edi
  int v18; // ebx
  int *v19; // edx
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  wchar_t *v23; // ebx
  unsigned int v24; // eax
  int v25; // esi
  void **v26; // ebx
  int v27; // ecx
  int v28; // eax
  SIZE_T v29; // [esp-10h] [ebp-80h]
  SIZE_T v30; // [esp-4h] [ebp-74h]
  SIZE_T v31; // [esp-4h] [ebp-74h]
  size_t v32; // [esp-4h] [ebp-74h]
  ULONG_PTR *v33; // [esp+4h] [ebp-6Ch]
  void *v34; // [esp+1Ch] [ebp-54h]
  void *Src; // [esp+20h] [ebp-50h]
  PVOID BaseAddress; // [esp+24h] [ebp-4Ch]
  NTSTATUS v37; // [esp+28h] [ebp-48h]
  wchar_t *Str; // [esp+34h] [ebp-3Ch]
  _DWORD *v40; // [esp+38h] [ebp-38h]
  SIZE_T ValueLength; // [esp+40h] [ebp-30h] BYREF
  int *v43; // [esp+48h] [ebp-28h]
  int v44; // [esp+4Ch] [ebp-24h]
  bool v45; // [esp+53h] [ebp-1Dh]
  _DWORD v46[6]; // [esp+54h] [ebp-1Ch] BYREF

  v4 = 0;
  v34 = 0;
  Src = 0;
  BaseAddress = 0;
  ValueLength = 0LL;
  v45 = 0;
  v5 = 80;
  v40 = 0;
  v37 = 0;
  v43 = 0;
  qmemcpy(v46, &unk_4B3A92E8, sizeof(v46));
  v6 = 0;
  v7 = (v46[1] >> 28) & 3;
  v44 = v7;
  if ( a2 )
  {
    while ( 1 )
    {
      switch ( *(_DWORD *)(a1 + 4 * v6) )
      {
        case 0:
          Length = LdrpDllDirectory.Length;
          goto LABEL_28;
        case 1:
          goto LABEL_9;
        case 2:
          v5 += RtlpSystemDirs.Length;
          if ( (_BYTE)v7 != 1 )
            goto LABEL_31;
          v10 = (int *)&RtlpSystemDirs;
          goto LABEL_13;
        case 3:
          RtlEnterCriticalSection(&FastPebLock);
          LODWORD(v30) = &ValueLength;
          EnvironmentVariable = RtlQueryEnvironmentVariable(0, L"PATH", 4uLL, 0, v30, v33);
          v37 = EnvironmentVariable;
          if ( EnvironmentVariable != -1073741789 )
            goto LABEL_17;
          LODWORD(v30) = 2 * ValueLength;
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v30);
          BaseAddress = Heap;
          if ( !Heap )
          {
            RtlLeaveCriticalSection(&FastPebLock);
            return 0;
          }
          LODWORD(v31) = &ValueLength;
          HIDWORD(v29) = Heap;
          LODWORD(v29) = 4;
          EnvironmentVariable = RtlQueryEnvironmentVariable(0, L"PATH", v29, (PWSTR)ValueLength, v31, v33);
          v37 = EnvironmentVariable;
LABEL_17:
          RtlLeaveCriticalSection(&FastPebLock);
          if ( EnvironmentVariable == -1073741568 )
          {
            LODWORD(ValueLength) = 0;
            v37 = 0;
LABEL_10:
            v4 = HIDWORD(ValueLength);
            LOBYTE(v7) = v44;
          }
          else
          {
            if ( EnvironmentVariable < 0 )
              goto LABEL_66;
            v4 = HIDWORD(ValueLength);
            LOBYTE(v7) = v44;
            v5 += 2 * ValueLength + 2;
          }
LABEL_31:
          if ( ++v6 >= a2 )
            goto LABEL_32;
          break;
        case 4:
          v5 += 4;
          goto LABEL_31;
        case 5:
          if ( a3 )
          {
            DirPath = RtlpGetDirPath(a3);
            v4 = HIDWORD(ValueLength);
            LOBYTE(v7) = v44;
            Src = (void *)DirPath;
          }
          if ( v4 )
          {
            v5 += v4 + 2;
            goto LABEL_31;
          }
LABEL_9:
          v34 = (void *)RtlpGetDirPath(0);
          v5 += 2;
          goto LABEL_10;
        case 6:
          v13 = (unsigned __int16)word_4B3A33E0;
          goto LABEL_30;
        case 7:
          v5 += (unsigned __int16)RtlpSystem32Dirs;
          if ( a4 )
          {
            v45 = (LdrpPolicyBits & 0x100) != 0;
            v5 += (unsigned __int16)RtlpSystem32Dirs + 22;
            if ( (LdrpPolicyBits & 0x100) != 0 )
              v5 += (unsigned __int16)RtlpSystem32Dirs + 30;
          }
          LOBYTE(v7) = v44;
          if ( (_BYTE)v44 != 1 )
            goto LABEL_31;
          v10 = &RtlpSystem32Dirs;
LABEL_13:
          v43 = v10;
          goto LABEL_31;
        case 8:
          Length = LdrpAppPackagesPath.Length;
LABEL_28:
          if ( !Length )
            goto LABEL_31;
          v13 = Length + 2;
LABEL_30:
          v5 += v13;
          goto LABEL_31;
        default:
LABEL_35:
          __fastfail(0x25u);
      }
    }
  }
LABEL_32:
  if ( (unsigned int)(v5 - 80) <= 0xFFFE )
  {
    LODWORD(v30) = v5;
    v15 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
    v16 = v15;
    v40 = v15;
    if ( v15 )
    {
      v17 = v15 + 80;
      *((_DWORD *)v15 + 17) = v5;
      *((_DWORD *)v15 + 14) = 0;
      v18 = 0;
      *((_DWORD *)v15 + 15) = 0;
      *((_DWORD *)v15 + 16) = 0;
      *((_DWORD *)v15 + 19) = 0;
      v19 = v43;
      *((_WORD *)v15 + 24) = a2;
      if ( v19 )
      {
        *((_DWORD *)v15 + 6) = v17;
        *(_DWORD *)v15 = v19 == &RtlpSystem32Dirs ? 7 : 2;
        LODWORD(v32) = *(unsigned __int16 *)v19;
        memcpy(v15 + 80, (const void *)v19[1], v32);
        v19 = v43;
        v18 = 1;
        v17 += *(unsigned __int16 *)v43 >> 1;
        if ( a4 )
        {
          LOBYTE(v20) = v45;
          v21 = RtlpAddForwarderPath(v20, v17);
          v19 = v43;
          v17 = (_WORD *)v21;
        }
      }
      v22 = 0;
      v44 = 0;
      if ( a2 )
      {
        v23 = (wchar_t *)&v16[v18];
        Str = v23;
        do
        {
          if ( !v19 || *(_DWORD *)(a1 + 4 * v22) != 2 && *(_DWORD *)(a1 + 4 * v22) != 7 )
          {
            *(_DWORD *)v23 = *(_DWORD *)(a1 + 4 * v22);
            *((_DWORD *)v23 + 6) = v17;
            switch ( *(_DWORD *)(a1 + 4 * v22) )
            {
              case 0:
                if ( !LdrpDllDirectory.Length )
                  goto LABEL_63;
                LODWORD(v32) = LdrpDllDirectory.Length;
                memcpy(v17, LdrpDllDirectory.Buffer, v32);
                v24 = LdrpDllDirectory.Length;
                goto LABEL_50;
              case 1:
                goto LABEL_55;
              case 2:
                LODWORD(v32) = RtlpSystemDirs.Length;
                memcpy(v17, RtlpSystemDirs.Buffer, v32);
                v17 += RtlpSystemDirs.Length >> 1;
                goto LABEL_52;
              case 3:
                if ( !(_DWORD)ValueLength )
                  goto LABEL_63;
                v25 = 2 * ValueLength;
                LODWORD(v32) = 2 * ValueLength;
                memcpy(v17, BaseAddress, v32);
                v17 = (_WORD *)((char *)v17 + v25 + 2);
                v16 = v40;
                goto LABEL_51;
              case 4:
                v16[19] = v17;
                *v17 = 46;
                v17 += 2;
                *(v17 - 1) = 59;
                goto LABEL_63;
              case 5:
                if ( HIDWORD(ValueLength) )
                {
                  LODWORD(v32) = HIDWORD(ValueLength);
                  memcpy(v17, Src, v32);
                  v24 = HIDWORD(ValueLength);
                }
                else
                {
LABEL_55:
                  LODWORD(v32) = 0;
                  memcpy(v17, v34, v32);
                  v24 = 0;
                }
LABEL_50:
                v17 += (v24 >> 1) + 1;
LABEL_51:
                *(v17 - 1) = 59;
                goto LABEL_52;
              case 6:
                v26 = (void **)LdrpUserDllDirectories;
                if ( LdrpUserDllDirectories != (_UNKNOWN *)&LdrpUserDllDirectories )
                {
                  do
                  {
                    LODWORD(v32) = *((unsigned __int16 *)v26 + 4);
                    memcpy(v17, (char *)v26 + 10, v32);
                    v17 += (*((unsigned __int16 *)v26 + 4) >> 1) + 1;
                    *(v17 - 1) = 59;
                    v26 = (void **)*v26;
                  }
                  while ( v26 != (void **)&LdrpUserDllDirectories );
                  v16 = v40;
                  v22 = v44;
                  v19 = v43;
                }
                v23 = Str;
                goto LABEL_63;
              case 7:
                LODWORD(v32) = (unsigned __int16)RtlpSystem32Dirs;
                memcpy(v17, dword_4B3A6604, v32);
                v17 += (unsigned __int16)RtlpSystem32Dirs >> 1;
                if ( a4 )
                {
                  LOBYTE(v27) = v45;
                  v17 = (_WORD *)RtlpAddForwarderPath(v27, v17);
                }
                goto LABEL_52;
              case 8:
                if ( !LdrpAppPackagesPath.Length )
                  goto LABEL_63;
                *(v17 - 1) = 0;
                LODWORD(v32) = LdrpAppPackagesPath.Length;
                memcpy(v17, LdrpAppPackagesPath.Buffer, v32);
                v28 = LdrpAppPackagesPathVersion;
                v16[16] = v17;
                v16[15] = v28;
                v17 += (LdrpAppPackagesPath.Length >> 1) + 1;
LABEL_52:
                v22 = v44;
                v19 = v43;
LABEL_63:
                v23 += 2;
                Str = v23;
                break;
              default:
                goto LABEL_35;
            }
          }
          v44 = ++v22;
        }
        while ( v22 < a2 );
      }
      EnvironmentVariable = v37;
      *(v17 - 1) = 0;
    }
    else
    {
      EnvironmentVariable = -1073741801;
    }
  }
  else
  {
    EnvironmentVariable = -1073741562;
  }
LABEL_66:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  result = v40;
  if ( v40 )
  {
    if ( EnvironmentVariable < 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
      return 0;
    }
  }
  return result;
}
