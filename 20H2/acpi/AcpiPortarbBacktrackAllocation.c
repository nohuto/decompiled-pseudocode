/*
 * XREFs of AcpiPortarbBacktrackAllocation @ 0x1C00B1D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange_0 @ 0x1C0031AED (RtlDeleteRange_0.c)
 *     AcpiArblibGetNextAlias @ 0x1C00ACF80 (AcpiArblibGetNextAlias.c)
 */

NTSTATUS __fastcall AcpiPortarbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  __int64 v2; // rdi
  int v5; // ebp
  char NextAlias; // al
  void *v7; // r9
  struct _RTL_RANGE_LIST *v8; // rcx
  ULONGLONG Start; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  Start = *a2;
  v5 = *(_DWORD *)(a2[5] + 36);
  while ( 1 )
  {
    NextAlias = AcpiArblibGetNextAlias(v5, v2, &Start);
    v8 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
    if ( !NextAlias )
      break;
    v2 = Start;
    RtlDeleteRange(v8, Start, *(_QWORD *)(a2[5] + 16) + Start - 1, v7);
  }
  return RtlDeleteRange_0(v8, *a2, a2[1], v7);
}
