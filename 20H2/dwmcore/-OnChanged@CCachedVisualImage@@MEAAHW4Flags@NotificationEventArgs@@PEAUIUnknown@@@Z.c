/*
 * XREFs of ?OnChanged@CCachedVisualImage@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800CF4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ @ 0x1800CF508 (-MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::OnChanged(CCachedVisualImage *a1)
{
  char v1; // di
  unsigned int v2; // ebx
  bool v3; // zf

  v1 = *((_BYTE *)a1 + 1800);
  v2 = 0;
  v3 = v1 == 0;
  if ( !v1 )
  {
    CCachedVisualImage::MarkAllTargetsDirty(a1);
    v3 = 1;
  }
  LOBYTE(v2) = v3;
  return v2;
}
