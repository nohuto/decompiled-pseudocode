/*
 * XREFs of MmCheckImageMapping @ 0x1406D9288
 * Callers:
 *     PspLocateInPEManifest @ 0x140673010 (PspLocateInPEManifest.c)
 *     MiInitializeWowPeb @ 0x1406D8E14 (MiInitializeWowPeb.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 */

__int64 __fastcall MmCheckImageMapping(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  bool *v3; // r8

  v1 = *(_QWORD *)(a1 + 1304);
  if ( !v1 )
    return 3221225477LL;
  v2 = MiSectionControlArea(v1);
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
    return 3221225477LL;
  *v3 = *(_QWORD *)(v2 + 144) != 0LL;
  return 0LL;
}
