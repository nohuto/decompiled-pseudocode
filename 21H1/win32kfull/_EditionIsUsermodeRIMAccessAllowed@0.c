/*
 * XREFs of _EditionIsUsermodeRIMAccessAllowed@0 @ 0xE917E
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 */

int __stdcall EditionIsUsermodeRIMAccessAllowed()
{
  int CurrentProcess; // eax
  int v1; // esi
  int v3; // [esp+4h] [ebp-4h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v3);
  CurrentProcess = PsGetCurrentProcess();
  v1 = IsProcessDwm(CurrentProcess);
  if ( !v3 )
    UserSessionSwitchLeaveCrit();
  return v1;
}
