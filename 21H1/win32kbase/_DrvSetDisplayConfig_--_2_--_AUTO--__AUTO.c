/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0098E80
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C014CB40 (_DrvSetDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0098EEC (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0099078 (--1AUTO_TGO@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  __int64 v8; // rax

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_1C0206D50;
  if ( !v1 && (int)((__int64 (*)(void))qword_1C0252958)() < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
  v7 = (void *)*((_QWORD *)this + 11);
  if ( v7 )
    ObfDereferenceObject(v7);
  AUTO_TGO::~AUTO_TGO(this);
}
