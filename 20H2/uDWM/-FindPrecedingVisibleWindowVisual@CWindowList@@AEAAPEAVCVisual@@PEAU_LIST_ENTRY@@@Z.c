/*
 * XREFs of ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18003C740
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018A6C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

struct _LIST_ENTRY *__fastcall CWindowList::FindPrecedingVisibleWindowVisual(CWindowList *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v6; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2->Flink != a2 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, (__int64)a2[7].Blink);
    while ( v3 != WindowListForDesktop )
    {
      Flink = v3[24].Flink;
      if ( Flink && Flink[1].Blink )
      {
        v6 = v3[25].Flink;
        if ( !v6 )
          return v3[24].Flink;
        v2 = v3[25].Flink;
        if ( !v6[1].Blink )
          return v3[24].Flink;
        return v2;
      }
      v3 = v3->Blink;
    }
  }
  return v2;
}
