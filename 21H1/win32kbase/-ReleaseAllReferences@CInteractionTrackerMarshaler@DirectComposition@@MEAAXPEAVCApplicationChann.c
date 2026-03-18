/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F1BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0029AC0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C00D1BC8 (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F1CB8 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase **v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  struct DirectComposition::CWeakReferenceBase *v11; // rdx
  struct DirectComposition::CWeakReferenceBase *v12; // rdx
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v13; // rcx

  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  v4 = (struct DirectComposition::CWeakReferenceBase **)((char *)this + 328);
  v5 = 3LL;
  do
  {
    if ( *v4 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v4);
      *v4 = 0LL;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = (__int64 *)((char *)this + 264);
  v7 = 4LL;
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)*(v6 - 4));
    v10 = *v6;
    *(v6 - 4) = 0LL;
    if ( v10 )
    {
      Win32FreePool(v10, v8, v9);
      *v6 = 0LL;
    }
    v6[4] = 0LL;
    ++v6;
    --v7;
  }
  while ( v7 );
  v11 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 27);
  if ( v11 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v11);
    *((_QWORD *)this + 27) = 0LL;
  }
  v12 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 28);
  if ( v12 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v12);
    *((_QWORD *)this + 28) = 0LL;
  }
  v13 = (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)*((_QWORD *)this + 56);
  if ( v13 )
  {
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveTrackerBindings(v13, a2, *((_DWORD *)this + 6));
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *((struct DirectComposition::CResourceMarshaler **)this + 56));
    *((_QWORD *)this + 56) = 0LL;
  }
}
