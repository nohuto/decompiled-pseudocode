/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x1409E37F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D43D4 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemory(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140C1D110 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64))pXdvMmFreeContiguousMemory)(a1);
}
