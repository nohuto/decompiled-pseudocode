/*
 * XREFs of MiApplyDriverHotPatch @ 0x140971068
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VslApplyHotPatch @ 0x14054DBF0 (VslApplyHotPatch.c)
 *     MiFreeLoadedImportList @ 0x1406EB3D4 (MiFreeLoadedImportList.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 *     MiUnlockDriverPages @ 0x14080C400 (MiUnlockDriverPages.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140931ED4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x1409682E4 (MiPrepareDriverPatchState.c)
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140971708 (MiApplyHotPatchToDriverDataPages.c)
 *     MiCheckPatchesInSupportedSections @ 0x140972A10 (MiCheckPatchesInSupportedSections.c)
 *     MiIdentifyImageDiscardablePages @ 0x14097389C (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1409739A4 (MiIdentifyPatchImageDataPages.c)
 *     MiInvokePatchCallback @ 0x140973F50 (MiInvokePatchCallback.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     MiPrepareDriverForHotPatch @ 0x140976790 (MiPrepareDriverForHotPatch.c)
 *     MiAddEntryToImportList @ 0x140978260 (MiAddEntryToImportList.c)
 *     MiGetSectionStrongImageReference @ 0x14097F0F0 (MiGetSectionStrongImageReference.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14097F690 (MiAllocateKernelCfgBitmapPageTables.c)
 *     RtlFindHotPatchBase @ 0x1409C0550 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1409C0580 (RtlFindHotPatchInformation.c)
 *     RtlPatchContainsCallTarget @ 0x1409C0744 (RtlPatchContainsCallTarget.c)
 *     RtlValidateHotPatchBase @ 0x1409C0794 (RtlValidateHotPatchBase.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyDriverHotPatch(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v6; // r15
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // ecx
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int SectionStrongImageReference; // ebx
  unsigned __int64 SessionVm; // rax
  __int64 v15; // r13
  int v16; // eax
  void *v17; // rcx
  int v18; // r14d
  __int64 v19; // r13
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  BOOL v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh]
  __int64 HotPatchBase; // [rsp+48h] [rbp-B8h]
  _QWORD v33[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v34; // [rsp+90h] [rbp-70h]
  void *v35; // [rsp+98h] [rbp-68h]
  unsigned __int64 v36[14]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v37[20]; // [rsp+110h] [rbp+10h] BYREF
  int v38; // [rsp+1C8h] [rbp+C8h]

  v30 = 0;
  v31 = 0;
  v38 = 0;
  v6 = 0LL;
  memset(v33, 0, sizeof(v33));
  if ( (*(_DWORD *)(a2 + 196) & 0x20) != 0 )
    return 3221225496LL;
  v33[3] = RtlFindHotPatchInformation(*(_QWORD *)(a1 + 48));
  v8 = v33[3];
  HotPatchBase = RtlFindHotPatchBase(v33[3]);
  if ( !HotPatchBase )
    return 3221225595LL;
  v10 = *(_DWORD *)(a1 + 64);
  v11 = *(_DWORD *)(a2 + 64);
  if ( !(unsigned __int8)RtlValidateHotPatchBase(v9, HotPatchBase, v11, v10) )
    return 3221225595LL;
  memset(v36, 0, 0x68uLL);
  v36[0] = a2;
  v36[1] = HotPatchBase;
  LODWORD(v36[3]) = (v11 >> 12) + ((v11 & 0xFFF) != 0);
  memset(v37, 0, 0x68uLL);
  v37[0] = a1;
  LODWORD(v37[3]) = (v10 >> 12) + ((v10 & 0xFFF) != 0);
  if ( *(_QWORD *)(a2 + 280) )
  {
    result = VslDetermineHotPatchUndoTableSize(*(_QWORD *)(a2 + 48), &v30);
    if ( (int)result < 0 )
      return result;
    v12 = v30;
    if ( v30 )
    {
      v33[5] = MiAllocatePool(256, v30, 0x54555048u);
      if ( !v33[5] )
        return 3221225626LL;
      SectionStrongImageReference = VslObtainHotPatchUndoTable(*(PVOID *)(a2 + 48), v33[5], v12);
      if ( SectionStrongImageReference < 0 )
      {
        v18 = 0;
        goto LABEL_64;
      }
    }
  }
  if ( (a4 & 1) != 0 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  v34 = 0LL;
  v15 = SessionVm;
  v16 = *(_DWORD *)(a1 + 196);
  v17 = *(void **)(a2 + 136);
  v35 = v17;
  if ( (v16 & 0x20) == 0 && v17 != (void *)1 )
  {
    if ( (a4 & 1) != 0 )
    {
      v34 = MiSessionLookupImage(*(_QWORD *)(a2 + 48));
      v17 = (void *)v34[11];
      v35 = v17;
    }
    v6 = (void *)MiAddEntryToImportList(v17, a1);
    if ( !v6 )
    {
      SectionStrongImageReference = -1073741670;
      goto LABEL_20;
    }
  }
  SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v36, v15);
  if ( SectionStrongImageReference < 0 )
    goto LABEL_20;
  SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v37, v15);
  if ( SectionStrongImageReference < 0 )
    goto LABEL_20;
  v19 = *(unsigned int *)(HotPatchBase + 24);
  v33[0] = v36;
  v20 = v8 + v19;
  v33[4] = v20;
  v33[1] = v37;
  v33[2] = a3;
  v30 = !(a4 & 1);
  SectionStrongImageReference = MiIdentifyPatchImageDataPages(v33, !(a4 & 1));
  if ( SectionStrongImageReference < 0 )
    goto LABEL_20;
  SectionStrongImageReference = MiIdentifyImageDiscardablePages(v36);
  if ( SectionStrongImageReference < 0 )
    goto LABEL_20;
  if ( (*(_BYTE *)(a1 + 196) & 0x20) == 0 && (a4 & 1) != 0 )
  {
    SectionStrongImageReference = MiCheckPatchesInSupportedSections(v33);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_20;
  }
  SectionStrongImageReference = MiPrepareDriverForHotPatch(v33);
  if ( SectionStrongImageReference < 0 )
    goto LABEL_20;
  HotPatchBase = *(_QWORD *)(a3 + 96);
  SectionStrongImageReference = MiGetSectionStrongImageReference(HotPatchBase, v21, v22, v23);
  if ( SectionStrongImageReference < 0 )
    goto LABEL_20;
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
  {
    v24 = HotPatchBase;
    goto LABEL_46;
  }
  if ( (MiFlags & 0x40000) == 0
    || !(unsigned int)RtlPatchContainsCallTarget(v8, v20)
    || (SectionStrongImageReference = MiAllocateKernelCfgBitmapPageTables(
                                        *(_QWORD *)(a1 + 48),
                                        *(unsigned int *)(a1 + 64),
                                        0LL),
        SectionStrongImageReference >= 0) )
  {
    v24 = HotPatchBase;
    v25 = VslApplyHotPatch(
            *(_QWORD *)(HotPatchBase + 56),
            *(_QWORD *)(a1 + 112),
            *(_QWORD *)(a2 + 48),
            a2,
            *(_QWORD *)(a1 + 48),
            a1,
            v30 | 2u,
            0LL);
    SectionStrongImageReference = v25;
    if ( v25 < 0 )
    {
      if ( v25 == -1073740628 )
        KeBugCheckEx(0x1Au, 0x485019uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
      goto LABEL_20;
    }
    SectionStrongImageReference = MiApplyHotPatchToDriverDataPages(v33);
    if ( SectionStrongImageReference >= 0 )
    {
      if ( (*(_DWORD *)(a2 + 196) & 0x100) != 0 )
        v33[6] = RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "__PatchMainCallout__");
      if ( v33[6] )
      {
        LODWORD(v33[7]) = 0;
        SectionStrongImageReference = MiInvokePatchCallback(a1, &v33[6]);
        if ( SectionStrongImageReference < 0 )
          goto LABEL_20;
        v8 = v33[3];
        v31 = 1;
      }
      if ( (a4 & 1) != 0 )
      {
        MiLogHotPatchOperationStatus(
          *(_DWORD *)(a2 + 120),
          *(_DWORD *)(a2 + 156),
          a1 + 72,
          SectionStrongImageReference,
          3);
        v38 = 1;
        SectionStrongImageReference = MiActOnPatchInAllSessions(a2, a1, 0, (__int64)v33);
        if ( SectionStrongImageReference < 0 )
          goto LABEL_20;
        v8 = v33[3];
      }
LABEL_46:
      v26 = VslApplyHotPatch(
              *(_QWORD *)(v24 + 56),
              *(_QWORD *)(a1 + 112),
              *(_QWORD *)(a2 + 48),
              a2,
              *(_QWORD *)(a1 + 48),
              a1,
              v30,
              0LL);
      SectionStrongImageReference = v26;
      if ( v26 >= 0 )
      {
        if ( v33[6] )
        {
          LODWORD(v33[7]) = 1;
          MiInvokePatchCallback(a1, &v33[6]);
          v31 = 0;
          if ( (a4 & 1) != 0 )
            MiActOnPatchInAllSessions(a2, a1, 3, (__int64)&v33[6]);
          v8 = v33[3];
        }
        if ( v6 )
        {
          if ( (a4 & 1) != 0 )
            v34[11] = v6;
          else
            *(_QWORD *)(a2 + 136) = v6;
          MiFreeLoadedImportList(v35);
          v6 = 0LL;
        }
        *(_QWORD *)(a2 + 280) = a1;
        v27 = *(_DWORD *)(a1 + 196);
        if ( (v27 & 0x20) == 0 )
        {
          *(_QWORD *)(a1 + 280) = a2;
          *(_DWORD *)(a1 + 196) = v27 | 0x20;
          *(_DWORD *)(a1 + 312) = *(_DWORD *)(v8 + 8);
          v28 = (_QWORD *)(a1 + 296);
          v29 = *(_QWORD **)(a2 + 304);
          if ( *v29 != a2 + 296 )
            __fastfail(3u);
          *v28 = a2 + 296;
          *(_QWORD *)(a1 + 304) = v29;
          *v29 = v28;
          *(_QWORD *)(a2 + 304) = v28;
        }
        v18 = 0;
        goto LABEL_64;
      }
      if ( v26 == -1073740628 )
        KeBugCheckEx(0x1Au, 0x48501AuLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
    }
  }
LABEL_20:
  v18 = v38;
LABEL_64:
  MiUnlockDriverPages(v36);
  MiUnlockDriverPages(v37);
  if ( v33[5] )
    ExFreePoolWithTag((PVOID)v33[5], 0);
  if ( v6 )
    MiFreeLoadedImportList(v6);
  if ( v31 )
  {
    LODWORD(v33[7]) = 2;
    MiInvokePatchCallback(a1, &v33[6]);
  }
  if ( v18 )
    MiActOnPatchInAllSessions(a2, a1, 2, (__int64)v33);
  return (unsigned int)SectionStrongImageReference;
}
