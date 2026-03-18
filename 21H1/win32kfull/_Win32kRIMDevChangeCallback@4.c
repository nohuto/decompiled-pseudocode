/*
 * XREFs of _Win32kRIMDevChangeCallback@4 @ 0x1403EC
 * Callers:
 *     <none>
 * Callees:
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     _RIMDevChangeDoUsermodeCallback@4 @ 0x14024B (_RIMDevChangeDoUsermodeCallback@4.c)
 *     _IsPublicPointerDevice@4 @ 0x1591DE (_IsPublicPointerDevice@4.c)
 *     _UpdatePointerDeviceCount@4 @ 0x1595ED (_UpdatePointerDeviceCount@4.c)
 *     ?InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z @ 0x183775 (-InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x1837CF (-InkProcessorOnInkDeviceClosed@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x183859 (-InkProcessorOnInkDeviceOpened@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x18389B (-InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE439 (-OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 */

void __stdcall Win32kRIMDevChangeCallback(int *a1)
{
  int v1; // esi
  int updated; // ebx
  int v3; // eax
  InteractiveControlManager *v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // eax
  InteractiveControlManager *v11; // eax
  struct RawInputManagerDeviceObject *v12; // [esp+0h] [ebp-18h]
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]
  int v15; // [esp+14h] [ebp-4h]

  v1 = a1[4];
  updated = 0;
  v13 = *(_DWORD *)(v1 + 340);
  v14 = gcPointerDevices;
  RIMDevChangeDoUsermodeCallback(a1);
  if ( (*(_DWORD *)(v1 + 160) & 0x4000) == 0 )
  {
    switch ( *a1 )
    {
      case 1:
        v8 = (_DWORD *)HMCreateHandleForObject(v1 + 56, 19);
        if ( v8 )
        {
          if ( a1[1] == 2 && *(char *)(v1 + 176) < 0 )
          {
            v9 = HMCreateHandleForObject(v13, 22);
            v15 = v9;
            if ( v9 )
            {
              HMLockObject(v9);
              *(_DWORD *)(v15 + 696) = *v8;
            }
            else
            {
              HMMarkObjectDestroy(v8);
              HMRemoveHandleForObject(v8);
              v8 = 0;
            }
          }
          if ( v8 )
            RawInputManagerDeviceObjectReference(v1);
        }
        v10 = *(_DWORD *)(v1 + 176);
        if ( (v10 & 0x100) != 0 )
        {
          v11 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v11, (struct RawInputManagerDeviceObject *)v1);
        }
        else if ( (v10 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached(v12);
        }
        break;
      case 2:
        if ( IsPublicPointerDevice(v1 + 56) )
          updated = UpdatePointerDeviceCount(1);
        PostDeviceNotification(0, v1 + 56, v7, (struct DEVICEINFO *)1, updated);
        if ( (*(_DWORD *)(v1 + 176) & 0x200) != 0 )
          InkProcessorOnInkDeviceOpened(v12);
        break;
      case 3:
        if ( (*(_DWORD *)(v1 + 160) & 0x2000) != 0 )
        {
          UpdatePointerDeviceCount(2);
          PostDeviceNotification(0, v1 + 56, v5, (struct DEVICEINFO *)2, v14 + 1);
        }
        else
        {
          if ( IsPublicPointerDevice(v1 + 56) )
          {
            updated = v14 + 1;
            UpdatePointerDeviceCount(2);
          }
          PostDeviceNotification(0, v1 + 56, v6, (struct DEVICEINFO *)2, updated);
        }
        if ( (*(_DWORD *)(v1 + 176) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed(v12);
        break;
      case 4:
        if ( a1[1] == 2 && *(char *)(v1 + 176) < 0 )
        {
          HMUnlockObject(v13);
          if ( *(_DWORD *)(v13 + 4) )
            goto LABEL_14;
          if ( !HMMarkObjectDestroy(v13) )
            goto LABEL_14;
          HMRemoveHandleForObject(v13);
          if ( !HMMarkObjectDestroy(v1 + 56) )
            goto LABEL_14;
        }
        else if ( !HMMarkObjectDestroy(v1 + 56) )
        {
          goto LABEL_14;
        }
        HMRemoveHandleForObject(v1 + 56);
LABEL_14:
        v3 = *(_DWORD *)(v1 + 176);
        if ( (v3 & 0x100) != 0 )
        {
          v4 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceRemoval(v4, (struct RawInputManagerDeviceObject *)v1);
        }
        else if ( (v3 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceRemoved(v12);
        }
        return;
      default:
        return;
    }
  }
}
