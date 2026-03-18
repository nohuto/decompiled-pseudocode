/*
 * XREFs of _EditionDevicePnpNotification@4 @ 0xEAF6A
 * Callers:
 *     <none>
 * Callees:
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z @ 0x183775 (-InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x1837CF (-InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x183859 (-InkProcessorOnInkDeviceOpened@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x18389B (-InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE439 (-OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 */

void __stdcall EditionDevicePnpNotification(int *a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  char v5; // dl
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  InteractiveControlManager *v10; // eax
  int v11; // eax
  InteractiveControlManager *v12; // eax
  struct RawInputManagerDeviceObject *v13; // [esp-4h] [ebp-14h]
  struct RawInputManagerDeviceObject *v14; // [esp-4h] [ebp-14h]
  struct RawInputManagerDeviceObject *v15; // [esp+0h] [ebp-10h]

  v1 = 0;
  v2 = 0;
  v3 = a1[3];
  if ( v3 == 2 )
  {
    v1 = 1;
  }
  else if ( v3 == 3 )
  {
    v1 = 2;
  }
  v4 = *a1;
  v5 = *(_BYTE *)(*a1 + 24);
  if ( v5 == 2 )
  {
    v2 = a1[2];
    v6 = v3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            v9 = *(_DWORD *)(v4 + 120);
            if ( (v9 & 0x100) != 0 )
            {
              v13 = v4 != 0 ? (struct RawInputManagerDeviceObject *)(v4 - 56) : 0;
              v10 = InteractiveControlManager::Instance();
              InteractiveControlManager::OnDeviceRemoval(v10, v13);
            }
            else if ( (v9 & 0x200) != 0 )
            {
              InkProcessorOnInkDeviceRemoved(v15);
            }
          }
        }
        else if ( (*(_DWORD *)(v4 + 120) & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceClosed(v15);
        }
      }
      else if ( (*(_DWORD *)(v4 + 120) & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceOpened(v15);
      }
    }
    else if ( v4 )
    {
      v11 = *(_DWORD *)(v4 + 120);
      if ( (v11 & 0x100) != 0 )
      {
        v14 = (struct RawInputManagerDeviceObject *)(v4 - 56);
        v12 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceAttach(v12, v14);
      }
      else if ( (v11 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached(v15);
      }
    }
  }
  else if ( !v5 && v3 == 4 && *(_DWORD *)(v4 + 708) )
  {
    Win32FreePool(*(_DWORD *)(v4 + 708));
  }
  if ( v1 )
  {
    PostDeviceNotification(0, *a1, v4, (struct DEVICEINFO *)v1, v2);
    if ( (*(_DWORD *)(*a1 + 104) & 0x2000) != 0 )
      ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0, 0, 0, 0, 0, 0);
  }
}
