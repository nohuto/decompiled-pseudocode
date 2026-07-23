/*
 * XREFs of IopDeleteFileObjectExtension @ 0x140285B3C
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200960 (PsReleaseSiloHardReference.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCleanupNotifications @ 0x14037BFA8 (IopCleanupNotifications.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14069C490 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140907D30 (PspAdjustKeepAliveCountProcess.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFileObjectExtension(__int64 a1)
{
  _DWORD *v1; // r14
  __int64 i; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  void *v6; // rcx
  _QWORD *v7; // rsi
  struct _DMA_ADAPTER *v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  ULONG v11; // edx
  void *v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rsi
  void *v15; // rcx
  _BYTE *v16; // rbp
  _QWORD *v17; // r15
  KIRQL v18; // r12
  __int64 v19; // r9
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  char v22; // [rsp+50h] [rbp+8h]

  v1 = *(_DWORD **)(a1 + 208);
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 9; ++i )
  {
    v4 = *(_QWORD **)&v1[2 * i + 2];
    if ( !v4 )
      continue;
    if ( i == 4 )
    {
      v14 = (_QWORD *)*v4;
      while ( v14 != v4 )
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        ExFreePoolWithTag(v15, 0);
      }
      goto LABEL_22;
    }
    if ( !i )
    {
      v13 = (void *)v4[1];
      if ( v13 )
        ObDereferenceObjectDeferDelete(v13);
      goto LABEL_22;
    }
    if ( i != 5 )
    {
      switch ( i )
      {
        case 1LL:
          v5 = (_QWORD *)v4[2];
          while ( v5 )
          {
            v6 = v5;
            v5 = (_QWORD *)*v5;
            ExFreePoolWithTag(v6, 0);
          }
          v7 = (_QWORD *)v4[3];
          while ( v7 )
          {
            v16 = (_BYTE *)v7[3];
            v17 = v7;
            v7 = (_QWORD *)*v7;
            v18 = KeAcquireSpinLockRaiseToDpc(&qword_140C45BD0);
            v22 = v16[18];
            if ( v16[16] == 1 )
              v16[17] = 1;
            else
              ExFreePoolWithTag(v16, 0);
            KeReleaseSpinLock(&qword_140C45BD0, v18);
            if ( *((_DWORD *)v17 + 4) )
            {
              LOBYTE(v19) = v22;
              PspAdjustKeepAliveCountProcess(v17[1], 0xFFFFFFFFLL, a1, v19);
              HalPutDmaAdapter((PADAPTER_OBJECT)v17[1]);
            }
            ExFreePoolWithTag(v17, 0);
          }
          v8 = (struct _DMA_ADAPTER *)v4[1];
          if ( v8 )
            HalPutDmaAdapter(v8);
          break;
        case 6LL:
          ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v4);
          continue;
        case 2LL:
          v20 = (_QWORD *)v4[5];
          if ( v20 )
          {
            do
            {
              v21 = (_QWORD *)v20[5];
              ExFreePoolWithTag(v20, 0);
              v20 = v21;
            }
            while ( v21 );
          }
          break;
        case 7LL:
          v9 = *((_DWORD *)v4 + 1);
          if ( (v9 & 1) != 0 )
          {
            v12 = (void *)v4[1];
            *((_DWORD *)v4 + 1) = v9 & 0xFFFFFFFE;
            PsReleaseSiloHardReference(v12);
          }
          v10 = (_QWORD *)v4[1];
          v11 = 1884516169;
LABEL_29:
          ObfDereferenceObjectWithTag(v10, v11);
          break;
        case 8LL:
          v10 = (_QWORD *)*v4;
          v11 = 1866886985;
          goto LABEL_29;
      }
LABEL_22:
      ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
      continue;
    }
    FsRtlFreeExtraCreateParameter(v4);
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
