/*
 * XREFs of ?GetAppClipRect@DWMCursor@@UEAAJPEAUtagRECT@@@Z @ 0x18001EB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::GetAppClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[7];
  return result;
}
