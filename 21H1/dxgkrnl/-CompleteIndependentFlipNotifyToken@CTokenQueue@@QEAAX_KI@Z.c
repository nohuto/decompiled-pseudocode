/*
 * XREFs of ?CompleteIndependentFlipNotifyToken@CTokenQueue@@QEAAX_KI@Z @ 0x1C0026254
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BA00 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenQueue::CompleteIndependentFlipNotifyToken(CTokenQueue **this, __int64 a2, unsigned int a3)
{
  CTokenQueue *i; // rbx
  char *v7; // rdi

  for ( i = *this; i != (CTokenQueue *)this; i = *(CTokenQueue **)i )
  {
    v7 = (char *)i - 8;
    if ( *((_QWORD *)i + 4) == a2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))((__int64)i - 8) <= a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))((__int64)i - 8);
    }
  }
}
