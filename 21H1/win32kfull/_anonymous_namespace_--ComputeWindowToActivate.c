/*
 * XREFs of _anonymous_namespace_::ComputeWindowToActivate @ 0xA948A
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 * Callees:
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 */

bool __fastcall anonymous_namespace_::ComputeWindowToActivate(int a1, char a2, int a3, _DWORD *a4)
{
  int v4; // eax
  int *v6; // edi
  bool result; // al
  bool v8; // al
  const struct tagWND *v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-4h]

  v4 = dword_2738AC;
  v10 = a1;
  if ( (dword_2738AC & 1) == 0 )
  {
    v4 = dword_2738AC | 1;
    dword_2738AC |= 1u;
  }
  if ( (v4 & 2) == 0 )
  {
    v4 |= 2u;
    dword_2738AC = v4;
  }
  if ( (v4 & 4) == 0 )
  {
    v4 |= 4u;
    dword_2738AC = v4;
  }
  if ( (v4 & 8) == 0 )
  {
    v4 |= 8u;
    dword_2738AC = v4;
  }
  if ( (v4 & 0x10) == 0 )
  {
    v4 |= 0x10u;
    dword_2738AC = v4;
  }
  if ( (v4 & 0x20) == 0 )
  {
    v4 |= 0x20u;
    dword_2738AC = v4;
  }
  if ( (v4 & 0x40) == 0 )
  {
    dword_268FB4 = (int)lambda_669ca5b9ce16baea3be777a2891d67b5_::_lambda_invoker_stdcall_;
    dword_2738AC = v4 | 0x40;
    dword_268FB8 = 2;
    dword_268FBC = (int)&lambda_fd3250b01a93d986fc52efb651841859_::_lambda_invoker_stdcall_;
    dword_268FC0 = 4;
    dword_268FC4 = (int)lambda_3dfc3574f1764bae2e3df8ef16480b1e_::_lambda_invoker_stdcall_;
    dword_268FC8 = 8;
    dword_268FCC = (int)lambda_a01c3b76e149544d05777b2ea11158df_::_lambda_invoker_stdcall_;
    dword_268FD0 = 16;
    dword_268FD4 = (int)lambda_01ca0a41559b7f40c231bae09045841d_::_lambda_invoker_stdcall_;
    dword_268FD8 = 32;
    dword_268FDC = (int)lambda_32cb82285d9d5665fcc6dd155d313a03_::_lambda_invoker_stdcall_;
  }
  *a4 = 0;
  a4[1] = 0;
  if ( (a2 & 1) != 0 && (v8 = IsWindowActivateable(v9), a1 = v10, v8) )
  {
    *a4 = v10;
    result = 1;
    a4[1] = 1;
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v6 = (int *)&unk_268FB0;
      do
      {
        if ( (a3 & *v6) != 0 && ((unsigned __int8 (__stdcall *)(int, _DWORD *))v6[1])(a1, a4) )
          break;
        a1 = v10;
        v6 += 2;
      }
      while ( v6 != &g_cTimerId );
    }
    return *a4 != 0;
  }
  return result;
}
