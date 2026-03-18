/*
 * XREFs of _UserSetTimer@8 @ 0x1A5A50
 * Callers:
 *     _vEnableSynchronize@4 @ 0xAD9DA (_vEnableSynchronize@4.c)
 *     _GreStartTimers@0 @ 0xD61D6 (_GreStartTimers@0.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _SetGDITimer@16 @ 0x1561E1 (_SetGDITimer@16.c)
 */

int UserSetTimer()
{
  int v0; // ecx
  int v1; // esi
  int v3; // [esp+4h] [ebp-4h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v3);
  v1 = 0;
  if ( _gptmrMaster )
    v1 = SetGDITimer(v0, v0);
  if ( !v3 )
    UserSessionSwitchLeaveCrit();
  return v1;
}
