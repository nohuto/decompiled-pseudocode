/*
 * XREFs of ?SetStateGroup@CD3DBatchExecutionContext@@EEAAXPEBVCGroupDrawListEntry@@@Z @ 0x1800DCE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD3DBatchExecutionContext::SetStateGroup(
        CD3DBatchExecutionContext *this,
        const struct CGroupDrawListEntry *a2)
{
  *((_QWORD *)this + 7) = a2;
}
