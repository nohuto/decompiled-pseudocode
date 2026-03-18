/*
 * XREFs of _DirtyVisRgnTrackers@4 @ 0xF4CDE
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _DecomposeWindowIfNeeded@4 @ 0x1B7B8 (_DecomposeWindowIfNeeded@4.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 *     _CreateVisRgnTracker@8 @ 0xF4C7C (_CreateVisRgnTracker@8.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z @ 0xF457E (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QAEXXZ @ 0xF48D6 (-MarkDirty@CVisRgnTrackerProp@@QAEXXZ.c)
 *     ?MarkDirtyWorker@@YGXPAUtagWND@@@Z @ 0xF4906 (-MarkDirtyWorker@@YGXPAUtagWND@@@Z.c)
 */

void __thiscall DirtyVisRgnTrackers(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edi
  char v3; // bl
  CVisRgnTrackerProp *v4; // [esp+Ch] [ebp-4h] BYREF

  v1 = this;
  if ( this )
  {
    if ( IsThreadDesktopComposed(_gptiCurrent) )
    {
      if ( (*(_BYTE *)(v1[5] + 144) & 0x10) != 0 )
      {
        v2 = (_DWORD *)v1[14];
        if ( IsVisible(v2) )
        {
          EtwTraceDwmVisRgnDirty(*v1, *v2);
          if ( _IsTopLevelWindow(v1) )
          {
            v3 = 1;
          }
          else
          {
            v3 = 0;
            if ( v1 != (_DWORD *)_GetDesktopWindow(v1) && (*(_BYTE *)(v2[5] + 23) & 2) != 0 )
            {
              v4 = 0;
              if ( CWindowProp::GetProp<CVisRgnTrackerProp>((int)v2, (int *)&v4) )
                CVisRgnTrackerProp::MarkDirty(v4);
            }
          }
          MarkDirtyWorker(v1);
          if ( !v3 )
          {
            while ( 1 )
            {
              v1 = (_DWORD *)v1[12];
              if ( !v1 )
                break;
              if ( (*(_BYTE *)(v1[5] + 23) & 0x14) == 0x14 )
                MarkDirtyWorker(v1);
            }
          }
        }
      }
    }
  }
}
