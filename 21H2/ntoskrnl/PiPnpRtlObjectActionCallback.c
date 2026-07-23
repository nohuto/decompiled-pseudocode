/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x14062B220
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     PiDmGetObjectList @ 0x14061F288 (PiDmGetObjectList.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14062B564 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14062B6F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14062BE5C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14062C07C (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     PiDrvDbMountNode @ 0x1408B61D4 (PiDrvDbMountNode.c)
 *     PiDrvDbUnmountNode @ 0x1408B83D8 (PiDrvDbUnmountNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(__int64 a1, const WCHAR *a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v10; // edi
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int ObjectList; // eax
  int v16; // r8d
  bool v17; // zf
  PVOID PoolWithTag; // r14
  unsigned int v20; // eax
  int ObjectProperty; // edi
  int v22; // eax
  unsigned int v23; // edx
  _WORD *v24; // r9
  _DWORD *v25; // [rsp+28h] [rbp-70h]
  void *v26; // [rsp+30h] [rbp-68h]
  int v27; // [rsp+38h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v29[3]; // [rsp+68h] [rbp-30h] BYREF
  int v30; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a6;
  v10 = -1073741822;
  v11 = a4 - 3;
  if ( !v11 )
  {
    if ( a3 != 7 )
      return v10;
    if ( a5 != 1 )
    {
      if ( *(_QWORD *)(a6 + 8) == 1LL )
      {
        if ( *(int *)a6 >= 0 )
          *(_BYTE *)(a6 + 32) = 1;
        else
          PiDrvDbUnmountNode(a2);
        *(_QWORD *)(v6 + 8) = 0LL;
      }
      return v10;
    }
    ObjectList = PiDrvDbMountNode(a2);
    v10 = ObjectList;
    if ( ObjectList >= 0 )
    {
      *(_QWORD *)(v6 + 8) = 1LL;
      return v10;
    }
LABEL_21:
    *(_DWORD *)v6 = ObjectList;
    return (unsigned int)-1073741536;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a3 != 7 )
      return v10;
    if ( a5 != 1 )
    {
      if ( *(_DWORD *)a6 != -1073741772 )
        return v10;
      *(_DWORD *)a6 = 0;
      return (unsigned int)-1073741536;
    }
    ObjectList = PiDrvDbUnmountNode(a2);
    v10 = ObjectList;
    if ( ObjectList >= 0 )
      return v10;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v10;
    v23 = *(_DWORD *)(a6 + 40);
    v24 = *(_WORD **)(a6 + 32);
    if ( a3 >= 7 )
      return 0;
    v25 = *(_DWORD **)(a6 + 48);
    v29[0] = *(_QWORD *)(a6 + 16);
    v29[1] = *(_QWORD *)(a6 + 24);
    ObjectList = PiDmGetObjectList((unsigned int)a3, (__int64)PiDmPnpObjectMatchCallback, (__int64)v29, v24, v23, v25);
    if ( ObjectList == -1073741802 )
      return 0;
    goto LABEL_21;
  }
  v14 = v13 - 3;
  if ( !v14 )
  {
    if ( a5 == 1 )
    {
      ObjectList = PiDmObjectGetAggregatedBooleanPropertyData(
                     a3,
                     (_DWORD)a2,
                     a3,
                     *(_QWORD *)(a6 + 24),
                     *(_QWORD *)(a6 + 32),
                     *(_QWORD *)(a6 + 40),
                     *(_QWORD *)(a6 + 48),
                     *(_DWORD *)(a6 + 56),
                     *(_QWORD *)(a6 + 64));
      if ( ObjectList == -1073741802 )
      {
        if ( (*(_DWORD *)(v6 + 72) & 0x10000) != 0
          || (ObjectList = PiDmObjectGetCachedObjectProperty(
                             a3,
                             (_DWORD)a2,
                             v16,
                             *(_QWORD *)(v6 + 24),
                             *(_QWORD *)(v6 + 32),
                             *(_QWORD *)(v6 + 40),
                             *(_QWORD *)(v6 + 48),
                             *(_DWORD *)(v6 + 56),
                             *(_QWORD *)(v6 + 64)),
              ObjectList < 0)
          && ObjectList != -1073741275
          && ObjectList != -1073741772
          && ObjectList != -1073741789 )
        {
          v10 = 0;
          v17 = *(_QWORD *)(v6 + 16) == 0LL;
          goto LABEL_13;
        }
      }
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v10;
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedObjectProperty(a3, (int)a2, a3, *(_QWORD *)(a6 + 24), *(_QWORD *)(a6 + 32), 0, 0LL, 0);
      return 0;
    }
    v27 = **(_DWORD **)(a6 + 64);
    v26 = *(void **)(a6 + 48);
    v22 = **(_DWORD **)(a6 + 40);
    goto LABEL_33;
  }
  if ( v14 != 1 )
    return v10;
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
      return v10;
    v27 = *(_DWORD *)(a6 + 56);
    v26 = *(void **)(a6 + 48);
    v22 = *(_DWORD *)(a6 + 40);
LABEL_33:
    PiDmObjectUpdateCachedObjectProperty(a3, (int)a2, a3, *(_QWORD *)(a6 + 24), *(_QWORD *)(a6 + 32), v22, v26, v27);
    return 0;
  }
  v10 = 0;
  if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
    goto LABEL_45;
  v30 = 0;
  PoolWithTag = 0LL;
  LODWORD(Size) = 0;
  v20 = *(_DWORD *)(a6 + 56);
  if ( !v20 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x47706E50u)) != 0LL )
  {
    if ( (ObjectProperty = PnpGetObjectProperty(
                             PiPnpRtlCtx,
                             (_DWORD)a2,
                             a3,
                             *(_QWORD *)(v6 + 16),
                             *(_QWORD *)(v6 + 24),
                             *(_QWORD *)(v6 + 32),
                             (__int64)&v30,
                             (__int64)PoolWithTag,
                             *(_DWORD *)(v6 + 56),
                             (__int64)&Size,
                             0),
          ObjectProperty >= 0)
      && v30 == *(_DWORD *)(v6 + 40)
      && (_DWORD)Size == *(_DWORD *)(v6 + 56)
      && !memcmp(PoolWithTag, *(const void **)(v6 + 48), (unsigned int)Size)
      || ObjectProperty == -1073741275 && !*(_DWORD *)(v6 + 40) && !*(_DWORD *)(v6 + 56) )
    {
      *(_DWORD *)v6 = ObjectProperty;
      v10 = -1073741536;
    }
    else
    {
      v10 = 0;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
    if ( !v10 )
    {
LABEL_45:
      v17 = *(_QWORD *)(v6 + 16) == 0LL;
LABEL_13:
      if ( v17 )
        PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
    }
  }
  return v10;
}
