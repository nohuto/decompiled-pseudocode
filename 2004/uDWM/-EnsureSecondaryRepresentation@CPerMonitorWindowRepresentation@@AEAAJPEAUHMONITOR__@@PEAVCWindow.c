/*
 * XREFs of ?EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindowData@@PEAPEAUSecondaryRepresentation@1@@Z @ 0x1800BE8DC
 * Callers:
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BED4C (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRootVisuals@CPerMonitorWindowRepresentation@@AEAAJXZ @ 0x1800BE80C (-EnsureRootVisuals@CPerMonitorWindowRepresentation@@AEAAJXZ.c)
 *     ?FindSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAPEAUSecondaryRepresentation@1@PEAUHMONITOR__@@@Z @ 0x1800BEC34 (-FindSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAPEAUSecondaryRepresentation@1@.c)
 */

__int64 __fastcall CPerMonitorWindowRepresentation::EnsureSecondaryRepresentation(
        CPerMonitorWindowRepresentation *this,
        HMONITOR a2,
        struct CWindowData *a3,
        struct CPerMonitorWindowRepresentation::SecondaryRepresentation **a4)
{
  int v5; // ebx
  struct CPerMonitorWindowRepresentation::SecondaryRepresentation *SecondaryRepresentation; // rax
  struct CPerMonitorWindowRepresentation::SecondaryRepresentation *v10; // rax
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int inserted; // eax
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // rax
  CBaseObject *v20; // rcx
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-20h]
  struct CPerMonitorWindowRepresentation::SecondaryRepresentation *v25; // [rsp+30h] [rbp-10h] BYREF

  v5 = 0;
  SecondaryRepresentation = CPerMonitorWindowRepresentation::FindSecondaryRepresentation(this, a2);
  v25 = SecondaryRepresentation;
  if ( SecondaryRepresentation )
    goto LABEL_29;
  v10 = (struct CPerMonitorWindowRepresentation::SecondaryRepresentation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                             WPF::g_pProcessHeap,
                                                                             16LL);
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 1) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v25 = v10;
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            96LL);
    v13 = v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = &CThumbnailData::`vftable';
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
      *(_DWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 36) = 0LL;
      *(_OWORD *)(v12 + 52) = 0LL;
      *(_QWORD *)(v12 + 68) = 0LL;
      *(_DWORD *)(v12 + 76) = 0;
      *(_BYTE *)(v12 + 80) = 0;
      *(_QWORD *)(v12 + 88) = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    *((_QWORD *)v25 + 1) = v13;
    v14 = *((_QWORD *)v25 + 1);
    if ( !v14 )
    {
      v24 = 264;
      goto LABEL_7;
    }
    inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v24 = 266;
LABEL_17:
      v11 = inserted;
      goto LABEL_8;
    }
    v16 = 0LL;
    *(_QWORD *)(*((_QWORD *)v25 + 1) + 8LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)v25 + 1) + 24LL) = a3;
    do
      *(_BYTE *)(*((_QWORD *)v25 + 1) + v16++ + 32) = 0;
    while ( v16 < 2 );
    *(_BYTE *)(*((_QWORD *)v25 + 1) + 34LL) = 1;
    *(_BYTE *)(*((_QWORD *)v25 + 1) + 35LL) = 0;
    *(_DWORD *)(*((_QWORD *)v25 + 1) + 36LL) = 15;
    *(_BYTE *)(*((_QWORD *)v25 + 1) + 72LL) = 0x80;
    *(_DWORD *)(*((_QWORD *)v25 + 1) + 73LL) = 1;
    *(_DWORD *)(*((_QWORD *)v25 + 1) + 77LL) = 0;
    *(_QWORD *)v25 = a2;
    inserted = CPerMonitorWindowRepresentation::EnsureRootVisuals(this);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v24 = 283;
      goto LABEL_17;
    }
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 3) + 32LL),
                 *(struct CVisual **)(*((_QWORD *)v25 + 1) + 88LL),
                 0LL,
                 0,
                 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v24 = 284;
      goto LABEL_17;
    }
    v17 = *((_DWORD *)this + 14);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_42:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x11Du);
      goto LABEL_30;
    }
    if ( v18 > *((_DWORD *)this + 13) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8u, 1, &v25);
      v5 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xC0u);
      if ( v5 < 0 )
        goto LABEL_42;
    }
    else
    {
      v5 = 0;
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * *((unsigned int *)this + 14)) = v25;
      *((_DWORD *)this + 14) = v18;
    }
    SecondaryRepresentation = v25;
LABEL_29:
    *a4 = SecondaryRepresentation;
    v25 = 0LL;
    goto LABEL_30;
  }
  v24 = 261;
LABEL_7:
  v11 = -2147024882;
  v5 = -2147024882;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v24);
LABEL_30:
  if ( v25 )
  {
    v19 = *((_QWORD *)v25 + 1);
    if ( v19 )
    {
      v20 = *(CBaseObject **)(v19 + 88);
      if ( v20 )
      {
        CBaseObject::Release(v20);
        *(_QWORD *)(*((_QWORD *)v25 + 1) + 88LL) = 0LL;
      }
    }
    v21 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v25 + 1);
    if ( v21 )
    {
      (**v21)(v21, 1LL);
      *((_QWORD *)v25 + 1) = 0LL;
    }
    if ( v25 )
      (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  }
  return (unsigned int)v5;
}
