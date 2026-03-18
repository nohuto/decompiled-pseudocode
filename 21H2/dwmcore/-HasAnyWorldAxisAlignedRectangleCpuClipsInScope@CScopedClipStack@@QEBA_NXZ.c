/*
 * XREFs of ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008B268
 * Callers:
 *     ?ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18008B19C (-ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008B2AC (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

char __fastcall CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope(CScopedClipStack *this)
{
  __int64 v1; // rcx
  char v2; // r8

  if ( !CScopedClipStack::HasCpuClipsInScope(this) )
    return 0;
  v2 = 1;
  if ( !*(_DWORD *)(112LL * (unsigned int)(*(_DWORD *)(v1 + 936) - 1) + *(_QWORD *)(v1 + 912) + 104) )
    return 0;
  return v2;
}
