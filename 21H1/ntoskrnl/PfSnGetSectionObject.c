/*
 * XREFs of PfSnGetSectionObject @ 0x140639F58
 * Callers:
 *     PfSnPopulateReadList @ 0x140639A20 (PfSnPopulateReadList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x1402AA0E8 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     NtCreateSection @ 0x14062FC10 (NtCreateSection.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x14063A304 (PfSnIsSectionPrefetchedAfterPhase.c)
 *     PfpOpenHandleCreate @ 0x14063A8BC (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14063AA54 (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     PfSnPrefetchFileMetadata @ 0x1406C3E84 (PfSnPrefetchFileMetadata.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        volatile signed __int32 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _BYTE *a10)
{
  __int128 v11; // xmm0
  __int64 v12; // r13
  HANDLE v15; // r15
  __int64 v16; // r9
  __int64 v17; // rax
  ULONG AllocationAttributes; // r8d
  __int64 v19; // rbx
  NTSTATUS v20; // edi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int128 v24; // xmm1
  NTSTATUS v25; // eax
  struct _DMA_ADAPTER *v26; // r10
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r11
  __int64 v32; // r8
  __int64 v33; // r9
  NTSTATUS v34; // r11d
  unsigned __int8 v35; // r8
  int v37; // edx
  bool v38; // zf
  HANDLE SectionHandle; // [rsp+40h] [rbp-A1h] BYREF
  PVOID Object; // [rsp+48h] [rbp-99h] BYREF
  ULONG v41; // [rsp+50h] [rbp-91h]
  __int64 v42; // [rsp+58h] [rbp-89h] BYREF
  __m256i DmaAdapter; // [rsp+60h] [rbp-81h] BYREF
  __int64 v44; // [rsp+80h] [rbp-61h] BYREF
  _QWORD *v45; // [rsp+88h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-21h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-11h]

  v11 = 0LL;
  Object = a3;
  v12 = 0x200000000LL;
  *a9 = 0LL;
  v48 = 0LL;
  v45 = a9;
  v15 = 0LL;
  *a10 = 0;
  v16 = 0x400000000LL;
  v17 = *(_QWORD *)a1;
  *(&ObjectAttributes.Length + 1) = 0;
  AllocationAttributes = a7 != 0 ? 285212672 : 0x4000000;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v47 = 0LL;
  v42 = 0LL;
  memset(&DmaAdapter, 0, 24);
  DmaAdapter.m256i_i64[3] = 0x200000000LL;
  SectionHandle = 0LL;
  v41 = AllocationAttributes;
  if ( a6 >= *(_DWORD *)(v17 + 88) )
  {
    v20 = -1073741811;
    goto LABEL_27;
  }
  v19 = *((_QWORD *)a1 + 7) + 56LL * a6;
  if ( (*(_QWORD *)(v19 + 24) & 0x400000000LL) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
    {
      v38 = *(_QWORD *)(a4 + 24) == 0LL;
      v48 = *(_QWORD *)(a4 + 24);
      v47 = 0x100000003uLL;
      if ( !v38 )
        PfSnPrefetchFileMetadata(a1, *(_QWORD *)(a2 + 32), &v47, 0LL, 1, a8);
    }
    v20 = PfpOpenHandleCreate(
            (unsigned int)&DmaAdapter,
            *((_QWORD *)a1 + 1),
            (_DWORD)Object,
            *(_QWORD *)(a2 + 64),
            161,
            64,
            128,
            a2 + 32);
    if ( v20 < 0
      || (v20 = PfpFileCheckAttributesForPrefetch(
                  (void *)DmaAdapter.m256i_i64[0],
                  (((dword_140C501F0 & 0x10) == 0) << 14) + 4864),
          v20 < 0) )
    {
      v12 = DmaAdapter.m256i_i64[3];
      goto LABEL_27;
    }
    if ( *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31)
      && (int)IopQueryXxxInformation((PADAPTER_OBJECT)DmaAdapter.m256i_i64[1], (__int64)&v42, (__int64)&v44, 1) >= 0 )
    {
      v21 = (unsigned int)_InterlockedExchangeAdd(a1 + 30, 1u);
      v22 = *((_QWORD *)a1 + 14);
      v23 = 3 * v21;
      *(_QWORD *)(v22 + 8 * v23 + 12) = v42;
      LODWORD(v21) = DmaAdapter.m256i_i32[6];
      *(_QWORD *)(v22 + 8 * v23) = *(_QWORD *)(DmaAdapter.m256i_i64[1] + 24);
      *(_DWORD *)(v22 + 8 * v23 + 8) = v21;
    }
    v15 = SectionHandle;
    v24 = *(_OWORD *)&DmaAdapter.m256i_u64[2];
    AllocationAttributes = v41;
    *(_OWORD *)v19 = *(_OWORD *)DmaAdapter.m256i_i8;
    memset(&DmaAdapter, 0, 24);
    v11 = 0LL;
    DmaAdapter.m256i_i64[3] = 0x200000000LL;
    *(_OWORD *)(v19 + 16) = v24;
  }
  if ( a7 )
  {
    if ( *(_QWORD *)(v19 + 32) )
    {
      v28 = a5;
      v27 = a4;
      goto LABEL_33;
    }
  }
  else if ( *(_QWORD *)(v19 + 40) )
  {
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5, v16) )
      goto LABEL_16;
LABEL_17:
    *v45 = *(_QWORD *)(v19 + 8);
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v29, v30)
      && !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, v32, v33)
      && ((v35 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 || a7 != v34) )
    {
      *(_DWORD *)(v19 + 48) |= 4u;
    }
    v20 = v34;
    goto LABEL_23;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = v11;
  v20 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, *(HANDLE *)v19);
  if ( v20 >= 0 )
  {
    v15 = SectionHandle;
    Object = 0LL;
    v25 = ObReferenceObjectByHandle(SectionHandle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    v26 = (struct _DMA_ADAPTER *)Object;
    v20 = v25;
    if ( v25 < 0 )
    {
LABEL_23:
      if ( v26 )
        HalPutDmaAdapter(v26);
      goto LABEL_25;
    }
    v27 = a4;
    v28 = a5;
    if ( !a7 )
    {
      *(_QWORD *)(v19 + 40) = Object;
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5, v16) )
      {
LABEL_16:
        *(_DWORD *)(v19 + 48) |= 2u;
        *a10 = 1;
        goto LABEL_17;
      }
      if ( *(_QWORD *)(v19 + 32) != v31
        || !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v29, v30)
        && ((unsigned __int8)v29 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 )
      {
        goto LABEL_17;
      }
      *(_DWORD *)(v19 + 48) |= 2u;
LABEL_35:
      *a10 = v37;
      goto LABEL_17;
    }
    *(_QWORD *)(v19 + 32) = Object;
LABEL_33:
    if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(v27, 1LL, v28, v16) )
      goto LABEL_17;
    *(_DWORD *)(v19 + 48) |= v37;
    goto LABEL_35;
  }
  v15 = SectionHandle;
LABEL_25:
  if ( v15 )
    NtClose(v15);
LABEL_27:
  if ( (v12 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&DmaAdapter, *((_QWORD *)a1 + 1));
  return (unsigned int)v20;
}
