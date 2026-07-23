/*
 * XREFs of NtTerminateEnclave @ 0x1408D4C30
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiTerminateEnclave @ 0x1408D3CB8 (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  __int64 v5; // rax
  char *v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v5 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v8);
  v6 = (char *)v5;
  if ( !v5 )
    return v8;
  if ( (*(_DWORD *)(v5 + 48) & 0x3100000) == 0x2100000
    && (PVOID)((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12) == BaseAddress )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v5, Flags);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v6);
  return v7;
}
