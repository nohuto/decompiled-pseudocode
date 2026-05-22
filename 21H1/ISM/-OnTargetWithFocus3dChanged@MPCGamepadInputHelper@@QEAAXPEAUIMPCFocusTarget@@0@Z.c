/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18006CEE0
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180077814 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadInputHelper::OnTargetWithFocus3dChanged(
        MPCGamepadInputHelper *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  bool v3; // di
  __int64 v6; // rax

  v3 = 0;
  if ( a3 )
  {
    *(_BYTE *)this = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *, struct IMPCFocusTarget *))(*(_QWORD *)a3 + 32LL))(
                       a3,
                       a2);
    v6 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
    *((_QWORD *)this + 1) = v6;
    *((_QWORD *)this + 2) = GetAncestor((HWND)(int)v6, 2u);
    *((_DWORD *)this + 6) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 48LL))(a3);
    v3 = (*(unsigned int (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 88LL))(a3) != 0;
  }
  else
  {
    *(_BYTE *)this = 0;
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_BYTE *)this + 1) = v3;
  *((_BYTE *)this + 38) = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2367);
  MPCGamepadInputHelper::UpdateGamepadFocus(this);
}
