/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x14035FBD0
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 */

LONG __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  return MiWriteComplete(*a4, (unsigned int *)(*a4 + 16), 0);
}
