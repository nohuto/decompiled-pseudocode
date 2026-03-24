/*
 * XREFs of ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x1800D05E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x18005DF3C (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x18005EE38 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 */

__int64 __fastcall CChannel::CreateSharedResource(__int64 a1, unsigned int a2, _DWORD *a3, _QWORD *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  HANDLE v13; // rax
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-30h]
  int v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+34h] [rbp-1Ch] BYREF
  int v19; // [rsp+38h] [rbp-18h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+20h] BYREF

  hObject = 0LL;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  v21 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v8 = CChannel::MilTypeFromDwmType(a2, &v22);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = NtDCompositionCreateSharedResourceHandle(v22, &hObject);
    if ( v11 < 0 )
    {
      v10 = v11 | 0x10000000;
      v16 = 713;
    }
    else
    {
      v12 = NtDCompositionReferenceSharedResourceOnDwmChannel(*(unsigned int *)(a1 + 56), hObject, v22, &v18, &v17);
      if ( v12 >= 0 )
      {
        v8 = CHandleTable::DuplicateHandleOnTarget(v9, v18, v17, v22, (CChannel *)a1, &v19);
        v10 = v8;
        if ( v8 >= 0 )
        {
          v13 = hObject;
          hObject = 0LL;
          *a4 = v13;
          *a3 = v19;
          goto LABEL_6;
        }
        v16 = 727;
        goto LABEL_12;
      }
      v10 = v12 | 0x10000000;
      v16 = 720;
    }
    v15 = v10;
    goto LABEL_13;
  }
  v16 = 712;
LABEL_12:
  v15 = v8;
LABEL_13:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v15, v16, 0LL);
  if ( hObject )
    CloseHandle(hObject);
LABEL_6:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
  return v10;
}
