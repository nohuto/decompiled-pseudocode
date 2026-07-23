/*
 * XREFs of NtTerminateEnclave @ 0x1408D14D0
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiTerminateEnclave @ 0x1408D0558 (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v5 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v8);
  v6 = v5;
  if ( !v5 )
    return v8;
  if ( (v5[12] & 0x3100000) == 0x2100000
    && (PVOID)((*((unsigned int *)v5 + 6) | ((unsigned __int64)*((unsigned __int8 *)v5 + 32) << 32)) << 12) == BaseAddress )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v5, Flags);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad((PVOID)v6);
  return v7;
}
