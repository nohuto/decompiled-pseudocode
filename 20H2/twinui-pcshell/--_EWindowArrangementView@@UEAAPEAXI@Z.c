/*
 * XREFs of ??_EWindowArrangementView@@UEAAPEAXI@Z @ 0x18040CA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18040C6C4 (--1WindowArrangementView@@UEAA@XZ.c)
 */

WindowArrangementView *__fastcall WindowArrangementView::`vector deleting destructor'(
        WindowArrangementView *this,
        char a2)
{
  WindowArrangementView::~WindowArrangementView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x280);
  return this;
}
