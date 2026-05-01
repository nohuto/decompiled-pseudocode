/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003ECB8
 * Callers:
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180041198 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004492C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, _WORD *a2, unsigned __int16 *a3, unsigned int *a4)
{
  _WORD *v5; // rdi
  NTSTATUS v6; // r14d
  unsigned int v7; // esi
  unsigned __int16 *v8; // rbp
  unsigned __int64 v10; // rdx
  HANDLE v11; // r15
  signed int LastError; // eax
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int16 v16; // r9
  int v17; // r8d
  _WORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int16 v22; // ax
  ULONG ProcessInformationLength; // [rsp+70h] [rbp+18h] BYREF

  ProcessInformationLength = 512;
  v5 = a2;
  v6 = -1073741820;
  v7 = 0;
  v8 = 0LL;
  if ( !a3 )
    return 2147500035LL;
  *a2 = 0;
  v11 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v11 )
    goto LABEL_16;
  LastError = GetLastError();
  v13 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v13 = LastError;
  if ( v13 >= 0 )
  {
LABEL_16:
    v14 = 0;
    do
    {
      if ( v14 >= 2 || ProcessInformationLength > 0x10000 )
        break;
      operator delete(v8, (const struct std::nothrow_t *)v10);
      v8 = (unsigned __int16 *)operator new[](
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&std::nothrow);
      v6 = v8
         ? NtQueryInformationProcess(
             v11,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v8,
             ProcessInformationLength,
             &ProcessInformationLength)
         : -1073741801;
      ++v14;
    }
    while ( v6 == -1073741820 );
    v13 = 0;
    if ( v6 < 0 )
      v13 = v6 | 0x10000000;
    if ( v13 >= 0 )
    {
      v15 = *v8 >> 1;
      v16 = 32;
      v8[v15 + 8] = 0;
      v17 = 1;
      if ( v8[8] == 34 )
        v16 = 34;
      if ( (unsigned int)v15 <= 1 )
        goto LABEL_44;
      v18 = v8 + 9;
      while ( 1 )
      {
        v10 = (unsigned int)(v17 + 1);
        if ( *v18 == v16 )
          break;
        ++v18;
        ++v17;
        if ( (unsigned int)v10 >= (unsigned int)v15 )
          goto LABEL_44;
      }
      v7 = v15 - v17;
      v10 = (unsigned __int64)&v8[v10 + 8];
      if ( !v10 || !v7 )
        goto LABEL_44;
      do
      {
        if ( *(_WORD *)v10 != 32 )
          break;
        v10 += 2LL;
        --v7;
      }
      while ( v7 );
      v19 = *(unsigned int *)a3;
      v13 = 0;
      v20 = v19 - 1;
      if ( v7 < (int)v19 - 1 )
        v20 = v7;
      v7 = v20;
      if ( (unsigned __int64)(v19 - 1) > 0x7FFFFFFE )
        v13 = -2147024809;
      if ( v13 < 0 )
      {
        if ( !*(_DWORD *)a3 )
        {
LABEL_44:
          *(_DWORD *)a3 = v7;
          goto LABEL_45;
        }
      }
      else if ( v20 <= 0x7FFFFFFEuLL )
      {
        v13 = 0;
        if ( !*(_DWORD *)a3 )
          goto LABEL_41;
        v21 = v20 - v19;
        v10 -= (unsigned __int64)v5;
        do
        {
          if ( !(v21 + v19) )
            break;
          v22 = *(_WORD *)((char *)v5 + v10);
          if ( !v22 )
            break;
          *v5++ = v22;
          --v19;
        }
        while ( v19 );
        if ( !v19 )
        {
LABEL_41:
          --v5;
          v13 = -2147024774;
        }
      }
      else
      {
        v13 = -2147024809;
      }
      *v5 = 0;
      goto LABEL_44;
    }
  }
LABEL_45:
  operator delete(v8, (const struct std::nothrow_t *)v10);
  if ( v11 )
    CloseHandle(v11);
  return (unsigned int)v13;
}
