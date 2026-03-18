/*
 * XREFs of ?PlatformFree@NSInstrumentation@@YGXPAX@Z @ 0x92098
 * Callers:
 *     _PlaySoundPostMessage@12 @ 0x27A3F0 (_PlaySoundPostMessage@12.c)
 * Callees:
 *     <none>
 */

void __stdcall NSInstrumentation::PlatformFree(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
