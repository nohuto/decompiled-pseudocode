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

char __fastcall RtlpHeapTrkReportResult(int a1, unsigned __int16 a2, int a3, int a4, void *Src, unsigned int Size)
{
  int v6; // edi
  char *v8; // esi
  size_t v10; // [esp-4h] [ebp-12Ch]
  unsigned int v12; // [esp+14h] [ebp-114h] BYREF
  _DWORD v13[4]; // [esp+18h] [ebp-110h] BYREF
  _BYTE v14[256]; // [esp+28h] [ebp-100h] BYREF

  v6 = dword_4B3A3958;
  if ( (RtlULongPtrAdd(dword_4B3A3958, a1, (int *)&v12) & 0xC0000000) == 0xC0000000 )
    return 0;
  v8 = (char *)TrkContext;
  if ( !TrkContext )
    return 0;
  if ( v12 > *(_DWORD *)TrkContext )
  {
    if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
    {
      v6 = 64;
      *((_DWORD *)TrkContext + 9) = 0;
      v8 = (char *)TrkContext;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v13[1] = a2;
  v13[2] = a3;
  v13[0] = a1;
  v13[3] = a4;
  if ( Size <= 0x100 )
  {
    LODWORD(v10) = Size;
    memcpy(v14, Src, v10);
  }
  LODWORD(v10) = a1;
  memcpy(&v8[v6], v13, v10);
  dword_4B3A3958 = a1 + v6;
  ++*((_DWORD *)TrkContext + 9);
  return 1;
}
