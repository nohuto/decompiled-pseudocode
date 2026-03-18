/*
 * XREFs of ??1CKst@@QEAA@XZ @ 0x180276EB4
 * Callers:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x18027231C (--_GCKst@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180276EF0 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 */

void __fastcall CKst::~CKst(CKst *this, unsigned int a2)
{
  CMmcssTask *v3; // rcx

  *(_QWORD *)this = &CKst::`vftable';
  v3 = (CMmcssTask *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CMmcssTask::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 6) = 0LL;
  }
  CKstBase::~CKstBase(this);
}
