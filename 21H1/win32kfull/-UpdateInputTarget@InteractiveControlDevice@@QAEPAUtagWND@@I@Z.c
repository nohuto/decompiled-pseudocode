/*
 * XREFs of ?UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z @ 0x1B2D2A
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z @ 0x1B1E80 (-FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QAEJK@Z @ 0x1ADAB0 (-ClearBackgroundAccessors@InteractiveControlManager@@QAEJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QAEJK@Z @ 0x1ADB4B (-ClearDeviceFocus@InteractiveControlManager@@QAEJK@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@@Z @ 0x1AE851 (-SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@.c)
 */

struct tagWND *__thiscall InteractiveControlDevice::UpdateInputTarget(InteractiveControlDevice *this, unsigned int a2)
{
  int v3; // esi
  unsigned int v4; // ecx
  int v5; // eax
  struct InteractiveControlManager *v6; // eax
  int v7; // edx
  InteractiveControlManager *v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  InteractiveControlManager *v12; // eax
  int v13; // edx
  int v15; // [esp-4h] [ebp-10h]
  unsigned int v16; // [esp-4h] [ebp-10h]
  unsigned int v17; // [esp-4h] [ebp-10h]

  v3 = 0;
  v4 = *((_DWORD *)this + 6);
  if ( v4 && (a2 & *((_DWORD *)this + 7)) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 20);
    if ( *(char *)(v5 + 12) < 0 || *(char *)(v5 + 11) < 0 )
    {
      v16 = v4;
      v8 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearBackgroundAccessors(v8, v9, v16);
    }
    else
    {
      v15 = v4;
      v6 = InteractiveControlManager::Instance();
      InteractiveControlManager::SetDeviceFocus((int)v6, v7, 0, 0, v15);
    }
  }
  v10 = *((_DWORD *)this + 5);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 20);
    if ( *(char *)(v11 + 12) < 0 || *(char *)(v11 + 11) < 0 )
    {
      v17 = *(_DWORD *)(v10 + 20);
      v12 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearDeviceFocus(v12, v13, v17);
    }
    else
    {
      return (struct tagWND *)*((_DWORD *)this + 5);
    }
  }
  return (struct tagWND *)v3;
}
