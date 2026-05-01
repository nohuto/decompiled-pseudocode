/*
 * XREFs of sub_180071D0C @ 0x180071D0C
 * Callers:
 *     sub_1800705E0 @ 0x1800705E0 (sub_1800705E0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_180071D0C(__int64 a1)
{
  BOOLEAN result; // al
  void *v3; // r8
  void *v4; // r8

  if ( *(_QWORD *)a1 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
