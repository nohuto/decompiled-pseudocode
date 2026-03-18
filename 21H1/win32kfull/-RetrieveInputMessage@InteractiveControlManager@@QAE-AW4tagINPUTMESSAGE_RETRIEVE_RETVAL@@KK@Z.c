/*
 * XREFs of ?RetrieveInputMessage@InteractiveControlManager@@QAE?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1AE5F9
 * Callers:
 *     ?xxxRetrieveInteractiveControlInputMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x19F9AF (-xxxRetrieveInteractiveControlInputMessage@@YG-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 * Callees:
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QAEHKPAPAVInteractiveControlInput@@@Z @ 0x1B1EFB (-GetInputReport@InteractiveControlDevice@@QAEHKPAPAVInteractiveControlInput@@@Z.c)
 */

int __thiscall InteractiveControlManager::RetrieveInputMessage(
        InteractiveControlManager *this,
        unsigned int a2,
        unsigned __int16 a3)
{
  int v3; // ecx
  struct InteractiveControlInput *v5; // [esp+0h] [ebp-8h] BYREF
  struct InteractiveControlDevice *v6; // [esp+4h] [ebp-4h] BYREF

  v6 = 0;
  v5 = 0;
  if ( InteractiveControlManager::FindDevice(this, a2, 0, &v6, 0) < 0
    || !v6
    || !InteractiveControlDevice::GetInputReport(v6, a3, &v5) )
  {
    return 2;
  }
  v3 = 1;
  *((_DWORD *)v5 + 3) = 1;
  return v3;
}
