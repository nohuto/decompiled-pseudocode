/*
 * XREFs of ?GetTechnologyID@CSpatialAudioTech@@UEBA?AU_GUID@@XZ @ 0x18004E180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CSpatialAudioTech::GetTechnologyID(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[1];
  return result;
}
