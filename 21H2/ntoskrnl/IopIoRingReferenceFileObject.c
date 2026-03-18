/*
 * XREFs of IopIoRingReferenceFileObject @ 0x140938A3C
 * Callers:
 *     IopIoRingDispatchCancel @ 0x1409380B4 (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchRead @ 0x140938198 (IopIoRingDispatchRead.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 */

NTSTATUS __fastcall IopIoRingReferenceFileObject(__int64 a1, __int64 a2, ACCESS_MASK a3, KPROCESSOR_MODE a4, PVOID *a5)
{
  void *v6; // rcx

  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a1 + 192) )
      return -1073740591;
    v6 = *(void **)(*(_QWORD *)(a1 + 200) + 8LL * *(unsigned int *)(a2 + 8));
  }
  else
  {
    v6 = *(void **)(a2 + 8);
  }
  return IopReferenceFileObject(v6, a3, a4, a5, 0LL);
}
