/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x140330960
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 */

__int64 __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  return MiWriteComplete(*a4, *a4 + 16LL, 0LL);
}
