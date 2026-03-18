/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1406101FC
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14062B0F8 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x14060D8B4 (AlpcpCreateSection.c)
 *     AlpcpCreateSectionView @ 0x1406105C8 (AlpcpCreateSectionView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     MmGetSectionInformation @ 0x140661AB0 (MmGetSectionInformation.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(char *Object, __int64 a2, __int64 a3)
{
  void *v3; // r14
  int SectionInformation; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+50h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+A8h] [rbp+58h] BYREF

  v18 = a3;
  v3 = *(void **)(a2 + 8);
  BugCheckParameter2 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  DmaAdapter = 0LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         (PVOID *)&DmaAdapter,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(DmaAdapter, 0LL, &v15);
    if ( SectionInformation >= 0 )
    {
      if ( (DWORD2(v15) & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v7 = (unsigned int)(AlpcpViewGranularity - 1);
        v8 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v9 = v8 & (v7 + *(unsigned int *)(a2 + 16));
        v10 = v8 & (v7 + *(_QWORD *)(a2 + 24));
        if ( v10 + v9 < v9 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v10 + v9 > v16 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(Object, 0, 0, v3, v16, &BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, Object, (__int64)&v14);
            if ( SectionInformation < 0 )
            {
              AlpcpDereferenceBlobEx(BugCheckParameter2);
            }
            else
            {
              v11 = v14;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v11 + 40);
              v12 = *(_QWORD *)(v11 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v12;
              *(_QWORD *)(v18 + 40) = v11;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v11 + 16));
              ++*(_DWORD *)(v11 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v11 + 16));
            }
          }
        }
      }
    }
    HalPutDmaAdapter(DmaAdapter);
  }
  return (unsigned int)SectionInformation;
}
