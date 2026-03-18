/*
 * XREFs of _anonymous_namespace_::ComputeWindowToActivate @ 0x1C002BBDC
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C0012418 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall anonymous_namespace_::ComputeWindowToActivate(const struct tagWND *a1, char a2, int a3, _OWORD *a4)
{
  int v4; // eax
  int *v9; // rbx
  bool result; // al
  __int128 v11; // [rsp+20h] [rbp-18h]

  v4 = dword_1C033A0D4;
  if ( (dword_1C033A0D4 & 1) == 0 )
  {
    v4 = dword_1C033A0D4 | 1;
    dword_1C033A0D4 |= 1u;
  }
  if ( (v4 & 2) == 0 )
  {
    v4 |= 2u;
    dword_1C033A0D4 = v4;
  }
  if ( (v4 & 4) == 0 )
  {
    v4 |= 4u;
    dword_1C033A0D4 = v4;
  }
  if ( (v4 & 8) == 0 )
  {
    v4 |= 8u;
    dword_1C033A0D4 = v4;
  }
  if ( (v4 & 0x10) == 0 )
  {
    v4 |= 0x10u;
    dword_1C033A0D4 = v4;
  }
  if ( (v4 & 0x20) == 0 )
  {
    v4 |= 0x20u;
    dword_1C033A0D4 = v4;
  }
  if ( (v4 & 0x40) == 0 )
  {
    dword_1C032FB90 = 2;
    dword_1C033A0D4 = v4 | 0x40;
    qword_1C032FB88 = (__int64)lambda_18e42bef8aab6193ee3628fe412f6142_::_lambda_invoker_cdecl_;
    qword_1C032FB98 = (__int64)lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_;
    qword_1C032FBA8 = (__int64)lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_;
    qword_1C032FBB8 = (__int64)lambda_beb7e60510a54e82b7f39bd19dd130e9_::_lambda_invoker_cdecl_;
    qword_1C032FBC8 = (__int64)lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_;
    qword_1C032FBD8 = (__int64)lambda_9e1c073be7703093e3ca0af05debe537_::_lambda_invoker_cdecl_;
    dword_1C032FBA0 = 4;
    dword_1C032FBB0 = 8;
    dword_1C032FBC0 = 16;
    dword_1C032FBD0 = 32;
  }
  *a4 = 0LL;
  if ( (a2 & 1) != 0 && IsWindowActivateable(a1) )
  {
    *(_QWORD *)&v11 = a1;
    result = 1;
    DWORD2(v11) = 1;
    *a4 = v11;
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v9 = (int *)&unk_1C032FB80;
      do
      {
        if ( (a3 & *v9) != 0 && (*((unsigned __int8 (__fastcall **)(const struct tagWND *, _OWORD *))v9 + 1))(a1, a4) )
          break;
        v9 += 4;
      }
      while ( v9 != &g_cTimerId );
    }
    return *(_QWORD *)a4 != 0LL;
  }
  return result;
}
