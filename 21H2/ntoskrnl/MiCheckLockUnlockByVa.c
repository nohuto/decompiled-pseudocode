/*
 * XREFs of MiCheckLockUnlockByVa @ 0x140584258
 * Callers:
 *     MmLockPhysicalPagesByVa @ 0x14096A278 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140281620 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiTransformVadSecure @ 0x14096D7C4 (MiTransformVadSecure.c)
 */

__int64 __fastcall MiCheckLockUnlockByVa(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  ULONG_PTR v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  v3 = 0;
  v8 = 0;
  v4 = MiTransformVadSecure(KeGetCurrentThread()->ApcState.Process, a3);
  v5 = MiObtainReferencedSecureVad(v4, &v8);
  v6 = *(_DWORD *)(v5 + 48) & 0x70;
  if ( ((v6 - 16) & 0xFFFFFFCF) != 0 || v6 == 32 )
    v3 = 1;
  MiUnlockAndDereferenceVad((char *)v5);
  return v3;
}
