/*
 * XREFs of ?GetRestoreRect@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAUtagRECT@@@Z @ 0x18008AC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::GetRestoreRect(
        struct tagRECT *this,
        struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[2];
  return result;
}
