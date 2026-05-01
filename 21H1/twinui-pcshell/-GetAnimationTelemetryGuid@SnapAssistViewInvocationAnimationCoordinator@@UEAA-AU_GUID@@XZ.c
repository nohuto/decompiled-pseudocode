/*
 * XREFs of ?GetAnimationTelemetryGuid@SnapAssistViewInvocationAnimationCoordinator@@UEAA?AU_GUID@@XZ @ 0x18008B2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall SnapAssistViewInvocationAnimationCoordinator::GetAnimationTelemetryGuid(
        SnapAssistViewInvocationAnimationCoordinator *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1804CFC20;
  return result;
}
