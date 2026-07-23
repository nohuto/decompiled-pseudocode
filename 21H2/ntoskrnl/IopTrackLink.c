/*
 * XREFs of IopTrackLink @ 0x1405DBA34
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x1405DBA34 (IopTrackLink.c)
 * Callees:
 *     RtlULongSub @ 0x14020DD44 (RtlULongSub.c)
 *     IoGetTransactionParameterBlock @ 0x14020DD70 (IoGetTransactionParameterBlock.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x14035CC60 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopTrackLink @ 0x1405DBA34 (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x1405DC3FC (IopGetSetObjectId.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     IopGetVolumeId @ 0x140733610 (IopGetVolumeId.c)
 *     IopMarshalIds @ 0x140891D00 (IopMarshalIds.c)
 *     IopSendMessageToTrackService @ 0x140892220 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140892E50 (IopSetRemoteLink.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopTrackLink(
        struct _FILE_OBJECT *Object,
        __int64 a2,
        void *a3,
        ULONG a4,
        struct _KEVENT *a5,
        KPROCESSOR_MODE AccessMode)
{
  struct _FILE_OBJECT *v9; // rsi
  unsigned int *PoolWithQuota_1; // rdi
  void *v11; // r10
  __int64 v12; // rax
  NTSTATUS v13; // ebx
  char v14; // r15
  int v15; // eax
  struct _KEVENT *v16; // r15
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int VolumeId; // eax
  int v22; // eax
  NTSTATUS v23; // eax
  int SetObjectId; // eax
  ULONG pulResult[2]; // [rsp+48h] [rbp-2C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-2B8h]
  __int64 v28; // [rsp+58h] [rbp-2B0h]
  struct _FILE_OBJECT *v29; // [rsp+60h] [rbp-2A8h]
  __int64 v30; // [rsp+68h] [rbp-2A0h]
  __int128 v31; // [rsp+70h] [rbp-298h] BYREF
  __int128 v32; // [rsp+80h] [rbp-288h]
  __int128 v33; // [rsp+90h] [rbp-278h]
  __int128 v34; // [rsp+A0h] [rbp-268h]
  _OWORD v35[6]; // [rsp+B0h] [rbp-258h] BYREF
  _OWORD v36[6]; // [rsp+110h] [rbp-1F8h] BYREF
  _OWORD v37[4]; // [rsp+170h] [rbp-198h] BYREF
  _DWORD Src[68]; // [rsp+1B0h] [rbp-158h] BYREF

  v28 = a2;
  v30 = (__int64)a5;
  P = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  memset(v36, 0, 20);
  memset(&v35[2], 0, 0x40uLL);
  memset(&v36[2], 0, 0x40uLL);
  memset(v35, 0, 20);
  memset(v37, 0, sizeof(v37));
  memset(Src, 0, sizeof(Src));
  pulResult[0] = 0;
  if ( AccessMode )
  {
    PoolWithQuota_1 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, a4);
    P = PoolWithQuota_1;
    memmove(PoolWithQuota_1, a3, a4);
  }
  else
  {
    PoolWithQuota_1 = (unsigned int *)a3;
    P = a3;
  }
  if ( !*(_QWORD *)PoolWithQuota_1 && AccessMode == 1 )
  {
LABEL_87:
    ExFreePoolWithTag(PoolWithQuota_1, 0);
    return 3221225485LL;
  }
  if ( RtlULongSub(a4, 0xCu, pulResult) < 0 )
  {
    if ( AccessMode )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return 3221225621LL;
  }
  else
  {
    v12 = PoolWithQuota_1[2];
    if ( pulResult[0] < (unsigned int)v12 )
    {
      if ( !AccessMode )
        return 3221225485LL;
      goto LABEL_87;
    }
    if ( (unsigned __int64)(v12 + 36) <= 0x100 )
    {
      if ( v11 )
      {
        *(_QWORD *)pulResult = 0LL;
        v13 = ObReferenceObjectByHandle(v11, 2u, (POBJECT_TYPE)IoFileObjectType, AccessMode, (PVOID *)pulResult, 0LL);
        v9 = *(struct _FILE_OBJECT **)pulResult;
        v29 = *(struct _FILE_OBJECT **)pulResult;
        if ( v13 < 0 )
        {
          if ( AccessMode )
            ExFreePoolWithTag(PoolWithQuota_1, 0);
          return (unsigned int)v13;
        }
      }
      if ( (Object->DeviceObject->Characteristics & 0x10) != 0 )
      {
        SetObjectId = IopGetSetObjectId(Object);
        v13 = SetObjectId;
        if ( SetObjectId == -1073741772 )
          goto LABEL_36;
        if ( SetObjectId < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&v35[4], 0x10uLL, 0) == 16 )
          goto LABEL_36;
        if ( IoGetTransactionParameterBlock(Object) )
          goto LABEL_78;
        if ( *(_QWORD *)PoolWithQuota_1 )
        {
          if ( IoGetTransactionParameterBlock(v9) )
            goto LABEL_78;
          if ( *(_QWORD *)PoolWithQuota_1 )
          {
            if ( (v9->DeviceObject->Characteristics & 0x10) != 0 )
            {
              v13 = IopGetSetObjectId(v9);
              if ( v13 < 0 )
                goto LABEL_14;
              v13 = IopGetSetObjectId(v9);
              if ( v13 < 0 )
                goto LABEL_14;
              IopMarshalIds(Src, v35, v37, PoolWithQuota_1);
              v16 = a5;
              v22 = IopTrackLink(Object, (__int64)a5, 0);
              goto LABEL_52;
            }
            VolumeId = IopGetVolumeId(v9);
LABEL_48:
            v13 = VolumeId;
            if ( VolumeId < 0 )
              goto LABEL_14;
            v13 = IopGetSetObjectId(v9);
            if ( v13 < 0 )
              goto LABEL_14;
            IopMarshalIds(Src, v35, v37, PoolWithQuota_1);
            v16 = a5;
            v13 = IopTrackLink(Object, (__int64)a5, 0);
            if ( v13 < 0 )
              goto LABEL_79;
            v22 = IopGetSetObjectId(Object);
LABEL_52:
            v13 = v22;
            if ( v22 >= 0 )
            {
              v36[2] = v35[2];
              v36[3] = v35[3];
              v36[4] = v35[4];
              v36[5] = v35[5];
              LOBYTE(v36[3]) = _mm_cvtsi128_si32((__m128i)v35[3]) | 1;
              v13 = IopGetSetObjectId(v9);
              if ( v13 < 0 )
                IopGetSetObjectId(Object);
            }
            goto LABEL_79;
          }
        }
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)PoolWithQuota_1 && IoGetTransactionParameterBlock(v9) )
          goto LABEL_78;
        v23 = IopSetRemoteLink(Object);
      }
      else
      {
        if ( *(_QWORD *)PoolWithQuota_1 )
        {
          if ( (v9->DeviceObject->Characteristics & 0x10) == 0 )
          {
            v14 = 0;
            v15 = IopGetSetObjectId(Object);
            v13 = v15;
            if ( v15 != -1073741772 )
            {
              if ( v15 < 0 )
              {
LABEL_14:
                v16 = a5;
LABEL_79:
                if ( AccessMode )
                  ExFreePoolWithTag(PoolWithQuota_1, 0);
                if ( v9 )
                  HalPutDmaAdapter((PADAPTER_OBJECT)v9);
                KeSetEvent(v16, 0, 0);
                return (unsigned int)v13;
              }
              if ( RtlCompareMemoryUlong(&v35[4], 0x10uLL, 0) != 16 )
              {
                if ( !IoGetTransactionParameterBlock(Object)
                  && (!*(_QWORD *)PoolWithQuota_1 || !IoGetTransactionParameterBlock(v9)) )
                {
                  v13 = IopGetVolumeId(v9);
                  if ( v13 >= 0 )
                  {
                    v13 = IopGetVolumeId(Object);
                    if ( v13 >= 0 )
                    {
                      v13 = IopGetSetObjectId(Object);
                      if ( v13 >= 0 )
                      {
                        v37[0] = v35[2];
                        v37[1] = v35[3];
                        v37[2] = v35[4];
                        v37[3] = v35[5];
                        v36[2] = v35[2];
                        v36[3] = v35[3];
                        v36[4] = v35[4];
                        v36[5] = v35[5];
                        v17 = *(_QWORD *)((char *)v35 + 4) - *(_QWORD *)((char *)v36 + 4);
                        if ( *(_QWORD *)((char *)v35 + 4) == *(_QWORD *)((char *)v36 + 4) )
                          v17 = *(_QWORD *)((char *)v35 + 12) - *(_QWORD *)((char *)v36 + 12);
                        if ( v17 )
                          LOBYTE(v36[3]) = LOBYTE(v35[3]) | 1;
                        v18 = IopGetSetObjectId(v9);
                        v13 = v18;
                        if ( v18 == -1073741635 || v18 == -1073741771 )
                        {
                          v13 = IopGetSetObjectId(v9);
                          if ( v13 >= 0 )
                            v13 = IopGetSetObjectId(v9);
                        }
                        if ( v13 < 0 )
                          goto LABEL_34;
                        v14 = 1;
                        v19 = *(_QWORD *)((char *)v35 + 4) - *(_QWORD *)((char *)v36 + 4);
                        if ( *(_QWORD *)((char *)v35 + 4) == *(_QWORD *)((char *)v36 + 4) )
                          v19 = *(_QWORD *)((char *)v35 + 12) - *(_QWORD *)((char *)v36 + 12);
                        if ( v19 )
                        {
                          IopMarshalIds(Src, v35, v37, PoolWithQuota_1);
                          v31 = v35[2];
                          v32 = v35[3];
                          v33 = v35[4];
                          v34 = v35[5];
                          LOBYTE(v32) = _mm_cvtsi128_si32((__m128i)v35[3]) & 0xFE;
                          v13 = IopSendMessageToTrackService(v36, &v31, Src);
                        }
                        if ( v13 < 0 )
                        {
LABEL_34:
                          v20 = 0;
                          if ( v14 )
                            v20 = IopGetSetObjectId(v9);
                          if ( v20 >= 0 )
                            IopGetSetObjectId(Object);
                        }
                      }
                    }
                  }
                  goto LABEL_14;
                }
                goto LABEL_78;
              }
            }
LABEL_36:
            v13 = 0;
            goto LABEL_14;
          }
          if ( (int)IopGetSetObjectId(Object) < 0 || RtlCompareMemoryUlong(&v35[4], 0x10uLL, 0) == 16 )
            goto LABEL_36;
          if ( !IoGetTransactionParameterBlock(Object)
            && (!*(_QWORD *)PoolWithQuota_1 || !IoGetTransactionParameterBlock(v9)) )
          {
            VolumeId = IopGetSetObjectId(v9);
            goto LABEL_48;
          }
LABEL_78:
          v13 = -1072103335;
          goto LABEL_14;
        }
        v13 = IopGetVolumeId(Object);
        if ( v13 < 0 )
          goto LABEL_14;
        v13 = IopGetSetObjectId(Object);
        if ( v13 < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&v35[4], 0x10uLL, 0) == 16 )
          goto LABEL_36;
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)PoolWithQuota_1 && IoGetTransactionParameterBlock(v9) )
          goto LABEL_78;
        v31 = v35[2];
        v32 = v35[3];
        v33 = v35[4];
        v34 = v35[5];
        LOBYTE(v32) = _mm_cvtsi128_si32((__m128i)v35[3]) & 0xFE;
        v23 = IopSendMessageToTrackService(v36, &v31, PoolWithQuota_1);
      }
      v13 = v23;
      goto LABEL_14;
    }
    if ( AccessMode )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return 2147483653LL;
  }
}
