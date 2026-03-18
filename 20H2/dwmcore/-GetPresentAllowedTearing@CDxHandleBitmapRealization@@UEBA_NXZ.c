/*
 * XREFs of ?GetPresentAllowedTearing@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180260780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetPresentAllowedTearing(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 29) & 0x1000) != 0;
}
