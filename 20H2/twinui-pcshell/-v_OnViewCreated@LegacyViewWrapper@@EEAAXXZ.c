/*
 * XREFs of ?v_OnViewCreated@LegacyViewWrapper@@EEAAXXZ @ 0x1802C9540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewCreated(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 34) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 160LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
      *((_QWORD *)this + 24),
      *((unsigned int *)this + 68));
}
