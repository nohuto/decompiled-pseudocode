/*
 * XREFs of ??1CDDisplayManager@@EEAA@XZ @ 0x180087284
 * Callers:
 *     ??_GCDDisplayManager@@EEAAPEAXI@Z @ 0x1800872E0 (--_GCDDisplayManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDDisplayManager::~CDDisplayManager(CDDisplayManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CDDisplayManager::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
