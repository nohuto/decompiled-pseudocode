/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00E710C
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00E6B90 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00E6F80 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C013FF6C (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00E16CC (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1C00E6A0C (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00E72F4 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___ @ 0x1C00E73F8 (unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___--_unique_ptr_UmfdAllocatio.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00E741C (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C00E7604 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1C00E7624 (-TryProbeForRead@@YA_NPEAXII@Z.c)
 */

char *__fastcall UmfdAllocation::ObtainKernelmodeAllocation(
        int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned __int8 (__fastcall *a6)(void *, __int64, _QWORD))
{
  PVOID v6; // rbx
  struct UmfdAllocation *v11; // rdi
  unsigned int v12; // r8d
  _DWORD *v13; // rax
  _DWORD *v14; // rdi
  PVOID v15; // rbx
  struct UmfdAllocation *v16; // rax
  char *v17; // rdi
  _DWORD *v19; // [rsp+30h] [rbp-38h] BYREF

  v6 = UmfdAllocation::s_allocationLookupLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v11 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( a5 )
    *a5 = 0;
  if ( v11 )
  {
    if ( UmfdAllocation::_ValidateAllocationPair(a1, a2, (__int64)v11, a3, a4, a6) )
      return (char *)v11 + 28;
    UmfdAllocation::ReleaseKernelmodeAllocation((char *)v11 + 28);
  }
  else if ( TryProbeForRead(a3, a4, v12) && a4 + 28 >= a4 )
  {
    v13 = EngAllocMem(0, a4 + 28, 0x61646647u);
    v19 = v13;
    v14 = v13;
    if ( !v13
      || (v13[1] = a1,
          *((_QWORD *)v13 + 1) = a2,
          v13[6] = a4,
          *v13 = 1,
          *((_QWORD *)v13 + 2) = a3,
          !TryCopyMemoryFromProbedPointer(v13 + 7, a3, a4)) )
    {
      v17 = 0LL;
LABEL_13:
      unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___(&v19);
      return v17;
    }
    v15 = UmfdAllocation::s_allocationLookupLock;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    v16 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
    if ( v16 )
    {
      v17 = (char *)v16 + 28;
      if ( UmfdAllocation::_ValidateAllocationPair(a1, a2, (__int64)v16, a3, a4, a6) )
      {
LABEL_22:
        ExReleasePushLockExclusiveEx(v15, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_13;
      }
      UmfdAllocation::ReleaseKernelmodeAllocation(v17);
    }
    else if ( NSInstrumentation::CPointerHashTable::Insert(
                (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
                a3,
                v14 + 7) )
    {
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
      v19 = 0LL;
      if ( a5 )
        *a5 = 1;
      v17 = (char *)(v14 + 7);
      goto LABEL_13;
    }
    v17 = 0LL;
    goto LABEL_22;
  }
  return 0LL;
}
