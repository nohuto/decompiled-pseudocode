/*
 * XREFs of _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x1800F7560
 * Callers:
 *     <none>
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18002BB04 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800F4DA0 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rax
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  int v4; // eax
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 336);
  if ( *(_BYTE *)(v1 + 416) )
  {
    v4 = CMmcssTask::Apply(v2, 1);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x55u);
  }
  else
  {
    CMmcssTask::Revert(v2);
  }
  return 0LL;
}
