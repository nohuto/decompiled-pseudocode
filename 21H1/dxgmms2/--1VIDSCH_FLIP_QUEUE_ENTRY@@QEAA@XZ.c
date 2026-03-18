/*
 * XREFs of ??1VIDSCH_FLIP_QUEUE_ENTRY@@QEAA@XZ @ 0x1C0029EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDSCH_FLIP_QUEUE_ENTRY::~VIDSCH_FLIP_QUEUE_ENTRY(VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 147);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
