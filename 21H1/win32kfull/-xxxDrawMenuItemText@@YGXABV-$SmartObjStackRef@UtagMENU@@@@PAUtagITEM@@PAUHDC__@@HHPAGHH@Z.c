/*
 * XREFs of ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277
 * Callers:
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     _xxxClientExtTextOutW@32 @ 0xBC862 (_xxxClientExtTextOutW@32.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     _GetPrefixCount@16 @ 0x1B837E (_GetPrefixCount@16.c)
 */

WCHAR *__fastcall xxxDrawMenuItemText(int a1, int a2, HDC a3, ERECTL *a4, struct XDCOBJ *a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  WCHAR *result; // eax
  WCHAR *v11; // esi
  struct tagRECT *v12; // edx
  int v13; // ecx
  int v14; // ebx
  int v15; // ecx
  PKTHREAD v16; // eax
  int v17; // eax
  _DWORD v18[3]; // [esp+10h] [ebp-238h] BYREF
  int PrefixCount; // [esp+1Ch] [ebp-22Ch]
  int v20; // [esp+20h] [ebp-228h]
  int v21; // [esp+24h] [ebp-224h]
  int v22; // [esp+28h] [ebp-220h]
  int v23; // [esp+2Ch] [ebp-21Ch]
  int v24; // [esp+30h] [ebp-218h]
  int ThreadWin32Thread; // [esp+34h] [ebp-214h]
  int v26; // [esp+38h] [ebp-210h]
  HDC v27; // [esp+3Ch] [ebp-20Ch]
  _BYTE v28[516]; // [esp+40h] [ebp-208h] BYREF

  v27 = a3;
  v26 = a2;
  v23 = a1;
  v24 = a6;
  v20 = a7;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  memset(v18, 0, sizeof(v18));
  v22 = *(_DWORD *)(a2 + 72);
  v21 = *(_DWORD *)(a2 + 76);
  if ( a7 < 255 )
  {
    v11 = (WCHAR *)v28;
  }
  else
  {
    result = (WCHAR *)Win32AllocPool(2 * a7 + 2, 1953657685);
    v11 = result;
    if ( !result )
      return result;
    PushW32ThreadLock((int)result, v18, (int)Win32FreePool);
  }
  PrefixCount = GetPrefixCount(v11, a7);
  LOBYTE(v14) = 0;
  if ( CALL_LPK(ThreadWin32Thread) )
  {
    xxxClientExtTextOutW(v27, (int)a4, (int)a5, 0, 0, v11, (int)v12, v13);
    v15 = *(_DWORD *)(v23 + 8);
    if ( !v15 )
      v15 = **(_DWORD **)v23;
    if ( MNGetpItemIndex(v15, v26) == -1 || v22 != *(_DWORD *)(v26 + 72) || v21 != *(_DWORD *)(v26 + 76) )
      goto LABEL_23;
  }
  else
  {
    GreExtTextOutWInternal(v27, a4, a5, 0, 0, v11, v12, 0, 0, 0);
  }
  if ( a8
    || ((unsigned int)&loc_20000 & _gdwPUDFlags) != 0
    || ((unsigned __int8)_gpdwCPUserPreferencesMask & 0x20) != 0
    || (int)_gpdwCPUserPreferencesMask >= 0 )
  {
    goto LABEL_27;
  }
  v16 = KeGetCurrentThread();
  v17 = W32GetThreadWin32Thread(v16);
  if ( *(_DWORD *)(v17 + 340) <= 0x400u )
    v14 = *(_DWORD *)(v17 + 352);
  if ( (v14 & 2) != 0 )
  {
LABEL_27:
    if ( CALL_LPK(ThreadWin32Thread) )
      xxxPSMTextOut(v27, (int)a4, a5, v24, v20, (int)&loc_1FFFFC + 4);
    else
      xxxDrawItemUnderline(v23, v26, v27, (int)a4, (int)a5, v11, (unsigned __int16)PrefixCount);
  }
LABEL_23:
  result = (WCHAR *)v28;
  if ( v11 != (WCHAR *)v28 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((int)v18);
  return result;
}
