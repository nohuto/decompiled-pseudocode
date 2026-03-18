/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x14063D4E4
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14063F49C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A5BAC (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x14023F5F0 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x14023FA80 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PiDmGetObject @ 0x14063EC9C (PiDmGetObject.c)
 *     PiDmInitializeComparisonObject @ 0x14063EDD4 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x14064117C (PiPnpRtlObjectEventRelease.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  PVOID v8; // rsi
  int v9; // ebx
  PVOID *v10; // rax
  PVOID v11; // rdi
  int Object; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v15; // rdi
  PVOID v16; // rax
  PVOID inserted; // rax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *Buffer; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[112]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v8 = 0LL;
  Buffer = v23;
  *a4 = 0LL;
  P = 0LL;
  v9 = PiDmInitializeComparisonObject(a1, a2, v24);
  if ( v9 >= 0 )
  {
    v23[1] = v24;
    v10 = (PVOID *)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
      v11 = *v10;
    else
      v11 = 0LL;
    if ( v11 )
      goto LABEL_5;
    Object = PiDmGetObject(a2, a1, &P);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v8 = P;
      v9 = 0;
      goto LABEL_14;
    }
    if ( Object < 0 )
    {
      v8 = P;
LABEL_18:
      if ( v11 )
        PiPnpRtlObjectEventRelease(v11);
      goto LABEL_20;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x41706E50u);
    v20 = PoolWithTag;
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v16 = P;
      *v15 = 1;
      v15[18] = 5;
      v8 = 0LL;
      *((_QWORD *)v15 + 1) = v16;
      inserted = RtlInsertElementGenericTableFullAvl(
                   (PRTL_AVL_TABLE)(a3 + 24),
                   &v20,
                   8u,
                   0LL,
                   NodeOrParent,
                   SearchResult);
      v11 = v20;
      if ( inserted )
      {
LABEL_5:
        *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
      goto LABEL_18;
    }
    v8 = P;
    v9 = -1073741670;
  }
LABEL_20:
  *a4 = 0LL;
LABEL_14:
  if ( v8 )
    PiDmObjectRelease(v8);
  return (unsigned int)v9;
}
