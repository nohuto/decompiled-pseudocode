/*
 * XREFs of ?IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ @ 0x180476620
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18020D828 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SingleViewLightDismissHelper::IsRegisteredWithLightDismiss(SingleViewLightDismissHelper *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_DWORD *)this + 2) != 0;
  return result;
}
