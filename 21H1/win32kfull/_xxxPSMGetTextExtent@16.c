/*
 * XREFs of _xxxPSMGetTextExtent@16 @ 0x1B98EB
 * Callers:
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GetPrefixCount@16 @ 0x1B837E (_GetPrefixCount@16.c)
 */

int __fastcall xxxPSMGetTextExtent(HDC a1, __int16 *a2, unsigned int a3, struct tagSIZE *a4)
{
  unsigned int v4; // ebx
  PKTHREAD CurrentThread; // eax
  _BYTE *v6; // esi
  struct tagSIZE *v7; // eax
  unsigned int v9; // eax
  WCHAR *v10; // edx
  _DWORD v11[3]; // [esp+Ch] [ebp-224h] BYREF
  int ThreadWin32Thread; // [esp+18h] [ebp-218h]
  HDC v13; // [esp+1Ch] [ebp-214h]
  __int16 *v14; // [esp+20h] [ebp-210h]
  struct tagSIZE *v15; // [esp+24h] [ebp-20Ch]
  _BYTE v16[516]; // [esp+28h] [ebp-208h] BYREF

  v4 = a3;
  v14 = a2;
  v13 = a1;
  v15 = a4;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  memset(v11, 0, sizeof(v11));
  if ( a3 < 0xFF )
  {
    v6 = v16;
  }
  else
  {
    v6 = (_BYTE *)Win32AllocPool(2 * a3 + 2, 1953657685);
    if ( !v6 )
    {
      v7 = v15;
      v15->cy = 0;
      v7->cx = 0;
      return 0;
    }
    PushW32ThreadLock((int)v6, v11, (int)Win32FreePool);
  }
  v9 = (unsigned int)GetPrefixCount(v14, a3, (int)v6, a3) >> 16;
  if ( v9 )
    v4 = a3 - v9;
  if ( CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(v13, v10, v4, v15);
  else
    GreGetTextExtentW(v13, v10, v4, v15, 1);
  if ( v6 != v16 )
    PopAndFreeAlwaysW32ThreadLock((int)v11);
  return 1;
}
