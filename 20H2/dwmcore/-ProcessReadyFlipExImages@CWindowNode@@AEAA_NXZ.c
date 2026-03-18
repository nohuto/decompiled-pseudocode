/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800D9020
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D8F80 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801F3100 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x180015430 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExImages(CWindowNode *this)
{
  char v1; // r15
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rbp
  struct CResource *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // ebx
  unsigned int v12; // ebx

  v1 = 0;
  if ( !*((_BYTE *)this + 920) )
  {
    v3 = *((_DWORD *)this + 224);
    *((_BYTE *)this + 920) = 1;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = v3 - 1;
        v6 = v5;
        if ( CCompositionSurfaceBitmap::GetRenderingRealization(*(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 109)
                                                                                              + 8 * v5)) )
          break;
        v3 = v5;
        if ( !(_DWORD)v5 )
          goto LABEL_3;
      }
      v7 = (struct CResource *)*((_QWORD *)this + 108);
      if ( v7 )
      {
        CResource::UnRegisterNotifierInternal(this, v7);
        *((_QWORD *)this + 108) = 0LL;
      }
      v1 = 1;
      v8 = *(_QWORD *)(*((_QWORD *)this + 109) + 8 * v5);
      *((_QWORD *)this + 108) = v8;
      if ( v3 != 1 )
      {
        v9 = 0LL;
        do
        {
          v10 = *((_QWORD *)this + 109);
          CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v9 + v10));
          *(_QWORD *)(v9 + v10) = 0LL;
          v9 += 8LL;
          --v6;
        }
        while ( v6 );
      }
      if ( v3 )
      {
        v11 = *((_DWORD *)this + 224);
        if ( v3 > v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x23Du, 0LL);
        }
        else
        {
          v12 = v11 - v3;
          if ( v12 )
            memmove_0(*((void **)this + 109), (const void *)(*((_QWORD *)this + 109) + 8LL * v3), 8LL * v12);
          *((_DWORD *)this + 224) = v12;
        }
      }
      CVisual::PropagateFlags((__int64)this, 4u);
    }
LABEL_3:
    *((_BYTE *)this + 920) = 0;
  }
  return v1;
}
