/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1406D2148
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1405E033C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E0AC4 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteBlob @ 0x1405EA09C (AlpcpDeleteBlob.c)
 *     MmGetSectionInformation @ 0x140620F30 (MmGetSectionInformation.c)
 *     AlpcpCreateSectionView @ 0x1406D2558 (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x1406D43DC (AlpcpCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceView @ 0x1408C1BA4 (AlpcpDereferenceView.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(PVOID Object, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  int SectionInformation; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  ULONG_PTR v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]
  PVOID v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v19 = a3;
  v3 = *(void **)(a2 + 8);
  BugCheckParameter2 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  v18 = 0LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &v18,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation((__int64)v18, 0, (__int64)&v16);
    if ( SectionInformation >= 0 )
    {
      if ( (DWORD2(v16) & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v8 = (unsigned int)(AlpcpViewGranularity - 1);
        v9 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v10 = v9 & (v8 + *(unsigned int *)(a2 + 16));
        v11 = v9 & (v8 + *(_QWORD *)(a2 + 24));
        if ( v11 + v10 >= v10 )
        {
          if ( v11 + v10 <= v17 )
          {
            SectionInformation = AlpcpCreateSection(Object, v17, (__int64)&BugCheckParameter2);
            if ( SectionInformation >= 0 )
            {
              v12 = BugCheckParameter2;
              SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, Object, (__int64)&v15);
              if ( SectionInformation >= 0 )
              {
                v13 = v15;
                *(_DWORD *)a2 = 48;
                *(_QWORD *)(a2 + 32) = *(_QWORD *)(v13 + 40);
                v14 = *(_QWORD *)(v13 + 48);
                *(_QWORD *)(a2 + 40) = 0LL;
                *(_QWORD *)(a2 + 24) = v14;
                *(_QWORD *)(v19 + 40) = v13;
                AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v13 + 16));
                ++*(_DWORD *)(v13 + 76);
                AlpcpUnlockBlob(*(_QWORD *)(v13 + 16));
              }
              else if ( AlpcpDeleteBlob(v12) )
              {
                AlpcpDereferenceView(v12);
              }
              AlpcpDereferenceView(v12);
            }
          }
          else
          {
            SectionInformation = -1073741670;
          }
        }
        else
        {
          SectionInformation = -1073741811;
        }
      }
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v18);
  }
  return (unsigned int)SectionInformation;
}
