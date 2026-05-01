/*
 * XREFs of ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801ED8CC
 * Callers:
 *     ?Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1801EBE20 (-Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EE2F4 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1801ED67C (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EE018 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1801EE0A8 (-_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_Dock(RetailDemoExperienceManager *this)
{
  char v2; // dl
  int v3; // r8d
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  LONG v7; // ecx
  int v8; // r10d
  LONG v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  LONG v15; // eax
  int v16; // r10d
  int v17; // r9d
  struct tagRECT v18; // [rsp+20h] [rbp-30h]
  struct tagRECT pvParam; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( !*((_QWORD *)this + 25) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      303LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v2 = *((_BYTE *)this + 382);
  if ( v2 )
    v3 = 0;
  else
    v3 = *((_DWORD *)this + 88) + 2 * *((_DWORD *)this + 89);
  if ( v2 )
    v4 = *((_DWORD *)this + 88) + 2 * *((_DWORD *)this + 89);
  else
    v4 = 0;
  *((_DWORD *)this + 100) = v3;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = v4;
  *((_DWORD *)this + 103) = 0;
  if ( *((_BYTE *)this + 381) )
  {
    pvParam = (struct tagRECT)*((_OWORD *)this + 25);
    RetailDemoExperienceManager::_AdjustWorkingArea(this, &pvParam);
    v5 = *((_DWORD *)this + 89);
    v6 = *((_DWORD *)this + 88);
    if ( *((_BYTE *)this + 382) )
      v7 = v5 + *((_DWORD *)this + 106);
    else
      v7 = *((_DWORD *)this + 104) - v5 - v6;
    v8 = *((_DWORD *)this + 105);
    v9 = v6 + v7;
    v10 = *((_DWORD *)this + 107);
    v18.right = v9;
    v11 = *((_DWORD *)this + 90);
    v18.left = v7;
    v18.top = v5 + v8;
    if ( v11 < 0 )
    {
      v12 = v10 - v5;
LABEL_27:
      v18.bottom = v12;
      goto LABEL_28;
    }
    if ( v11 + v5 + v8 >= v10 - 2 * v5 - v8 )
    {
      v12 = v10 - 2 * v5 - v8;
      goto LABEL_27;
    }
    v18.bottom = v11 + v5 + v8;
  }
  else
  {
    RetailDemoExperienceManager::_RestoreWorkingArea(this);
    if ( !SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        322LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
    v13 = *((_DWORD *)this + 89);
    v14 = *((_DWORD *)this + 88);
    if ( *((_BYTE *)this + 382) )
      v15 = pvParam.right - v13 - v14;
    else
      v15 = v13 + pvParam.left;
    v16 = *((_DWORD *)this + 90);
    v18.left = v15;
    v18.right = v14 + v15;
    v17 = v13 + pvParam.top;
    v18.top = v13 + pvParam.top;
    if ( v16 >= 0 )
    {
      v12 = pvParam.bottom - 2 * v13 - pvParam.top;
      if ( v17 + v16 < v12 )
        v12 = v17 + v16;
      goto LABEL_27;
    }
    v18.bottom = pvParam.bottom - v13;
  }
LABEL_28:
  pvParam = v18;
  RetailDemoExperienceManager::_SetFrameRect(this, &pvParam);
}
