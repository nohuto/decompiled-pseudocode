/*
 * XREFs of MiTransformVadSecure @ 0x14096D7C4
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x140584258 (MiCheckLockUnlockByVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTransformVadSecure(__int64 a1, __int64 a2)
{
  return a2 ^ a1 ^ qword_140C50680;
}
