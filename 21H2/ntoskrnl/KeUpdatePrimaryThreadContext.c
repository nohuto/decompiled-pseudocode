/*
 * XREFs of KeUpdatePrimaryThreadContext @ 0x1408BEADC
 * Callers:
 *     PspGetSetContextInternal @ 0x1406498B0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x140275538 (RtlpCopyLegacyContext.c)
 */

__int64 __fastcall KeUpdatePrimaryThreadContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a2 + 48) & 0x100010) == 0x100010 )
  {
    v2 = **(_QWORD **)(a1 + 496);
    LOBYTE(a1) = 1;
    RtlpCopyLegacyContext(a1, v2 + 16, 1048592);
    if ( (*(_DWORD *)(v2 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(v2 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(v2 + 1264), 4u);
  }
  return 0LL;
}
