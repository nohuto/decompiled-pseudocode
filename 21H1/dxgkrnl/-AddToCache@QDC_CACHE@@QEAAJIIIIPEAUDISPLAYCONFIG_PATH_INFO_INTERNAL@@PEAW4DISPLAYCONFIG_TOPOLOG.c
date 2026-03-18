/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E3888
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E3424 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00E39F8 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0290CEC (-CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  unsigned int v7; // r14d
  int v8; // r15d
  __int64 v9; // rbx
  DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  QDC_CACHE *v17; // rcx
  unsigned int v18; // r8d
  struct QDC_CACHE::QDC_CACHE_ENTRY *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  PVOID v24; // rax
  unsigned int v25; // ebx
  SIZE_T v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  void *v36; // rcx
  __int64 v37; // rax
  _BYTE v38[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 445LL;
    return 3221225659LL;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( DXGPROCESS::IsRemoteConnection(Current) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  if ( !a5 )
    goto LABEL_12;
  if ( (_DWORD)v9 != *((_DWORD *)this + 148) )
  {
    v32 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v33 = *((unsigned int *)this + 148);
    *(_QWORD *)(v32 + 32) = v9;
    v25 = -1071774921;
    *(_QWORD *)(v32 + 24) = v33;
    goto LABEL_13;
  }
  CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v7);
  v19 = CacheEntry;
  if ( CacheEntry )
  {
    if ( QDC_CACHE::CompareEntry(v17, CacheEntry, v18, a5, Src) )
      goto LABEL_12;
    v35 = WdLogNewEntry5_WdAssertion(v34, v12);
    *(_QWORD *)(v35 + 24) = 491LL;
    WdLogEvent5_WdAssertion(v35);
    v36 = (void *)*((_QWORD *)v19 + 2);
    if ( v36 )
    {
      operator delete[](v36);
      *((_QWORD *)v19 + 2) = 0LL;
    }
  }
  else
  {
    v19 = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 0, 0);
    if ( !v19 )
    {
      v25 = -1073741671;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = 503LL;
      goto LABEL_13;
    }
  }
  v24 = (PVOID)*((_QWORD *)v19 + 2);
  if ( *((_DWORD *)v19 + 2) != a5 && v24 )
  {
    operator delete[](*((void **)v19 + 2));
    *((_QWORD *)v19 + 2) = 0LL;
    v24 = 0LL;
  }
  if ( !v24 )
  {
    v27 = 200LL * a5;
    if ( !is_mul_ok(a5, 0xC8uLL) )
      v27 = -1LL;
    v24 = operator new[](v27, 0x43434451u, PagedPool);
    *((_QWORD *)v19 + 2) = v24;
    if ( !v24 )
    {
      v37 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
      *(_QWORD *)(v37 + 24) = 526LL;
      WdLogEvent5_WdLowResource(v37);
      v25 = -1073741801;
      goto LABEL_13;
    }
  }
  memmove(v24, Src, 200LL * a5);
  if ( a7 )
    *((_DWORD *)v19 + 6) = *(_DWORD *)a7;
  *((_DWORD *)v19 + 7) = v8;
  *((_DWORD *)v19 + 2) = a5;
  *(_BYTE *)v19 = 1;
  *((_DWORD *)v19 + 1) = v7;
LABEL_12:
  v25 = 0;
LABEL_13:
  if ( v38[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v12);
  return v25;
}
