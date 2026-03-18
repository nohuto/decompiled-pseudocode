/*
 * XREFs of ?PlatformFree@NSInstrumentation@@YAXPEAX@Z @ 0x1C01050A0
 * Callers:
 *     PlaySoundPostMessage @ 0x1C037C4FC (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFree(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
