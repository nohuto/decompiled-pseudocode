/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358
 * Callers:
 *     _lambda_32cb82285d9d5665fcc6dd155d313a03_::operator() @ 0xEF8DE (_lambda_32cb82285d9d5665fcc6dd155d313a03_--operator().c)
 *     ?IsTopmostRealApp@@YGHPAUtagWND@@@Z @ 0x196218 (-IsTopmostRealApp@@YGHPAUtagWND@@@Z.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x92470 (_anonymous_namespace_--NTW_GetNextTop.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x924A6 (_anonymous_namespace_--GNT_NextTopScan.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x92504 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     _SkipWindowOnMonitor@4 @ 0x92526 (_SkipWindowOnMonitor@4.c)
 */

_DWORD *__fastcall FindNextTopWindow::NextTopWindow(int a1, int a2, char a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  char *v7; // edx
  int DesktopWindow; // esi
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // ebx
  int NextTop; // eax
  _BYTE v14[8]; // [esp+10h] [ebp-24h] BYREF
  _DWORD *v15; // [esp+18h] [ebp-1Ch]
  _DWORD *TopScan; // [esp+1Ch] [ebp-18h]
  int v17; // [esp+20h] [ebp-14h]
  int v18; // [esp+24h] [ebp-10h]
  _DWORD *v19; // [esp+28h] [ebp-Ch]
  char v20; // [esp+2Fh] [ebp-5h]

  v18 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v4 = 0;
  v20 = 0;
  v17 = _gptiCurrent;
  TopScan = (_DWORD *)anonymous_namespace_::GNT_NextTopScan(0);
  if ( a1 )
  {
    v5 = (_DWORD *)anonymous_namespace_::CheckTopLevelOnly(a1);
    v19 = v5;
    v6 = v5;
    if ( v5 )
    {
      v18 = anonymous_namespace_::CheckTopLevelOnly(v18);
      while ( 1 )
      {
        v15 = v6;
        if ( (a3 & 1) != 0 )
        {
          v11 = 0;
          v12 = v17;
          do
          {
            NextTop = anonymous_namespace_::NTW_GetNextTop(v12, v11);
            if ( (_DWORD *)NextTop == v6 && v11 )
              break;
            v11 = (_DWORD *)NextTop;
          }
          while ( NextTop );
          v6 = v11;
          v4 = 0;
          v5 = v19;
        }
        else
        {
          v6 = (_DWORD *)anonymous_namespace_::NTW_GetNextTop(v17, v6);
        }
        if ( v6 == v5 )
          break;
        if ( v6 == TopScan )
        {
          if ( v20 )
            break;
          v20 = 1;
        }
        if ( !v6 )
          break;
        DesktopWindow = _GetDesktopWindow(v5);
        if ( DesktopWindow != _GetDesktopWindow(v6) || v15 == v6 )
          break;
        v5 = v19;
LABEL_13:
        if ( v6 != (_DWORD *)v18 )
        {
          v7 = (char *)v6[5];
          if ( (v7[23] & 0x18) == 0x10
            && ((unsigned __int8)~((unsigned __int8)v7[23] >> 5) & (unsigned __int8)~((unsigned __int8)v7[19] >> 3) & 1) != 0
            && ((a3 & 2) == 0 || v7[16] >= 0)
            && !GetWindowCloakState(v6)
            && ((a3 & 4) == 0 || !SkipWindowOnMonitor(v6)) )
          {
            v4 = v6;
            break;
          }
        }
      }
    }
  }
  else
  {
    v10 = anonymous_namespace_::GNT_NextTopScan(0);
    v5 = (_DWORD *)anonymous_namespace_::CheckTopLevelOnly(v10);
    v19 = v5;
    v6 = v5;
    if ( v5 )
      goto LABEL_13;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  return v4;
}
