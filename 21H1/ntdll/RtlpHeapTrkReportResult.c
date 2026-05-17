/*
 * XREFs of RtlpHeapTrkReportResult @ 0x4B364CBD
 * Callers:
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x4B364580 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x4B3646AA (RtlpHeapTrkDumpStacks.c)
 *     _RtlpHeapTrkLeakCallback@24 @ 0x4B364B50 (_RtlpHeapTrkLeakCallback@24.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x4B364D91 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

char __fastcall RtlpHeapTrkReportResult(size_t Size, unsigned __int16 a2, int a3, int a4, void *Src, size_t Sizea)
{
  int v6; // edi
  int v8; // esi
  unsigned int v11; // [esp+14h] [ebp-114h] BYREF
  _DWORD v12[4]; // [esp+18h] [ebp-110h] BYREF
  _BYTE v13[256]; // [esp+28h] [ebp-100h] BYREF

  v6 = dword_4B3A3958;
  if ( (RtlULongPtrAdd(dword_4B3A3958, Size, (int *)&v11) & 0xC0000000) == 0xC0000000 )
    return 0;
  v8 = TrkContext;
  if ( !TrkContext )
    return 0;
  if ( v11 > *(_DWORD *)TrkContext )
  {
    if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
    {
      v6 = 64;
      *(_DWORD *)(TrkContext + 36) = 0;
      v8 = TrkContext;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v12[1] = a2;
  v12[2] = a3;
  v12[0] = Size;
  v12[3] = a4;
  if ( Sizea <= 0x100 )
    memcpy(v13, Src, Sizea);
  memcpy((void *)(v8 + v6), v12, Size);
  dword_4B3A3958 = Size + v6;
  ++*(_DWORD *)(TrkContext + 36);
  return 1;
}
