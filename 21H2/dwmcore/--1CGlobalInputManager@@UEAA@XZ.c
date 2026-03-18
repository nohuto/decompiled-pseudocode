/*
 * XREFs of ??1CGlobalInputManager@@UEAA@XZ @ 0x180272278
 * Callers:
 *     ??_ECGlobalInputManager@@UEAAPEAXI@Z @ 0x1802722D0 (--_ECGlobalInputManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x18027231C (--_GCKst@@QEAAPEAXI@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180276F78 (-Stop@CKstBase@@QEAAXXZ.c)
 */

void __fastcall CGlobalInputManager::~CGlobalInputManager(CGlobalInputManager *this)
{
  CKstBase *v2; // rcx
  unsigned int v3; // edx
  CKst *v4; // rcx

  *(_QWORD *)this = &CGlobalInputManager::`vftable';
  v2 = (CKstBase *)*((_QWORD *)this + 41);
  if ( v2 )
  {
    CKstBase::Stop(v2);
    v4 = (CKst *)*((_QWORD *)this + 41);
    if ( v4 )
      CKst::`scalar deleting destructor'(v4, v3);
  }
  CInputManager::~CInputManager(this);
}
