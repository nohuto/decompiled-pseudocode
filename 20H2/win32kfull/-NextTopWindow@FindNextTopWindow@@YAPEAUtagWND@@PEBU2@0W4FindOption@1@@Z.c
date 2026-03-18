/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C000F768
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C000F6CC (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0234C88 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C000F8BC (_anonymous_namespace_--NTW_GetNextTop.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C000F910 (_anonymous_namespace_--GNT_NextTopScan.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x1C000F984 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     SkipWindowOnMonitor @ 0x1C000F9B4 (SkipWindowOnMonitor.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x1C0240C44 (_anonymous_namespace_--NTW_GetPrevTop.c)
 */

__int64 __fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdi
  char v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  char *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 DesktopWindow; // rax
  __int64 v14; // rdx
  bool v15; // zf
  __int64 NextTop; // rax
  __int64 TopScan; // [rsp+60h] [rbp+8h]
  char v19; // [rsp+78h] [rbp+20h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  v6 = 0LL;
  v7 = 0;
  TopScan = anonymous_namespace_::GNT_NextTopScan(gptiCurrent, 0LL, 0LL);
  if ( !a1 )
  {
    NextTop = anonymous_namespace_::NTW_GetNextTop(gptiCurrent, 0LL);
    v8 = anonymous_namespace_::CheckTopLevelOnly(NextTop);
    v9 = v8;
    v15 = v8 == 0;
    goto LABEL_12;
  }
  v8 = anonymous_namespace_::CheckTopLevelOnly(a1);
  v9 = v8;
  if ( v8 )
  {
    a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
    while ( 1 )
    {
      v11 = v9;
      v12 = (a3 & 1) != 0
          ? anonymous_namespace_::NTW_GetPrevTop(gptiCurrent, v9)
          : anonymous_namespace_::NTW_GetNextTop(gptiCurrent, v9);
      v9 = v12;
      if ( v12 == v8 )
        break;
      if ( v12 == TopScan )
      {
        if ( v7 )
          break;
        v7 = 1;
      }
      if ( !v12 )
        break;
      GetDesktopWindow(v8);
      DesktopWindow = GetDesktopWindow(v9);
      if ( v14 != DesktopWindow )
        break;
      v15 = v11 == v9;
LABEL_12:
      if ( v15 )
        break;
      if ( v9 != a2 )
      {
        v10 = *(char **)(v9 + 40);
        if ( (v10[31] & 0x18) == 0x10
          && ((unsigned __int8)~((unsigned __int8)v10[31] >> 5) & (unsigned __int8)~((unsigned __int8)v10[27] >> 3) & 1) != 0
          && ((a3 & 2) == 0 || v10[24] >= 0)
          && !(unsigned int)GetWindowCloakState(v9)
          && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v9)) )
        {
          v6 = v9;
          break;
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  return v6;
}
