/*
 * XREFs of ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1800D0590
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008F5A8 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRedirectedVisualContent::Initialize(struct CResource **this)
{
  int v2; // eax
  __int64 v3; // rcx
  int VisualTree; // ebx
  CVisual *v5; // rcx
  __int64 v6; // rcx
  __int64 *v8; // [rsp+30h] [rbp-28h]
  struct CVisualTree *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]

  v2 = CResource::RegisterNotifier((CResource *)this, this[8]);
  VisualTree = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x23u, 0LL);
  }
  else
  {
    v5 = this[8];
    v9 = 0LL;
    v8 = (__int64 *)(this + 9);
    v10 = 1;
    VisualTree = CVisual::GetVisualTree(v5, &v9);
    if ( v10 )
    {
      v6 = *v8;
      *v8 = (__int64)v9;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, VisualTree, 0x26u, 0LL);
  }
  return (unsigned int)VisualTree;
}
