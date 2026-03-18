/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C00DFA64
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C0001D70 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C00DFAB8 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, bool a2)
{
  int *v2; // rdi
  int *i; // rbx

  v2 = (int *)((char *)this + 464);
  for ( i = (int *)*((_QWORD *)this + 58); i != v2 && i; i = *(int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[112], a2);
}
