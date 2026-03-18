/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x1402CDFA8
 * Callers:
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 * Callees:
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140232608 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140232654 (CcReferenceSharedCacheMapFileObject.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402D036C (CcUpdateSharedCacheMapFlag.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // r14
  __int64 v4; // r9
  ULONG_PTR v5; // r13
  BOOLEAN v6; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rbx
  struct _KEVENT *v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+30h] [rbp-78h] BYREF
  LONGLONG v14; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v15[2]; // [rsp+40h] [rbp-68h] BYREF
  void *VirtualAddress; // [rsp+50h] [rbp-58h]
  _OWORD v17[5]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  v14 = 0LL;
  v17[0] = 0LL;
  v15[0] = 0LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v15[1] = (__int64 *)v5;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v14 = v2->QuadPart;
  v2 = (LARGE_INTEGER *)&v14;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v9 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, v15, &v13, 1, 0);
    memset(VirtualAddress, 0, v9);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, 1LL);
      LOBYTE(v12) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v12);
    }
    else
    {
      CcSetDirtyInMask(a1, &v14, v9, 0LL);
    }
    v14 = v9 + QuadPart;
    v10 = v15[0][1];
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)v15[0] + 4) )
    {
      v11 = *(struct _KEVENT **)(v10 + 184);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 544));
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v5 + 40), &v14, 1LL, v4, v17, 0);
  result = LODWORD(v17[0]);
  if ( SLODWORD(v17[0]) >= 0 )
  {
LABEL_3:
    v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v2, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v5);
    return v6 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
