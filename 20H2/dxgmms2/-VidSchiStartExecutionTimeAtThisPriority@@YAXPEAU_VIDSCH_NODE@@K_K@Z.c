/*
 * XREFs of ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00139F4
 * Callers:
 *     VidSchiSetPriorityContext @ 0x1C0010184 (VidSchiSetPriorityContext.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C001304C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0013430 (VidSchiProcessDpcSystemRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiStartExecutionTimeAtThisPriority(struct _VIDSCH_NODE *a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v3 = gulPriorityToYieldPriorityBand[a2];
  if ( v3 )
  {
    v4 = (_QWORD *)((char *)a1 + 8 * v3 + 1928);
    do
    {
      if ( *(v4 - 4) )
        *v4 = a3;
      --v4;
      --v3;
    }
    while ( v3 );
  }
}
