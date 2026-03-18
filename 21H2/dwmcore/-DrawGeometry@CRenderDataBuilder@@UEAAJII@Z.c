/*
 * XREFs of ?DrawGeometry@CRenderDataBuilder@@UEAAJII@Z @ 0x1800E9D70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawGeometry(CRenderDataBuilder *this, int a2, int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v6 = DynArrayImpl<0>::Grow((unsigned __int64)this + 16, 1u, 16, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x79u);
  }
  else
  {
    v9 = *((unsigned int *)this + 10);
    v10 = *((_QWORD *)this + 2);
    *(_DWORD *)(v9 + v10) = 16;
    *(_QWORD *)(v9 + v10 + 8) = 0LL;
    *(_DWORD *)(v9 + v10 + 4) = 456;
    *(_DWORD *)(v9 + v10 + 8) = a2;
    *(_DWORD *)(v9 + v10 + 12) = a3;
    *((_DWORD *)this + 10) += 16;
  }
  return v8;
}
