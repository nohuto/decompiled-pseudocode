/*
 * XREFs of MiDereferenceVad @ 0x14022F4BC
 * Callers:
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055A300 (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDereferenceVad(__int64 a1)
{
  signed __int32 v1; // eax

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v1 == -1 )
    __fastfail(0xEu);
  return !v1 && (*(_DWORD *)(a1 + 48) & 4) != 0;
}
