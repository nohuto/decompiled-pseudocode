/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x18006CBC4
 * Callers:
 *     LdrpLoadShimEngine @ 0x18006C924 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x18006D078 (LdrpInitializeGraphRecurse.c)
 *     ZwTerminateProcess @ 0x18009DB80 (ZwTerminateProcess.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CDC48 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800D0AF8 (LdrpInitializationFailure.c)
 */

int LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rax
  char v9; // al
  int v11; // [rsp+30h] [rbp-99h]
  _QWORD v12[24]; // [rsp+40h] [rbp-89h] BYREF
  char v13; // [rsp+130h] [rbp+67h] BYREF
  NTSTATUS ExitStatus; // [rsp+138h] [rbp+6Fh] BYREF

  memset(v12, 0, sizeof(v12));
  v0 = (__int64 *)qword_18016C4D0;
  v12[5] = &ExitStatus;
  LODWORD(v12[4]) = 0x80000;
  while ( v0 != &qword_18016C4D0 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v12;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_18016C4D0;
  v2 = 0LL;
  ExitStatus = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_18016C4D0 )
      goto LABEL_18;
    v3 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v1 + 152);
      v5 = *(__int64 **)(v4 + 40);
      if ( v5 )
        break;
    }
LABEL_10:
    v1 = *(_QWORD *)v1;
  }
  v6 = *(__int64 **)(v4 + 40);
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( (v6[3] & 1) == 0 )
    {
      v7 = v6[1];
      if ( *(_DWORD *)(v7 + 56) == 7 )
      {
        v13 = 0;
        ExitStatus = LdrpInitializeGraphRecurse(v7, &ExitStatus, &v13);
        v2 = (unsigned int)ExitStatus;
        if ( ExitStatus < 0 )
          goto LABEL_18;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v7 + 56) == -4 )
        break;
    }
LABEL_16:
    if ( v6 == v5 )
      goto LABEL_10;
  }
  v2 = 3221225794LL;
  ExitStatus = -1073741502;
LABEL_18:
  v8 = (__int64 *)qword_18016C4D0;
  if ( (__int64 *)qword_18016C4D0 != &qword_18016C4D0 )
  {
    do
    {
      v3 = (__int64)v8;
      if ( (_QWORD *)v8[22] == v12 )
        v8[22] = 0LL;
      v8 = (__int64 *)*v8;
    }
    while ( v8 != &qword_18016C4D0 );
    v2 = (unsigned int)ExitStatus;
  }
  if ( (int)v2 < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v11 = v2;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2581,
        (unsigned int)"LdrpInitializeShimDllDependencies",
        0,
        (__int64)"Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        v3 + 72,
        v11);
      v2 = (unsigned int)ExitStatus;
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    LdrpInitializationFailure(v2);
    LODWORD(v8) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  }
  return (int)v8;
}
