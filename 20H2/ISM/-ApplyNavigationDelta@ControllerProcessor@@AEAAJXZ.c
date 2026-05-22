/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FA34
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180121924 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBB7C (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18011CE2C (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18011CF08 (-OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x18011F9A8 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180120888 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x18012235C (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x1801224BC (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm1_4
  float v3; // xmm2_4
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // edi
  struct tagPOINT v9; // rbx
  int v10; // ebp
  bool v11; // r14
  bool v12; // di
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v14; // r8
  const char *v15; // r9
  int v16; // eax
  int v17; // eax
  ControllerNavigationManager *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct tagPOINT v21; // [rsp+50h] [rbp+8h]
  struct tagPOINT v22; // [rsp+50h] [rbp+8h]

  v1 = *((float *)this + 85);
  if ( COERCE_FLOAT(LODWORD(v1) & _xmm) >= 1.0 || COERCE_FLOAT(*((_DWORD *)this + 86) & _xmm) >= 1.0 )
  {
    v3 = *((float *)this + 86);
    v4 = (int)v1;
    v21.x = (int)v1;
    v21.y = (int)v3;
    *((float *)this + 85) = v1 - (float)(int)v1;
    *((float *)this + 86) = v3 - (float)(int)v3;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 936) + 80LL))(*((_QWORD *)this + 936)) )
    {
      v5 = ControllerProcessor::SendPointerDelta(this, v21);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1597LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 958) + 96LL))(*((_QWORD *)this + 958));
        if ( v6 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1601LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v6);
          __debugbreak();
        }
      }
    }
    else
    {
      v7 = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
      *(_QWORD *)((char *)this + 332) = v7;
      v8 = v4 + v7;
      v22.y = v21.y + *((_DWORD *)this + 84);
      v22.x = v4 + v7;
      v9 = ControllerProcessor::AdjustPointToBounds(v22, (struct tagRECT *)((char *)this + 312));
      v10 = 1;
      v11 = v9 != __PAIR64__(v22.y, v8);
      v12 = v9.x == *((_DWORD *)this + 78)
         || v9.x == *((_DWORD *)this + 80) - 1
         || v9.y == *((_DWORD *)this + 79)
         || v9.y == *((_DWORD *)this + 81) - 1;
      if ( *((_DWORD *)this + 83) == v9.x && *((_DWORD *)this + 84) == v9.y )
        v10 = 0;
      if ( *((_BYTE *)this + 376) && v10 && PtInRect((const RECT *)((char *)this + 360), v9) )
      {
        ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedOverrideBounds(ControllerNavigationManager, v9, v14, v15);
      }
      v16 = ControllerProcessor::SetPointerPosition(this, v9, v11);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1641LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 958) + 80LL))(
                *((_QWORD *)this + 958),
                *((_QWORD *)this + 960),
                *((_QWORD *)this + 961));
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1652LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v17);
          __debugbreak();
        }
      }
      if ( v12 && v10 && (*((_BYTE *)this + 328) & 0x10) != 0 )
      {
        v18 = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedClientBounds(v18, v9);
      }
    }
  }
  return 0LL;
}
