/*
 * XREFs of ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016260
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180007CD0 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ECD0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012524 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180012FE4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015E00 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800161D8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x1800164D8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B540 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003F480 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800948AC (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180094940 (-OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180096100 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013990 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

__int64 __fastcall CWindowData::NotifyRepresentationChanged(CWindowData *this)
{
  unsigned int v1; // edi
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]
  unsigned int v11; // [rsp+48h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 114) )
  {
    v3 = *((_QWORD *)this + 54);
    v4 = *((unsigned int *)this + 114);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v8 = 0LL;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet(&v8, 8LL, v4, v3) >= 0 )
    {
      v5 = 0LL;
      if ( v11 )
      {
        v6 = v8;
        while ( 1 )
        {
          v7 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v6 + 8 * v5));
          v1 = v7;
          if ( v7 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v11 )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1EEBu);
      }
    }
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v8);
  }
  return v1;
}
