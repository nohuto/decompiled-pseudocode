/*
 * XREFs of ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180019BF8
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18001AA30 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  _QWORD *v1; // rbx
  char v2; // di
  _QWORD *v3; // rsi

  v1 = (_QWORD *)*((_QWORD *)this + 21);
  v2 = 0;
  v3 = &v1[*((_QWORD *)this + 22)];
  while ( v1 != v3 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 216LL))(*v1) == 3
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 216LL))(*v1) == 1 )
    {
      return 1;
    }
    ++v1;
  }
  return v2;
}
