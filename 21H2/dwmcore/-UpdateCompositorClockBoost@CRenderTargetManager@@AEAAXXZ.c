/*
 * XREFs of ?UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ @ 0x180080CC8
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18007DBDC (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x18007E068 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180080D48 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::UpdateCompositorClockBoost(CRenderTargetManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  char v4; // si
  __int64 *v5; // rbp
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)(v2 + 216);
  v4 = (!*(_BYTE *)(v3 + 581) || *(_BYTE *)(v3 + 582))
    && (*(_DWORD *)(v2 + 1228) || CSuperWetInkManager::HasActiveInk(*(CSuperWetInkManager **)(v2 + 256)));
  if ( v4 != *((_BYTE *)this + 583) )
  {
    *((_BYTE *)this + 576) = 1;
    v5 = (__int64 *)*((_QWORD *)this + 2);
    for ( i = (__int64 *)*((_QWORD *)this + 1); i != v5; ++i )
    {
      v7 = *i;
      v9 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v7, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v9) >= 0 )
      {
        LOBYTE(v8) = v4;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 120LL))(v9, v8);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
    }
    CRenderTargetManager::EndTargetEnumeration(this);
    *((_BYTE *)this + 583) = v4;
  }
}
