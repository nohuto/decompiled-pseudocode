/*
 * XREFs of _RtlUserThreadStart@8 @ 0x4B2F4F40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __userpurge RtlUserThreadStart@<eax>(int a1@<eax>, int a2@<ebx>, int a3, int a4)
{
  if ( !LdrDelegatedRtlUserThreadStart )
    _RtlUserThreadStart(a1, a2);
  return LdrDelegatedRtlUserThreadStart(a3, a4);
}
