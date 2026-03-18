/*
 * XREFs of ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C003C8CC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C003C8F8 (CalcForegroundInsertAfter.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfterComponentUIAware(struct tagWND *a1)
{
  struct tagWND *result; // rax

  result = (struct tagWND *)CalcForegroundInsertAfter(a1);
  if ( !*((_QWORD *)a1 + 15) )
    return CoreWindowProp::GetCompositeAppFrameWindowOrSelf(result);
  return result;
}
