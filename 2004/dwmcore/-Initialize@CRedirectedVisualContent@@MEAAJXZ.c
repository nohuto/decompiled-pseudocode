/*
 * XREFs of ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x180034B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180036730 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRedirectedVisualContent::Initialize(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // ecx
  bool v4; // r8
  int VisualTree; // ebx
  CVisual *v6; // rcx
  struct CVisualTree *v7; // rcx
  struct CVisualTree **v9; // [rsp+30h] [rbp-28h]
  struct CVisualTree *v10; // [rsp+38h] [rbp-20h] BYREF
  char v11; // [rsp+40h] [rbp-18h]

  v2 = CResource::RegisterNotifier((CResource *)this, this[8]);
  VisualTree = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x23u, 0LL);
  }
  else
  {
    v6 = this[8];
    v10 = 0LL;
    v9 = this + 9;
    v11 = 1;
    VisualTree = CVisual::GetVisualTree(v6, &v10, v4);
    if ( v11 )
    {
      v7 = *v9;
      *v9 = v10;
      if ( v7 )
        (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, VisualTree, 0x26u, 0LL);
  }
  return (unsigned int)VisualTree;
}
