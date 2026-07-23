/*
 * XREFs of MiApplyDriverHotPatch @ 0x1408C57B4
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     VslApplyHotPatch @ 0x1404F6B90 (VslApplyHotPatch.c)
 *     MiAddEntryToImportList @ 0x140540074 (MiAddEntryToImportList.c)
 *     MiFreeLoadedImportList @ 0x140760F74 (MiFreeLoadedImportList.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14088C594 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x14088CEB8 (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x1408C173C (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x1408C17C0 (MiUnlockDriverPages.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408C7248 (MiIdentifyPatchImageWritablePages.c)
 *     MiPrepareDriverForHotPatch @ 0x1408C9F48 (MiPrepareDriverForHotPatch.c)
 *     MiGetSectionStrongImageReference @ 0x1408D48D0 (MiGetSectionStrongImageReference.c)
 *     RtlFindHotPatchBase @ 0x140917B10 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x140917B40 (RtlFindHotPatchInformation.c)
 *     RtlApplyHotPatch @ 0x1409AF8D4 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiApplyDriverHotPatch(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v5; // r14
  NTSTATUS result; // eax
  __int64 HotPatchInformation; // r13
  unsigned int v8; // ecx
  void *v9; // r15
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  PVOID Pool; // rax
  int SectionStrongImageReference; // ebx
  void *v15; // r12
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v21; // eax
  int v22; // eax
  char v23; // [rsp+28h] [rbp-108h]
  int v24; // [rsp+30h] [rbp-100h]
  int v25; // [rsp+90h] [rbp-A0h]
  int v26; // [rsp+98h] [rbp-98h]
  __int64 v27; // [rsp+A0h] [rbp-90h]
  __int64 v28[2]; // [rsp+B0h] [rbp-80h] BYREF
  int v29; // [rsp+C0h] [rbp-70h]
  __int64 v30; // [rsp+C4h] [rbp-6Ch]
  int v31; // [rsp+CCh] [rbp-64h]
  __int64 v32; // [rsp+D0h] [rbp-60h]
  __int64 v33; // [rsp+D8h] [rbp-58h]
  __int64 v34; // [rsp+E0h] [rbp-50h]
  __int64 v35; // [rsp+E8h] [rbp-48h]
  __int64 v36[2]; // [rsp+F0h] [rbp-40h] BYREF
  int v37; // [rsp+100h] [rbp-30h]
  __int64 v38; // [rsp+104h] [rbp-2Ch]
  int v39; // [rsp+10Ch] [rbp-24h]
  __int64 v40; // [rsp+110h] [rbp-20h]
  __int64 v41; // [rsp+118h] [rbp-18h]
  __int64 v42; // [rsp+120h] [rbp-10h]
  __int64 v43; // [rsp+128h] [rbp-8h]
  __int64 v44[10]; // [rsp+130h] [rbp+0h] BYREF
  unsigned int v45; // [rsp+198h] [rbp+68h] BYREF
  __int64 HotPatchBase; // [rsp+1A0h] [rbp+70h]

  v2 = *(_DWORD *)(a2 + 196);
  v38 = 0LL;
  v39 = 0;
  v41 = 0LL;
  v5 = 0LL;
  v43 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v33 = 0LL;
  v35 = 0LL;
  v45 = 0;
  if ( (v2 & 0x20) != 0 )
    return -1073741800;
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)(a1 + 48));
  HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
  if ( !HotPatchBase )
    return -1073741701;
  v8 = *(_DWORD *)(a2 + 64);
  v36[0] = a2;
  v40 = 0LL;
  v42 = 0LL;
  v9 = 0LL;
  v10 = (v8 >> 12) + ((v8 & 0xFFF) != 0);
  v36[1] = HotPatchBase;
  v11 = *(_DWORD *)(a1 + 64);
  v37 = v10;
  v28[0] = a1;
  v28[1] = 0LL;
  v29 = (v11 >> 12) + ((v11 & 0xFFF) != 0);
  v32 = 0LL;
  v34 = 0LL;
  if ( !*(_QWORD *)(a2 + 280) )
    goto LABEL_11;
  result = VslDetermineHotPatchUndoTableSize(*(_QWORD *)(a2 + 48), &v45);
  if ( result < 0 )
    return result;
  v12 = v45;
  if ( !v45 )
    goto LABEL_11;
  Pool = MiAllocatePool(256, v45, 0x54555048u);
  v9 = Pool;
  if ( !Pool )
    return -1073741670;
  SectionStrongImageReference = VslObtainHotPatchUndoTable(*(PVOID *)(a2 + 48), (__int64)Pool, v12);
  if ( SectionStrongImageReference >= 0 )
  {
LABEL_11:
    v15 = *(void **)(a2 + 136);
    if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0
      || v15 == (void *)1
      || (v5 = (void *)MiAddEntryToImportList(*(__int64 **)(a2 + 136), a1)) != 0LL )
    {
      SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v36);
      if ( SectionStrongImageReference >= 0 )
      {
        SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v28);
        if ( SectionStrongImageReference >= 0 )
        {
          SectionStrongImageReference = MiIdentifyPatchImageWritablePages(v28);
          if ( SectionStrongImageReference >= 0 )
          {
            if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0
              || (v44[1] = 0LL,
                  v16 = *(unsigned int *)(HotPatchBase + 24),
                  v44[0] = (__int64)MiCheckHotPatchApplicable,
                  v44[2] = (__int64)v28,
                  SectionStrongImageReference = RtlApplyHotPatch(
                                                  *(_QWORD *)(v36[0] + 48),
                                                  *(_QWORD *)(v36[0] + 48),
                                                  0,
                                                  0,
                                                  0LL,
                                                  v23,
                                                  v24,
                                                  *(_QWORD *)(v28[0] + 48),
                                                  *(_QWORD *)(v28[0] + 48),
                                                  0LL,
                                                  0,
                                                  0LL,
                                                  HotPatchInformation,
                                                  HotPatchInformation + v16,
                                                  2,
                                                  0LL,
                                                  0LL,
                                                  (__int64)v44,
                                                  v25,
                                                  v26,
                                                  v27),
                  SectionStrongImageReference >= 0) )
            {
              SectionStrongImageReference = MiPrepareDriverForHotPatch(v36, v28, HotPatchInformation, v9);
              if ( SectionStrongImageReference >= 0 )
              {
                v17 = *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96);
                SectionStrongImageReference = MiGetSectionStrongImageReference(v17, v18, v19, v20);
                if ( SectionStrongImageReference >= 0 )
                {
                  v21 = VslApplyHotPatch(
                          *(_QWORD *)(v17 + 56),
                          *(_QWORD *)(a1 + 112),
                          *(_QWORD *)(a2 + 48),
                          a2,
                          *(_QWORD *)(a1 + 48),
                          a1,
                          0LL);
                  SectionStrongImageReference = v21;
                  if ( v21 >= 0 )
                  {
                    if ( v5 )
                    {
                      *(_QWORD *)(a2 + 136) = v5;
                      MiFreeLoadedImportList(v15);
                      v5 = 0LL;
                    }
                    *(_QWORD *)(a2 + 280) = a1;
                    v22 = *(_DWORD *)(a1 + 196);
                    if ( (v22 & 0x20) == 0 )
                    {
                      *(_QWORD *)(a1 + 280) = a2;
                      *(_DWORD *)(a1 + 196) = v22 | 0x20;
                    }
                  }
                  else if ( v21 == -1073740628 )
                  {
                    KeBugCheckEx(0x1Au, 0x485018uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      SectionStrongImageReference = -1073741670;
    }
  }
  MiUnlockDriverPages(v36);
  MiUnlockDriverPages(v28);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v5 )
    MiFreeLoadedImportList(v5);
  return SectionStrongImageReference;
}
