/*
 * XREFs of ??1CVisualReferenceController@@MEAA@XZ @ 0x1800DBD24
 * Callers:
 *     ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x1800DBCE0 (--_ECVisualReferenceController@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800DCC80 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualReferenceController::~CVisualReferenceController(CVisualReferenceController *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CVisualReferenceController::`vftable';
  CVisualReferenceController::UnRegisterNotifiers(this);
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CResource::~CResource(this);
}
