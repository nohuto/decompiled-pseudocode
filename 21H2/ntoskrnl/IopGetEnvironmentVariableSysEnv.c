/*
 * XREFs of IopGetEnvironmentVariableSysEnv @ 0x14089A770
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     IopVerifierExAllocatePool_5 @ 0x14050AF78 (IopVerifierExAllocatePool_5.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089AA88 (IopIssueSystemEnvironmentRequest.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetEnvironmentVariableSysEnv(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int128 *a4,
        void *a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  ULONG InputBufferLength; // ebp
  char *Pool_5; // rax
  _DWORD *InputBuffer; // rsi
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  ULONG v16; // ebx
  __int64 v17; // rcx
  _DWORD *Context; // rdi
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF

  LODWORD(v23) = 0;
  v9 = -1LL;
  do
    ++v9;
  while ( a3[v9] );
  v10 = 2 * v9 + 2;
  InputBufferLength = 2 * v9 + 22;
  Pool_5 = (char *)IopVerifierExAllocatePool_5(a1, InputBufferLength);
  InputBuffer = Pool_5;
  if ( Pool_5 )
  {
    memmove(Pool_5 + 20, a3, v10);
    v15 = *a4;
    InputBuffer[4] = v10;
    *(_OWORD *)InputBuffer = v15;
    v16 = *a6 + 8;
    Context = IopVerifierExAllocatePool_5(v17, v16);
    if ( !Context )
    {
      v14 = -1073741670;
LABEL_17:
      ExFreePoolWithTag(InputBuffer, 0);
      return v14;
    }
    v19 = IopIssueSystemEnvironmentRequest(0x520004u, InputBuffer, InputBufferLength, Context, v16, (__int64)&v23);
    v14 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741789 )
      {
LABEL_16:
        ExFreePoolWithTag(Context, 0);
        goto LABEL_17;
      }
      v21 = v23 - 8;
    }
    else
    {
      if ( a7 )
        *a7 = *Context;
      v20 = *a6;
      if ( *a6 >= Context[1] )
        v20 = Context[1];
      memmove(a5, Context + 2, v20);
      v21 = Context[1];
    }
    *a6 = v21;
    goto LABEL_16;
  }
  return (unsigned int)-1073741670;
}
