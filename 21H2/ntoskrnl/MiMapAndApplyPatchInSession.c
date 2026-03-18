/*
 * XREFs of MiMapAndApplyPatchInSession @ 0x140975FF0
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 *     MiApplySingleSessionPatch @ 0x140972700 (MiApplySingleSessionPatch.c)
 * Callees:
 *     KeIsImageIATProtected @ 0x14056A188 (KeIsImageIATProtected.c)
 *     MiFreeLoadedImportList @ 0x1406EB3D4 (MiFreeLoadedImportList.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140971708 (MiApplyHotPatchToDriverDataPages.c)
 *     MiInvokePatchCallback @ 0x140973F50 (MiInvokePatchCallback.c)
 *     MiAddEntryToImportList @ 0x140978260 (MiAddEntryToImportList.c)
 *     RtlFindHotPatchBase @ 0x1409C0550 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1409C0580 (RtlFindHotPatchInformation.c)
 */

__int64 __fastcall MiMapAndApplyPatchInSession(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r12
  void *v7; // rdi
  int v8; // ebx
  int IsImageIATProtected; // eax
  int v10; // ebp
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  __int64 v13; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(void **)(a2 + 88);
  v16 = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = (void *)MiAddEntryToImportList(v3, a1);
  if ( v7 )
  {
    IsImageIATProtected = KeIsImageIATProtected(**(_QWORD **)a3);
    v8 = MmLoadSystemImageEx(
           a1 + 72,
           0LL,
           0LL,
           0LL,
           IsImageIATProtected != 0 ? 1879048193 : 1610612737,
           &BugCheckParameter2,
           &v16);
    if ( v8 < 0 )
      goto LABEL_11;
    v10 = 1;
    HotPatchInformation = RtlFindHotPatchInformation(*(_QWORD *)(a1 + 48));
    *(_QWORD *)(a3 + 24) = HotPatchInformation;
    HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
    *(_QWORD *)(a3 + 32) = v13 + *(unsigned int *)(HotPatchBase + 24);
    v8 = MiApplyHotPatchToDriverDataPages(a3);
    if ( v8 >= 0 )
    {
      if ( !*(_QWORD *)(a3 + 48) || (v8 = MiInvokePatchCallback(a1, a3 + 48), v8 >= 0) )
      {
        v10 = 0;
        *(_QWORD *)(a2 + 88) = v7;
        v8 = 0;
        v7 = v3;
      }
    }
    MiDriverLoadSucceeded(a1, *(_QWORD *)(a1 + 112), 0LL, 0LL, 0LL, 0);
    if ( v10 )
      MmUnloadSystemImage(BugCheckParameter2);
    if ( v7 )
LABEL_11:
      MiFreeLoadedImportList(v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
