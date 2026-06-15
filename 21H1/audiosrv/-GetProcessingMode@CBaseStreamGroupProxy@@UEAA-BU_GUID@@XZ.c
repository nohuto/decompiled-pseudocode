/*
 * XREFs of ?GetProcessingMode@CBaseStreamGroupProxy@@UEAA?BU_GUID@@XZ @ 0x18004D8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBaseStreamGroupProxy::GetProcessingMode(
        CBaseStreamGroupProxy *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = *(struct _GUID *)((char *)this + 24);
  return result;
}
