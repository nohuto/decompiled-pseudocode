/*
 * XREFs of ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x1800D9780
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x1800D9854 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D994C (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::DuplicateSharedResource(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // ebx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-14h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0;
  v15 = 0;
  v17 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v8 = CChannel::MilTypeFromDwmType(a3, &v18);
  v10 = v8;
  if ( v8 < 0 )
  {
    v14 = 781;
    goto LABEL_8;
  }
  v12 = NtDCompositionReferenceSharedResourceOnDwmChannel(*(unsigned int *)(a1 + 56), a2, v18, &v16, &v15);
  if ( v12 < 0 )
  {
    v10 = v12 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180345A70, 2LL, v10, 0x314u);
    goto LABEL_4;
  }
  v8 = CHandleTable::DuplicateHandleOnTarget(v11, v16, v15, v18, a1, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    v14 = 795;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180345A70, 2LL, v8, v14);
  }
LABEL_4:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v17);
  return v10;
}
