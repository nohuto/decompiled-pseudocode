/*
 * XREFs of NtProcessStartup_AfterSecurityCookieInitialized @ 0x140001030
 * Callers:
 *     NtProcessStartup @ 0x140001010 (NtProcessStartup.c)
 * Callees:
 *     main @ 0x140001380 (main.c)
 */

NTSTATUS __fastcall NtProcessStartup_AfterSecurityCookieInitialized(__int64 a1)
{
  _RTL_USER_PROCESS_PARAMETERS *v2; // rcx
  PRTL_USER_PROCESS_PARAMETERS v3; // rax
  int v4; // ecx
  PRTL_USER_PROCESS_PARAMETERS v5; // r13
  __int64 v6; // r14
  char **p_envp; // r12
  char *Buffer; // rdi
  int Length; // ebp
  unsigned int v10; // esi
  const UNICODE_STRING *p_CommandLine; // rdx
  NTSTATUS v12; // edi
  char *v13; // rbx
  _WORD *Environment; // rcx
  int v15; // edx
  __int64 v17; // rax
  __int64 v18; // rbx
  SIZE_T v19; // r14
  char **Heap; // rax
  char **v21; // r15
  char *v22; // rbx
  char *v23; // rsi
  int v24; // r13d
  char *v25; // r14
  _QWORD *v26; // rdx
  _WORD *v27; // rax
  char **argv; // [rsp+20h] [rbp-68h]
  PRTL_USER_PROCESS_PARAMETERS v31; // [rsp+28h] [rbp-60h]
  _STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  NTSTATUS v33; // [rsp+90h] [rbp+8h]
  int argc; // [rsp+98h] [rbp+10h]
  unsigned int DebugFlags; // [rsp+A0h] [rbp+18h]
  char *envp; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_RTL_USER_PROCESS_PARAMETERS **)(a1 + 32);
  envp = 0LL;
  DestinationString = 0LL;
  v3 = RtlNormalizeProcessParams(v2);
  v4 = 1;
  DebugFlags = 0;
  v5 = v3;
  v31 = v3;
  argc = 0;
  argv = &envp;
  v6 = 0LL;
  v33 = 0;
  p_envp = &envp;
  Buffer = 0LL;
  Length = 0;
  v10 = 1;
  if ( v3 )
  {
    p_CommandLine = &v3->CommandLine;
    DebugFlags = v3->DebugFlags;
    if ( v3->CommandLine.Buffer && p_CommandLine->Length
      || (p_CommandLine = &v3->ImagePathName, v3->ImagePathName.Buffer) )
    {
      v33 = RtlUnicodeStringToAnsiString(&DestinationString, p_CommandLine, 1u);
      v12 = v33;
      if ( v33 < 0 )
        goto LABEL_51;
      Length = DestinationString.Length;
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Length )
      {
        do
        {
          if ( !*Buffer || !Length )
            break;
          do
          {
            if ( !*Buffer )
              break;
            if ( !isspace(*Buffer) )
              break;
            ++Buffer;
            --Length;
          }
          while ( Length );
          if ( !Length )
            break;
          if ( *Buffer )
          {
            ++v10;
            v13 = Buffer;
            do
            {
              ++Buffer;
              --Length;
            }
            while ( Length && !isspace(*Buffer) );
            v6 += Buffer - v13 + 1;
          }
        }
        while ( Length );
      }
    }
    Environment = v5->Environment;
    v15 = 0;
    if ( Environment && *Environment )
    {
      do
      {
        ++Environment;
        ++v15;
        while ( *Environment++ )
          ;
      }
      while ( *Environment );
    }
    v4 = v15 + 1;
  }
  v17 = v10 + v4;
  if ( (unsigned int)v17 <= 2 )
    goto LABEL_50;
  if ( v10 > 1 )
  {
    Buffer = DestinationString.Buffer;
    Length = DestinationString.Length;
  }
  v18 = v17;
  v19 = 8 * v17 + v6;
  Heap = (char **)RtlAllocateHeap(*(PVOID *)(a1 + 48), 0, v19);
  v21 = Heap;
  if ( Heap )
  {
    argv = Heap;
    if ( v10 > 1 )
    {
      v22 = (char *)&Heap[v18];
      v23 = (char *)Heap + v19;
      if ( Length )
      {
        v24 = 0;
        do
        {
          if ( !*Buffer || v22 >= v23 )
            break;
          do
          {
            if ( !*Buffer )
              break;
            if ( !isspace(*Buffer) )
              break;
            ++Buffer;
            --Length;
          }
          while ( Length );
          if ( !Length )
            break;
          if ( *Buffer )
          {
            *v21++ = v22;
            ++v24;
            do
            {
              v25 = v22;
              *v22++ = *Buffer++;
              if ( !--Length )
                break;
              if ( v22 >= v23 )
                goto LABEL_62;
            }
            while ( !isspace(*Buffer) );
            if ( v22 < v23 )
            {
              *v22++ = 0;
              continue;
            }
LABEL_62:
            v22 = v25;
            *v25 = 0;
          }
        }
        while ( Length );
        argc = v24;
        v5 = v31;
      }
    }
    p_envp = v21 + 1;
    *v21 = 0LL;
    v26 = v21 + 1;
    v27 = v5->Environment;
    if ( v27 && *v27 )
    {
      do
      {
        *v26++ = v27++;
        while ( *v27++ )
          ;
      }
      while ( *v27 );
    }
    *v26 = 0LL;
LABEL_50:
    v12 = v33;
    goto LABEL_51;
  }
  v12 = -1073741801;
LABEL_51:
  RtlFreeAnsiString(&DestinationString);
  if ( DebugFlags )
    __debugbreak();
  if ( v12 >= 0 )
    v12 = main(argc, (const char **)argv, (const char **)p_envp);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v12);
}
