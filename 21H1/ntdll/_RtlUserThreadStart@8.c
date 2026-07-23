/*
 * XREFs of _RtlUserThreadStart@8 @ 0x4B2F4F40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  int v2; // eax
  int v3; // ebx

  if ( !LdrDelegatedRtlUserThreadStart )
    _RtlUserThreadStart(v2, v3);
  LdrDelegatedRtlUserThreadStart(Function, Parameter);
}
