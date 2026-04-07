/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18003D2F4
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18000E2F4 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B030 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18003D3EC (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180095020 (-OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::UnregisterThumbnail(CWindowList *this, struct CVisual **a2)
{
  unsigned int v2; // edi
  struct CVisual *v5; // rcx
  struct CVisual *v6; // rdx
  struct CVisual *v7; // rdx
  CBaseObject *v8; // rcx
  struct CVisual *v9; // rcx
  struct CVisual *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v13; // rcx
  CTopLevelWindow *v14; // rcx
  struct CVisual *v15; // rdx
  int v16; // eax
  struct CThumbnailData *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = (struct CThumbnailData *)a2;
  v2 = 0;
  if ( *((_BYTE *)a2 + 34) )
  {
    v5 = a2[12];
    if ( v5 )
    {
      v6 = a2[13];
      if ( v6 )
      {
        VisualCollection::Remove((struct CVisual *)((char *)v5 + 32), v6);
        v13 = a2[13];
        if ( v13 )
        {
          CBaseObject::Release(v13);
          a2[13] = 0LL;
        }
      }
      v7 = a2[11];
      if ( v7 )
        VisualCollection::Remove((struct CVisual *)((char *)a2[12] + 32), v7);
      v8 = a2[12];
      if ( v8 )
      {
        CBaseObject::Release(v8);
        a2[12] = 0LL;
      }
    }
  }
  else
  {
    v14 = (CTopLevelWindow *)*((_QWORD *)a2[2] + 48);
    if ( v14 )
    {
      v15 = a2[11];
      if ( v15 )
      {
        v16 = CTopLevelWindow::OnThumbnailRemoved(v14, v15);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1656u);
          return v2;
        }
      }
    }
  }
  DynArray<CThumbnailData *,0>::Remove((char *)a2[2] + 472, &v17);
  v9 = a2[3];
  if ( v9 )
    DynArray<CThumbnailData *,0>::Remove((char *)v9 + 504, &v17);
  v10 = a2[11];
  if ( v10 )
  {
    *((_QWORD *)v10 + 46) = 0LL;
    v11 = a2[11];
    if ( v11 )
    {
      CBaseObject::Release(v11);
      a2[11] = 0LL;
    }
  }
  (*(void (__fastcall **)(struct CVisual **, __int64))*a2)(a2, 1LL);
  DynArray<CThumbnailData *,0>::Remove((char *)this + 352, &v17);
  return v2;
}
