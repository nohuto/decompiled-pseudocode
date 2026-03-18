/*
 * XREFs of ??$reset@PEAK@?$unique_ptr@$$BY0A@KU?$default_delete@$$BY0A@K@wistd@@@wistd@@QEAAXPEAK@Z @ 0x1C006AEAC
 * Callers:
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158260 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned long [0],wistd::default_delete<unsigned long [0]>>::reset<unsigned long *>(
        void **a1,
        void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
