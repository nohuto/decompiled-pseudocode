/*
 * XREFs of ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18007C39C
 * Callers:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180077ED4 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x18007C098 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18007C130 (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18007C150 (-Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCCursorManager::ProcessProviderHitTest(
        MPCCursorManager *this,
        struct IMPCInputProviderBase *a2,
        const struct HitTestResult3D *a3,
        bool *a4)
{
  __int64 v7; // rdx
  const char *v8; // r9
  bool v9; // cl
  bool v10; // al
  char v12; // [rsp+20h] [rbp-40h] BYREF
  bool v13; // [rsp+21h] [rbp-3Fh] BYREF
  _QWORD v14[6]; // [rsp+28h] [rbp-38h] BYREF
  char v15; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  char v17; // [rsp+70h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 64) )
  {
    v13 = 0;
    v17 = MPCCursorManager::Is2DCursorVisible(this);
    v12 = MPCCursorManager::Is3DCursorVisible(this);
    v14[0] = this;
    v14[1] = v8;
    v14[2] = &v17;
    v14[3] = &v12;
    v14[4] = &v13;
    v14[5] = a3;
    v15 = 1;
    if ( !*((_BYTE *)this + 56) || !*((_BYTE *)this + 65) )
      goto LABEL_24;
    if ( !a2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        121LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v8);
      __debugbreak();
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 248LL))(a2)
      && ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
    {
      v9 = *(_DWORD *)this < *((_DWORD *)this + 2) && *((_DWORD *)this + 1) < *((_DWORD *)this + 3);
      v10 = *((_DWORD *)a3 + 72) < *((_DWORD *)a3 + 74) && *((_DWORD *)a3 + 73) < *((_DWORD *)a3 + 75);
      v13 = v10;
      if ( v9 )
      {
        if ( v10 )
        {
          if ( *((_DWORD *)this + 8) == *((_DWORD *)a3 + 71) )
          {
LABEL_24:
            v15 = 0;
            lambda_2c96748461f4900de3746577f815c647_::operator()((__int64)v14);
            return 0LL;
          }
LABEL_22:
          v12 = 0;
          v17 = 1;
          goto LABEL_24;
        }
      }
      else if ( v10 )
      {
        goto LABEL_22;
      }
    }
    v12 = 1;
    v17 = 0;
    goto LABEL_24;
  }
  *a4 = 0;
  return 0LL;
}
