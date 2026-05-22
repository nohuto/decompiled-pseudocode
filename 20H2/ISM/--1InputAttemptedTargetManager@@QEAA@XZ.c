/*
 * XREFs of ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x180102A08
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$2 @ 0x180050A24 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputAttemptedTargetManager::~InputAttemptedTargetManager(InputAttemptedTargetManager *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 3);
    v4 = (__int64 *)*((_QWORD *)this + 2);
    if ( v2 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 4) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
