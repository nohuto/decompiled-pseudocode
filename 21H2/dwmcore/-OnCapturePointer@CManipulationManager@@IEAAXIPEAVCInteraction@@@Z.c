/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x18017CF3C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18002AA00 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18017937C (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017BCE8 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x18017C5A4 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18017D2A0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18017D688 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  char *v3; // r13
  int Key; // eax
  unsigned int v7; // r15d
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  __int64 *v9; // rax
  int v10; // ecx
  int v11; // r14d
  int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rbx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+28h] [rbp-38h]
  int v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+48h] [rbp-18h] BYREF
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+50h] [rbp-10h] BYREF
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+48h] BYREF
  struct CInteraction *v24; // [rsp+B0h] [rbp+50h]
  __int64 (__fastcall ***v25)(_QWORD); // [rsp+B8h] [rbp+58h] BYREF

  v24 = a3;
  v23 = a2;
  v3 = (char *)this + 184;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 184,
          (int *)&v23);
  v7 = 2;
  if ( Key == -1 )
  {
    v8 = 0LL;
    v9 = &v19;
    v10 = 0;
    v11 = 1;
  }
  else
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 24) + 8LL * Key);
    v25 = v8;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v25);
    v9 = (__int64 *)&v25;
    v11 = 0;
    v10 = 2;
  }
  *v9 = 0LL;
  v21 = v8;
  if ( v10 )
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v25);
  if ( v11 )
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease(&v19);
  if ( v8 )
    ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v8)[3])(v8, a2);
  v12 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 224,
          (int *)&v23);
  if ( v12 != -1 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 29) + 4LL * v12);
  CManipulationManager::OnUp(this, v13, a2, v7, v8, 1, 1, 1);
  v14 = (__int64)v24;
  LOBYTE(v18) = 1;
  LOBYTE(v17) = 0;
  LOBYTE(v16) = 1;
  CManipulationManager::OnNewContact(this, v24, a2, v7, v16, v17, v18);
  v22 = 0LL;
  v15 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)v3,
          (int *)&v23);
  if ( v15 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v22, (_QWORD *)(*((_QWORD *)this + 24) + 8LL * v15)) )
  {
    v20 = 0LL;
    LODWORD(v19) = 1;
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v20);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64 *))(*v22)[9])(v22, a2, &v19);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v20, v14);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64 *))(*v22)[11])(v22, &v19);
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v21);
}
