/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180223190
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180223648 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18005B924 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CED94 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180221A18 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180222340 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1802223B0 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180223038 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x18023202C (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  char v4; // r12
  unsigned int v5; // esi
  bool IsMousewheelFrame; // r13
  __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // eax
  int *v10; // r15
  CManipulationContext *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD); // rbx
  unsigned int v13; // eax
  char v14; // r8
  __int64 v15; // r10
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+88h] [rbp+10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      v8 = 248LL * v5;
      v9 = *(_DWORD *)((char *)a2 + v8 + 172);
      v10 = (int *)((char *)a2 + v8);
      if ( (v9 & 0x840000) != 0 || IsMousewheelFrame )
      {
        CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
          (__int64)this + 184,
          &v16,
          v10 + 41);
        v12 = v16;
        if ( v16 )
        {
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v16)[3])(v16, (unsigned int)v10[41]);
          v13 = ConvertToInputType(*((_DWORD *)a2 + 40), *((_DWORD *)a2 + 43));
          CManipulationManager::OnUp((__int64)this, v15, v10[41], v13, v12, 0, 0, v14);
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
      }
      else if ( (v9 & 2) == 0 )
      {
        v11 = (CManipulationContext *)*((_QWORD *)this + 33);
        if ( v11 )
          CManipulationContext::OnContactHoverDepart(v11, v10[41]);
      }
      if ( !v4 && *(_QWORD *)((char *)a2 + v8 + 184) == -1LL )
      {
        v17 = (__int64 (__fastcall ***)(_QWORD))a2;
        v4 = 1;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
          (char **)this + 31,
          &v17);
        (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 4) );
  }
}
