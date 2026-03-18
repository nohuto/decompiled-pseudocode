/*
 * XREFs of ?OnChanged@CSceneMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800FB740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSceneMesh::OnChanged(__int64 a1)
{
  *(_BYTE *)(a1 + 168) = 1;
  return 1LL;
}
