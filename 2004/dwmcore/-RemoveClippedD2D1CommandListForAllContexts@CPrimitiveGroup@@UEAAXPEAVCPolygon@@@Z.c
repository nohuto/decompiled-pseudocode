/*
 * XREFs of ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x1801E4CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD9D0 (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     ?RemoveRange@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHHH@Z @ 0x180249A34 (-RemoveRange@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAV.c)
 */

void __fastcall CPrimitiveGroup::RemoveClippedD2D1CommandListForAllContexts(CPrimitiveGroup *this, struct CPolygon *a2)
{
  __int64 i; // rbx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r9
  struct CPolygon ***v8; // r14
  struct CPolygon **v9; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
  {
    v5 = 0;
    v6 = 0LL;
    v7 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
    v8 = (struct CPolygon ***)(v7 + 80);
    if ( *(int *)(v7 + 96) <= 0 )
    {
LABEL_6:
      v5 = -1;
    }
    else
    {
      v9 = *v8;
      while ( *v9 != a2 )
      {
        ++v5;
        ++v6;
        ++v9;
        if ( v6 >= *(int *)(v7 + 96) )
          goto LABEL_6;
      }
    }
    if ( v5 != -1 )
    {
      ReleaseInterface<CResource>((__int64 *)(*(_QWORD *)(v7 + 88) + 8LL * v5));
      CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveRange(
        v8,
        (unsigned int)v5);
    }
  }
}
