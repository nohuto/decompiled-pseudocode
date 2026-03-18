/*
 * XREFs of NtTerminateEnclave @ 0x1408D14D0
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiTerminateEnclave @ 0x1408D0558 (MiTerminateEnclave.c)
 */

__int64 __fastcall NtTerminateEnclave(unsigned __int64 a1, unsigned int a2)
{
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (a2 & 0xFFFFFFFA) != 0 )
    return 3221225712LL;
  v5 = MiObtainReferencedVadEx(a1, 0, (int *)&v8);
  v6 = v5;
  if ( !v5 )
    return v8;
  if ( (v5[12] & 0x3100000) == 0x2100000
    && (*((unsigned int *)v5 + 6) | ((unsigned __int64)*((unsigned __int8 *)v5 + 32) << 32)) << 12 == a1 )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v5, a2);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad((PVOID)v6);
  return v7;
}
