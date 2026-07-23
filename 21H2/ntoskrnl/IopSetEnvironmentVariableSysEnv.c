/*
 * XREFs of IopSetEnvironmentVariableSysEnv @ 0x14089AF20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     IopVerifierExAllocatePool_5 @ 0x14050AF78 (IopVerifierExAllocatePool_5.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089AA88 (IopIssueSystemEnvironmentRequest.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEnvironmentVariableSysEnv(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        _WORD *a3,
        __int128 *a4,
        void *Src,
        unsigned int Size,
        int a7)
{
  __int64 v7; // rax
  unsigned int v11; // ebp
  _DWORD *Pool_5; // rax
  _DWORD *InputBuffer; // rdi
  unsigned int v14; // ebx
  __int128 v15; // xmm0

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v11 = 2 * v7 + 2;
  Pool_5 = IopVerifierExAllocatePool_5(a1, v11 + Size + 32);
  InputBuffer = Pool_5;
  if ( Pool_5 )
  {
    v15 = *a4;
    *Pool_5 = 0;
    *((_OWORD *)Pool_5 + 1) = v15;
    Pool_5[3] = a7;
    memmove(Pool_5 + 8, a3, v11);
    memmove((char *)InputBuffer + v11 + 32, Src, Size);
    InputBuffer[1] = v11 + 32;
    InputBuffer[2] = Size;
    v14 = IopIssueSystemEnvironmentRequest(0x520008u, 1u, 0LL, a2, InputBuffer, v11 + Size + 32, 0LL, 0, 0LL);
    ExFreePoolWithTag(InputBuffer, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v14;
}
