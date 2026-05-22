/*
 * XREFs of ?GetUniqueId@BamoPenDevicePrincipal@@UEAAAEBU_GUID@@XZ @ 0x18001DCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _GUID *__fastcall BamoPenDevicePrincipal::GetUniqueId(BamoPenDevicePrincipal *this)
{
  return (const struct _GUID *)((char *)this + 48);
}
