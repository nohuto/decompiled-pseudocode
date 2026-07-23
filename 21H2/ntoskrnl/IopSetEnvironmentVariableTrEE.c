/*
 * XREFs of IopSetEnvironmentVariableTrEE @ 0x14089B030
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     IopIssueTrEERequest @ 0x14050AE80 (IopIssueTrEERequest.c)
 *     IopVerifierExAllocatePool_5 @ 0x14050AF78 (IopVerifierExAllocatePool_5.c)
 *     IopEfiStatusToNTSTATUS @ 0x14089A02C (IopEfiStatusToNTSTATUS.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _OWORD *a4,
        void *Src,
        unsigned int Size,
        int a7)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  char *Pool_5; // rax
  __int64 v14; // rdi
  int v15; // ebx
  int v16; // ecx
  int v18; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-30h] BYREF

  v18 = 0;
  v19 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = 2 * v11 + 2;
  Pool_5 = (char *)IopVerifierExAllocatePool_5(0LL, v12 + Size + 36);
  v14 = (__int64)Pool_5;
  if ( Pool_5 )
  {
    v16 = a7 | 6;
    *(_OWORD *)(Pool_5 + 4) = *a4;
    *(_DWORD *)Pool_5 = 36;
    if ( (a7 & 1) == 0 )
      v16 = a7;
    *((_DWORD *)Pool_5 + 5) = v16;
    memmove(Pool_5 + 36, a3, v12);
    *(_DWORD *)(v14 + 32) = v12 + 36;
    *(_QWORD *)(v14 + 24) = Size;
    memmove((void *)(v14 + v12 + 36), Src, Size);
    v15 = IopIssueTrEERequest(2, a1, a2, v14, v12 + Size + 36, (__int64)&v19, 8u, 8u, &v18);
    if ( v15 >= 0 && v19 )
      v15 = IopEfiStatusToNTSTATUS(v19);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
