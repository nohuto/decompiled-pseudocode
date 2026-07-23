/*
 * XREFs of CmpDoReOpenTransKey @ 0x140882410
 * Callers:
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1405CD898 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoCreateKey @ 0x140881FCC (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x1408820BC (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x140882118 (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x140882200 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x14088225C (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x1408822CC (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x14088233C (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x14088239C (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpSplitParentKeyName @ 0x1405CD168 (CmpSplitParentKeyName.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __m128i *a2, int a3, _QWORD *a4)
{
  __m128i v4; // xmm1
  int v9; // esi
  char v10; // r14
  HANDLE v11; // rdi
  NTSTATUS v12; // eax
  struct _DMA_ADAPTER *v13; // rbx
  char v14; // dl
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  void *v20; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v23; // [rsp+78h] [rbp-88h]
  __m128i *v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  __int128 v27; // [rsp+90h] [rbp-70h]
  __m128i v28; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v29[19]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *a2;
  v18 = a3;
  v22[1] = 0;
  v26 = 0;
  v20 = 0LL;
  v21 = v4;
  Handle = 0LL;
  v28 = 0LL;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) != 0;
  if ( !v4.m128i_i16[0] )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v29, 0, 0x128uLL);
    LODWORD(v29[6]) = -1;
    *((_QWORD *)&v29[9] + 1) = &v29[9];
    *(_QWORD *)&v29[9] = &v29[9];
    memset((char *)&v29[13] + 8, 0, 0x50uLL);
    v24 = &v21;
    DWORD2(v29[1]) = 8;
    v22[0] = 48;
    v23 = 0LL;
    v25 = 4928;
    v27 = 0LL;
    v9 = ObOpenObjectByName((__int64)v22, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v29, (__int64)&Handle);
    CmpCleanupParseContext((__int64)v29, v10);
    if ( v9 >= 0 )
      break;
    CmpSplitParentKeyName(a2, &v21, &v28);
    if ( !v21.m128i_i16[0] )
    {
      v11 = Handle;
      goto LABEL_26;
    }
  }
  v11 = Handle;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v13 = (struct _DMA_ADAPTER *)Object;
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( !v10 )
      CmpLockRegistry();
    v14 = v10 ^ 1;
    if ( *(_QWORD *)(a1 + 64) != *((_QWORD *)v13->DmaOperations->AllocateAdapterChannel + 524) )
      goto LABEL_9;
    if ( v14 )
      CmpUnlockRegistry();
    *(_QWORD *)&v13[4].Version = a1 + 88;
    HalPutDmaAdapter(v13);
    v13 = 0LL;
    v14 = 0;
    if ( v28.m128i_i16[0] )
    {
      memset(v29, 0, 0x128uLL);
      LODWORD(v29[6]) = -1;
      *((_QWORD *)&v29[9] + 1) = &v29[9];
      *(_QWORD *)&v29[9] = &v29[9];
      memset((char *)&v29[13] + 8, 0, 0x50uLL);
      v24 = &v28;
      DWORD2(v29[1]) = 8;
      v22[0] = 48;
      v23 = v11;
      v25 = 4928;
      v27 = 0LL;
      v9 = ObOpenObjectByName((__int64)v22, (__int64)CmKeyObjectType, 0, 0LL, v18, (__int64)v29, (__int64)&v20);
      CmpCleanupParseContext((__int64)v29, v10);
      v14 = 0;
      if ( v9 < 0
        || (Object = 0LL,
            v15 = ObReferenceObjectByHandle(v11, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
            v13 = (struct _DMA_ADAPTER *)Object,
            v9 = v15,
            v14 = 0,
            v15 < 0) )
      {
LABEL_22:
        if ( v14 )
          CmpUnlockRegistry();
        goto LABEL_24;
      }
      if ( !v10 )
      {
        CmpLockRegistry();
        v14 = 1;
      }
      if ( *(_QWORD *)(a1 + 64) != *((_QWORD *)v13->DmaOperations->AllocateAdapterChannel + 524) )
      {
LABEL_9:
        v9 = -1073741762;
        goto LABEL_22;
      }
      if ( v14 )
        CmpUnlockRegistry();
      *(_QWORD *)&v13[4].Version = a1 + 88;
      HalPutDmaAdapter(v13);
      ZwClose(v11);
      v11 = v20;
      v14 = 0;
    }
    *a4 = v11;
    v9 = 0;
    v11 = 0LL;
    v13 = 0LL;
    goto LABEL_22;
  }
LABEL_24:
  if ( v13 )
    HalPutDmaAdapter(v13);
LABEL_26:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v9;
}
