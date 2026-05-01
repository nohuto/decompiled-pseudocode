/*
 * XREFs of ?GetAppRectOld@CAppLayoutOperationItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180461D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CAppLayoutOperationItem::GetAppRectOld(const RECT *a1, int a2, struct tagRECT *a3)
{
  BOOL result; // eax
  const RECT *v7; // rdx

  result = SetRectEmpty(a3);
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v7 = a1 + 8;
  }
  else
  {
    v7 = a1 + 7;
  }
  return CopyRect(a3, v7);
}
