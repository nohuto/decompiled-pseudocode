/*
 * XREFs of CmpDoReOpenTransKey @ 0x14087F18C
 * Callers:
 *     CmpDoReDoCreateKey @ 0x14087ED14 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x14087EE40 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x14087EE9C (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x14087EF7C (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x14087EFD8 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x14087F048 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x14087F0B8 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x14087F118 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, int a3, _QWORD *a4)
{
  __int128 v4; // xmm1
  int v9; // esi
  char v10; // r14
  unsigned __int16 v11; // dx
  bool v12; // zf
  HANDLE v13; // rdi
  NTSTATUS v14; // eax
  struct _DMA_ADAPTER *v15; // rbx
  char v16; // dl
  NTSTATUS v17; // eax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v25[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v26; // [rsp+88h] [rbp-78h]
  __int128 *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _OWORD v31[19]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *a2;
  v20 = a3;
  v25[1] = 0;
  v29 = 0;
  v23 = 0LL;
  v22 = v4;
  Handle = 0LL;
  v24 = 0LL;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) != 0;
  if ( !(_WORD)v4 )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v31, 0, 0x128uLL);
    LODWORD(v31[6]) = -1;
    *((_QWORD *)&v31[9] + 1) = &v31[9];
    *(_QWORD *)&v31[9] = &v31[9];
    memset((char *)&v31[13] + 8, 0, 0x50uLL);
    v27 = &v22;
    DWORD2(v31[1]) = 8;
    v25[0] = 48;
    v26 = 0LL;
    v28 = 4928;
    v30 = 0LL;
    v9 = ObOpenObjectByName((__int64)v25, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v31, (__int64)&Handle);
    CmpCleanupParseContext((__int64)v31, v10);
    if ( v9 >= 0 )
      break;
    v11 = v22;
    if ( (_WORD)v22 )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&v22 + 1) + 2 * ((unsigned __int64)v11 >> 1) - 2) == 92 )
          break;
        v12 = v11 == 2;
        v11 -= 2;
        LOWORD(v22) = v11;
      }
      while ( !v12 );
    }
    LOWORD(v24) = *(_WORD *)a2 - v11;
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&v22 + 1) + 2 * ((unsigned __int64)v11 >> 1);
    LOWORD(v22) = v11 - 2;
    if ( v11 == 2 )
    {
      v13 = Handle;
      goto LABEL_29;
    }
  }
  v13 = Handle;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v15 = (struct _DMA_ADAPTER *)Object;
  v9 = v14;
  if ( v14 >= 0 )
  {
    if ( !v10 )
      CmpLockRegistry();
    v16 = v10 ^ 1;
    if ( *(_QWORD *)(a1 + 64) != *((_QWORD *)v15->DmaOperations->AllocateAdapterChannel + 524) )
      goto LABEL_12;
    if ( v16 )
      CmpUnlockRegistry();
    *(_QWORD *)&v15[4].Version = a1 + 88;
    HalPutDmaAdapter(v15);
    v15 = 0LL;
    v16 = 0;
    if ( (_WORD)v24 )
    {
      memset(v31, 0, 0x128uLL);
      LODWORD(v31[6]) = -1;
      *((_QWORD *)&v31[9] + 1) = &v31[9];
      *(_QWORD *)&v31[9] = &v31[9];
      memset((char *)&v31[13] + 8, 0, 0x50uLL);
      v27 = &v24;
      DWORD2(v31[1]) = 8;
      v25[0] = 48;
      v26 = v13;
      v28 = 4928;
      v30 = 0LL;
      v9 = ObOpenObjectByName((__int64)v25, (__int64)CmKeyObjectType, 0, 0LL, v20, (__int64)v31, (__int64)&v23);
      CmpCleanupParseContext((__int64)v31, v10);
      v16 = 0;
      if ( v9 < 0
        || (Object = 0LL,
            v17 = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
            v15 = (struct _DMA_ADAPTER *)Object,
            v9 = v17,
            v16 = 0,
            v17 < 0) )
      {
LABEL_25:
        if ( v16 )
          CmpUnlockRegistry();
        goto LABEL_27;
      }
      if ( !v10 )
      {
        CmpLockRegistry();
        v16 = 1;
      }
      if ( *(_QWORD *)(a1 + 64) != *((_QWORD *)v15->DmaOperations->AllocateAdapterChannel + 524) )
      {
LABEL_12:
        v9 = -1073741762;
        goto LABEL_25;
      }
      if ( v16 )
        CmpUnlockRegistry();
      *(_QWORD *)&v15[4].Version = a1 + 88;
      HalPutDmaAdapter(v15);
      ZwClose(v13);
      v13 = v23;
      v16 = 0;
    }
    *a4 = v13;
    v9 = 0;
    v13 = 0LL;
    v15 = 0LL;
    goto LABEL_25;
  }
LABEL_27:
  if ( v15 )
    HalPutDmaAdapter(v15);
LABEL_29:
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v9;
}
