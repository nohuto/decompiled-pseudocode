/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801F3E70
 * Callers:
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1801F3A8C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SET.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D530 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009F678 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800DDC50 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(struct CResource **this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v2; // ebp
  char *v4; // rbx
  unsigned int v5; // ecx
  struct CCompositionSurfaceBitmap **v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  int v12; // eax
  struct CResource **v13; // rbx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  struct CResource *v16; // r9
  __int64 i; // r14
  struct CResource *v18; // rbx
  struct CCompositionSurfaceBitmap *v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v2 = 0;
  if ( a2 )
  {
    if ( a2 != this[108] )
    {
      v4 = (char *)(this + 109);
      v5 = 0;
      v6 = *(struct CCompositionSurfaceBitmap ***)v4;
      if ( *((_DWORD *)v4 + 6) )
      {
        while ( a2 != *v6 )
        {
          ++v5;
          ++v6;
          if ( v5 >= *((_DWORD *)v4 + 6) )
            goto LABEL_6;
        }
        goto LABEL_11;
      }
LABEL_6:
      v7 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x34Bu, 0LL);
        return v2;
      }
      v9 = *((_DWORD *)v4 + 6);
      v10 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_14;
      }
      if ( v10 > *((_DWORD *)v4 + 5) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8, 1, &v20);
        v2 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC0u, 0LL);
LABEL_14:
        if ( (v2 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0x34Cu, 0LL);
          return v2;
        }
        goto LABEL_11;
      }
      v2 = 0;
      *(_QWORD *)(*(_QWORD *)v4 + 8LL * *((unsigned int *)v4 + 6)) = v20;
      *((_DWORD *)v4 + 6) = v10;
    }
LABEL_11:
    CWindowNode::ProcessReadyFlipExImages((CWindowNode *)this);
    while ( *((_DWORD *)this + 224) > 0x10u )
    {
      v13 = (struct CResource **)this[109];
      CResource::UnRegisterNotifierInternal((CResource *)this, *v13);
      *v13 = 0LL;
      v14 = 0;
      v15 = *((unsigned int *)this + 224);
      if ( (_DWORD)v15 )
      {
        v16 = this[109];
        if ( (_DWORD)v15 != 1 )
        {
          do
          {
            v15 = v14++;
            *((_QWORD *)v16 + v15) = *((_QWORD *)v16 + v14);
            LODWORD(v15) = *((_DWORD *)this + 224);
          }
          while ( v14 < (int)v15 - 1 );
        }
        *((_DWORD *)this + 224) = v15 - 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024809, 0x19Cu, 0LL);
      }
    }
    return v2;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 224); i = (unsigned int)(i + 1) )
  {
    v18 = this[109];
    CResource::UnRegisterNotifierInternal((CResource *)this, *((struct CResource **)v18 + i));
    *((_QWORD *)v18 + i) = 0LL;
  }
  *((_DWORD *)this + 224) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 109), 8u);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[108]);
  this[108] = 0LL;
  CVisual::PropagateFlags((__int64)this, 4u);
  return v2;
}
