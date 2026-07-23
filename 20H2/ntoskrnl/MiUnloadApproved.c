/*
 * XREFs of MiUnloadApproved @ 0x14076DD68
 * Callers:
 *     MiDereferenceImports @ 0x14076DCDC (MiDereferenceImports.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x14032DA58 (MiSessionLookupImage.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x1406ADBB0 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(ULONG_PTR BugCheckParameter2)
{
  void *v1; // rdi
  __int16 v3; // ax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  int (*ExportedRoutineByName)(void); // rax
  unsigned __int64 v9; // rdx

  v1 = *(void **)(BugCheckParameter2 + 48);
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1) == 1 )
  {
    v5 = MiSessionLookupImage((unsigned __int64)v1);
    v6 = v5;
    if ( !v5 )
    {
      v9 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
      if ( (*(_DWORD *)(v9 + 4) & 2) == 0 )
        KeBugCheckEx(0x1Au, 0x2200uLL, BugCheckParameter2, (ULONG_PTR)v1, *(unsigned int *)(v9 + 8));
      return 0LL;
    }
    v7 = *((_DWORD *)v5 + 15);
    if ( v7 != 1 )
    {
      *((_DWORD *)v6 + 15) = v7 - 1;
      return 0LL;
    }
  }
  else
  {
    v3 = *(_WORD *)(BugCheckParameter2 + 108);
    if ( v3 != 1 )
    {
      *(_WORD *)(BugCheckParameter2 + 108) = v3 - 1;
      return 0LL;
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 196) & 0x20) == 0 )
  {
    ExportedRoutineByName = (int (*)(void))RtlFindExportedRoutineByName(v1, "DllUnload");
    if ( !ExportedRoutineByName || ExportedRoutineByName() < 0 )
      return 0LL;
  }
  return 1LL;
}
