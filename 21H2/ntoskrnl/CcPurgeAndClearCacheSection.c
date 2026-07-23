/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x1402F9EE4
 * Callers:
 *     CcSetFileSizesEx @ 0x1402D2970 (CcSetFileSizesEx.c)
 * Callees:
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402F90C0 (CcUpdateSharedCacheMapFlag.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1403004D4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140300520 (CcReferenceSharedCacheMapFileObject.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     CcGetVirtualAddress @ 0x14032BC60 (CcGetVirtualAddress.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // r14
  __int64 v4; // r9
  __int64 v5; // r13
  BOOLEAN v6; // bl
  __int64 result; // rax
  LONGLONG QuadPart; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rbx
  struct _KEVENT *v11; // rcx
  char v12; // [rsp+30h] [rbp-78h] BYREF
  LONGLONG v13; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-68h] BYREF
  void *VirtualAddress; // [rsp+50h] [rbp-58h]
  _OWORD v16[5]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  v13 = 0LL;
  v16[0] = 0LL;
  v14[0] = 0LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v14[1] = v5;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v13 = v2->QuadPart;
  v2 = (LARGE_INTEGER *)&v13;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v9 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, (unsigned int)v14, (unsigned int)&v12, 1, 0);
    memset(VirtualAddress, 0, v9);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx(VirtualAddress, 1LL);
      CcUpdateSharedCacheMapFlag(a1, 0x20000, 1);
    }
    else
    {
      CcSetDirtyInMask(a1, &v13, v9, 0LL);
    }
    v13 = v9 + QuadPart;
    v10 = *(_QWORD *)(v14[0] + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v14[0] + 16LL)) )
    {
      v11 = *(struct _KEVENT **)(v10 + 184);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 544));
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v5 + 40), &v13, 1LL, v4, v16, 0);
  result = LODWORD(v16[0]);
  if ( SLODWORD(v16[0]) >= 0 )
  {
LABEL_3:
    v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v2, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v5);
    return v6 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
