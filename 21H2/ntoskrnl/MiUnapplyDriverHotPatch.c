/*
 * XREFs of MiUnapplyDriverHotPatch @ 0x1409779A4
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x140971650 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MiDetachSessionGlobal @ 0x14021803C (MiDetachSessionGlobal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VslRevertHotPatch @ 0x14054F4CC (VslRevertHotPatch.c)
 *     MiDereferenceSessionGlobal @ 0x1405994CC (MiDereferenceSessionGlobal.c)
 *     MiAttachToSessionForBaseImage @ 0x1405A2D30 (MiAttachToSessionForBaseImage.c)
 *     MiUnlockDriverPages @ 0x14080C400 (MiUnlockDriverPages.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140931ED4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x1409682E4 (MiPrepareDriverPatchState.c)
 *     MiIdentifyImageDiscardablePages @ 0x14097389C (MiIdentifyImageDiscardablePages.c)
 *     MiLockHotPatchUndoPages @ 0x14097469C (MiLockHotPatchUndoPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnapplyDriverHotPatch(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  __int64 *v6; // r14
  __int64 v7; // rcx
  void *v8; // rdi
  SIZE_T v9; // rbx
  _DWORD *v10; // r9
  unsigned __int64 SessionVm; // rax
  __int64 v12; // r15
  PVOID Pool; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int64 v16[14]; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v17[3]; // [rsp+A0h] [rbp-9h] BYREF

  v15[0] = 0;
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, 0x68uLL);
  v4 = *(_DWORD *)(a1 + 64);
  v16[0] = a1;
  v5 = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  LODWORD(v16[3]) = v5;
  LODWORD(v9) = VslDetermineHotPatchUndoTableSize(v7, v15);
  if ( (v9 & 0x80000000) == 0LL )
  {
    v9 = v15[0];
    if ( v15[0] )
    {
      if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
      {
        KiStackAttachProcess((_KPROCESS *)xmmword_140C533C8, 0LL, (__int64)v17, v10);
        v6 = MiAttachToSessionForBaseImage(a1);
        SessionVm = MiGetSessionVm();
      }
      else
      {
        SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
      }
      v12 = SessionVm;
      Pool = MiAllocatePool(256, v9, 0x54555048u);
      v8 = Pool;
      if ( Pool )
      {
        LODWORD(v9) = VslObtainHotPatchUndoTable(*(PVOID *)(a1 + 48), (__int64)Pool, v9);
        if ( (v9 & 0x80000000) == 0LL )
        {
          LODWORD(v9) = MiPrepareDriverPatchState((__int64)v16, v12);
          if ( (v9 & 0x80000000) == 0LL )
          {
            LODWORD(v9) = MiIdentifyImageDiscardablePages((__int64 *)v16);
            if ( (v9 & 0x80000000) == 0LL )
            {
              LODWORD(v9) = MiLockHotPatchUndoPages((__int64)v16, (int)v8);
              if ( (v9 & 0x80000000) == 0LL )
                LODWORD(v9) = VslRevertHotPatch(*(_QWORD *)(a1 + 48), 0, 0);
            }
          }
        }
      }
      else
      {
        LODWORD(v9) = -1073741670;
      }
    }
  }
  MiUnlockDriverPages(v16);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v6 )
  {
    MiDetachSessionGlobal((__int64)&qword_140C533D8);
    MiDereferenceSessionGlobal(v6);
    KiUnstackDetachProcess((__int64)v17, 0LL);
  }
  if ( (v9 & 0x80000000) == 0LL )
    *(_QWORD *)(a2 + 120) = 0LL;
  return (unsigned int)v9;
}
