/*
 * XREFs of EditionMouseMoveShellResilience @ 0x1C0111880
 * Callers:
 *     <none>
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00302CC (IsAdaptiveQueueDetachExempted.c)
 */

void __fastcall EditionMouseMoveShellResilience(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 664);
  if ( v4
    && (*(_DWORD *)(v3 + 1224) & 0x40000) != 0
    && (*(_DWORD *)(v4 + 196) & 0x100000) != 0
    && *(_QWORD *)(v3 + 1376) )
  {
    if ( !*(_DWORD *)(v4 + 328) )
      *(_DWORD *)(v4 + 328) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !IsAdaptiveQueueDetachExempted(v3, v4, a3) )
      KeSetEvent(*(PRKEVENT *)(v3 + 1376), 1, 0);
  }
}
