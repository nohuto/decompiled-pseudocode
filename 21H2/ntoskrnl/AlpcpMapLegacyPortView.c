/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1406A9428
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1406CFA9C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmGetSectionInformation @ 0x14068ABA0 (MmGetSectionInformation.c)
 *     AlpcpCreateSectionView @ 0x1406A9838 (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x1406AB6BC (AlpcpCreateSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteBlob @ 0x1406D97FC (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceView @ 0x1408C1D04 (AlpcpDereferenceView.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(PVOID Object, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  int SectionInformation; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]
  PVOID v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h]
  __int64 v20; // [rsp+A8h] [rbp+58h] BYREF

  v19 = a3;
  v3 = *(void **)(a2 + 8);
  v20 = 0LL;
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
            SectionInformation = AlpcpCreateSection(Object, v17, (__int64)&v20);
            if ( SectionInformation >= 0 )
            {
              v12 = v20;
              SectionInformation = AlpcpCreateSectionView(v20, Object, (__int64)&v15);
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
              else if ( (unsigned __int8)AlpcpDeleteBlob(v12) )
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
