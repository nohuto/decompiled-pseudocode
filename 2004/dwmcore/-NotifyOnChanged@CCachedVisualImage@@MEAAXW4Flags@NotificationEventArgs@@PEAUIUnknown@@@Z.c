/*
 * XREFs of ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D6D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edx

  v4 = 6;
  if ( a2 != 1 )
    v4 = a2;
  return CResource::NotifyOnChanged(a1, v4, a3);
}
