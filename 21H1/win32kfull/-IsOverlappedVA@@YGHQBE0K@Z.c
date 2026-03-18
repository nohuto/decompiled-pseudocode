/*
 * XREFs of ?IsOverlappedVA@@YGHQBE0K@Z @ 0x1894AF
 * Callers:
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge IsOverlappedVA@<eax>(
        unsigned int a1@<edx>,
        unsigned int a2@<ecx>,
        const unsigned __int8 *a3,
        const unsigned __int8 *const a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // edi

  v5 = a2;
  v6 = a2;
  if ( a2 <= a1 )
    v6 = a1;
  if ( &a3[a2] >= &a3[a1] )
    v5 = a1;
  return v6 < (unsigned int)&a3[v5];
}
