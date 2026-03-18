/*
 * XREFs of ?OnChanged@CAtlasedRectsMesh@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DE430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsMesh::OnChanged(__int64 a1)
{
  *(_BYTE *)(a1 + 128) = 1;
  return 1LL;
}
