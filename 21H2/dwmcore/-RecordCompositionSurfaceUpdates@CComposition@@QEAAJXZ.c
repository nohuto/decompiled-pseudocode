/*
 * XREFs of ?RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ @ 0x180080E48
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18007DDA4 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::RecordCompositionSurfaceUpdates(CComposition *this)
{
  int v1; // ebx
  __int64 i; // rbp
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 196); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 95) + 8 * i);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 232LL))(v5);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x304u);
    if ( !v1 || v1 >= 0 && v8 < 0 )
      v1 = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 196) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 760, 8LL);
  return (unsigned int)v1;
}
