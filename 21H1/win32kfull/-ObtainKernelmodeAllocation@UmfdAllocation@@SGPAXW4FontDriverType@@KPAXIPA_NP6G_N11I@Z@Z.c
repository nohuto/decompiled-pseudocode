/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ @ 0x8D1AE (-CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z @ 0xE00D8 (-CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AAEXXZ @ 0x24AA6E (-CaptureKerningPairs@QueryFontTreeRequest@@AAEXXZ.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CGPAV1@PAX@Z @ 0x8CF36 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CGPAV1@PAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C (-Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YG_NPAX0I@Z @ 0x8D176 (-TryCopyMemoryFromProbedPointer@@YG_NPAX0I@Z.c)
 *     ?TryProbeForRead@@YG_NPAXII@Z @ 0x8D2F6 (-TryProbeForRead@@YG_NPAXII@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z @ 0xD3290 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CG_NW4FontDriverType@@KPAV1@PAXIP6G_N22I@Z@Z @ 0xE05B8 (-_ValidateAllocationPair@UmfdAllocation@@CG_NW4FontDriverType@@KPAV1@PAXIP6G_N22I@Z@Z.c)
 */

char *__fastcall UmfdAllocation::ObtainKernelmodeAllocation(
        int a1,
        int a2,
        void *a3,
        size_t MaxCount,
        _BYTE *a5,
        int a6)
{
  PVOID v6; // esi
  struct UmfdAllocation *v7; // ebx
  void *v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  void *v11; // edi
  PVOID v12; // esi
  struct UmfdAllocation *v13; // eax
  void *v15; // [esp+0h] [ebp-18h]
  unsigned int v16; // [esp+0h] [ebp-18h]
  unsigned int v17; // [esp+0h] [ebp-18h]
  void *v18; // [esp+0h] [ebp-18h]
  void *v19; // [esp+0h] [ebp-18h]
  unsigned int v20; // [esp+4h] [ebp-14h]
  unsigned int *v21; // [esp+4h] [ebp-14h]
  unsigned int v22; // [esp+4h] [ebp-14h]
  ULONG cjMemSize; // [esp+Ch] [ebp-Ch] BYREF
  int v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h]

  v6 = UmfdAllocation::s_allocationLookupLock;
  v25 = a2;
  v24 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0);
  v7 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(v15);
  ExReleasePushLockSharedEx(v6, 0);
  KeLeaveCriticalRegion();
  if ( a5 )
    *a5 = 0;
  if ( v7 )
  {
    if ( (unsigned __int8)UmfdAllocation::_ValidateAllocationPair(v24, v25, v7, a3, MaxCount, a6) )
      return (char *)v7 + 20;
    UmfdAllocation::ReleaseKernelmodeAllocation((char *)v7 + 20);
    return 0;
  }
  if ( !TryProbeForRead(v8, v16, v20) )
    return 0;
  cjMemSize = 0;
  if ( (ULongAdd(20, MaxCount, (int *)&cjMemSize, v17, v21) & 0x80000000) != 0 )
    return 0;
  v9 = EngAllocMem(0, cjMemSize, 0x61646647u);
  v10 = v9;
  if ( v9 )
  {
    v9[1] = v24;
    v9[2] = v25;
    v9[4] = MaxCount;
    *v9 = 1;
    v9[3] = a3;
    v11 = v9 + 5;
    if ( TryCopyMemoryFromProbedPointer(MaxCount, v18, v22) )
    {
      v12 = UmfdAllocation::s_allocationLookupLock;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v12, 0);
      v13 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(v19);
      if ( v13 )
      {
        v11 = (char *)v13 + 20;
        if ( (unsigned __int8)UmfdAllocation::_ValidateAllocationPair(v24, v25, v13, a3, MaxCount, a6) )
          goto LABEL_23;
        UmfdAllocation::ReleaseKernelmodeAllocation(v11);
      }
      else if ( NSInstrumentation::CPointerHashTable::Insert(UmfdAllocation::s_allocationLookup, a3, v10 + 5) )
      {
        ExReleasePushLockExclusiveEx(v12, 0);
        KeLeaveCriticalRegion();
        v10 = 0;
        if ( a5 )
          *a5 = 1;
        goto LABEL_12;
      }
      v11 = 0;
LABEL_23:
      ExReleasePushLockExclusiveEx(v12, 0);
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
  }
  v11 = 0;
LABEL_12:
  if ( v10 )
    EngFreeMem(v10);
  return (char *)v11;
}
