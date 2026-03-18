/*
 * XREFs of _xxxMNCancel@16 @ 0x197B72
 * Callers:
 *     _xxxEndMenuLoop@8 @ 0x195235 (_xxxEndMenuLoop@8.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA (-xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@.c)
 *     _xxxMNButtonUp@16 @ 0x197A96 (_xxxMNButtonUp@16.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNDismiss@4 @ 0x1984A3 (_xxxMNDismiss@4.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNReleaseCapture@4 @ 0x19A19C (_xxxMNReleaseCapture@4.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 */

_DWORD *__fastcall xxxMNCancel(int *a1, unsigned int a2, int HighLimit, int a4)
{
  int v6; // eax
  int v7; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v10; // edi
  unsigned int v11; // esi
  int v12; // eax
  int v13; // edi
  PKTHREAD v14; // eax
  int v15; // eax
  int v16; // esi
  unsigned int v17; // eax
  bool v18; // zf
  _DWORD v20[3]; // [esp+Ch] [ebp-44h] BYREF
  int v21; // [esp+18h] [ebp-38h] BYREF
  int v22; // [esp+1Ch] [ebp-34h]
  int v23; // [esp+20h] [ebp-30h]
  int v24; // [esp+24h] [ebp-2Ch] BYREF
  int v25; // [esp+28h] [ebp-28h]
  int v26; // [esp+2Ch] [ebp-24h]
  _DWORD v27[2]; // [esp+30h] [ebp-20h] BYREF
  int v28; // [esp+38h] [ebp-18h]
  int v29; // [esp+3Ch] [ebp-14h]
  int v30; // [esp+40h] [ebp-10h]
  int v31; // [esp+44h] [ebp-Ch]
  int v32; // [esp+48h] [ebp-8h]
  int *v33; // [esp+4Ch] [ebp-4h]

  v33 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v27, *a1);
  v28 = **(_DWORD **)v27[0];
  v32 = (**(_DWORD **)v27[0] >> 3) & 1;
  v31 = (**(_DWORD **)v27[0] >> 2) & 1;
  v30 = **(_DWORD **)v27[0] & 1;
  v6 = **(_DWORD **)v27[0] & 0x800;
  a1[1] &= 0xFFFFFFF3;
  v29 = v6;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  **(_DWORD **)v27[0] |= 0x8000u;
  if ( _gptiCurrent == a1[6] && ((unsigned int)&loc_80000 & **(_DWORD **)v27[0]) == 0 )
  {
    **(_DWORD **)v27[0] |= (unsigned int)&loc_80000;
    v7 = *(_DWORD *)(*(_DWORD *)v27[0] + 8);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v24 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v24;
    v25 = v7;
    if ( v7 )
      HMLockObject(v7);
    xxxMNCloseHierarchy(*(_DWORD *)v27[0], a1);
    v10 = v33;
    v11 = -1;
    xxxMNSelectItem(-1);
    v12 = v27[0];
    v10[1] &= ~1u;
    v13 = *(_DWORD *)(*(_DWORD *)v12 + 4);
    v14 = KeGetCurrentThread();
    v15 = W32GetThreadWin32Thread(v14);
    v21 = *(_DWORD *)(v15 + 228);
    *(_DWORD *)(v15 + 228) = &v21;
    v22 = v13;
    if ( v13 )
      HMLockObject(v13);
    xxxMNReleaseCapture(v33);
    if ( v32 )
    {
      xxxWindowEvent(7u, *(struct tagEVENTHOOK **)(*(_DWORD *)v27[0] + 8), 0xFFFFFFFC, 0, 0);
      if ( *(_DWORD *)(*(_DWORD *)v27[0] + 8) )
        xxxDestroyWindow(*(struct tagVWPL ***)(*(_DWORD *)v27[0] + 8));
    }
    if ( v13 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v20, 0);
      v20[2] = -1;
      xxxSendMenuSelect(v20, -1, v33);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v20);
      if ( !v31 )
        v11 = v30 != 0 ? 0xFFFFFFFD : 0;
      xxxWindowEvent(5u, (struct tagEVENTHOOK *)v13, v11, 0, 0);
      v16 = v32;
      if ( !v29 )
      {
        v17 = v32 && !v31;
        xxxSendMessage((void *)v13, v17, 0);
      }
      if ( a2 )
      {
        xxxPlayEventSound(6u);
        v18 = (v28 & 0x100) == 0;
        v33[5] = HighLimit;
        if ( v18 )
        {
          if ( v31 || !v16 || (*(_BYTE *)(*(_DWORD *)(v13 + 20) + 13) & 1) != 0 )
          {
            _PostTransformableMessage(v13, a2, HighLimit, a4, 1);
          }
          else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v13, a2, HighLimit, a4, 0, 0, 0, 1u, 1);
          }
        }
      }
      else
      {
        v33[5] = 0;
      }
    }
    ThreadUnlock1();
    ThreadUnlock1();
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27);
}
