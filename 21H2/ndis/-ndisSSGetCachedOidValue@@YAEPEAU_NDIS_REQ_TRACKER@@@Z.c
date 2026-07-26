/*
 * XREFs of ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A6764
 * Callers:
 *     ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0005E40 (-ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreStatistics@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009DFB0 (-ndisOidPreStatistics@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisSSGetOidCacheEntry@@YAPEAU_NDIS_OID_CACHE_ENTRY@@PEAU_NDIS_SELECTIVE_SUSPEND@@K@Z @ 0x1C00A67FC (-ndisSSGetOidCacheEntry@@YAPEAU_NDIS_OID_CACHE_ENTRY@@PEAU_NDIS_SELECTIVE_SUSPEND@@K@Z.c)
 */

unsigned __int8 __fastcall ndisSSGetCachedOidValue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_OID_CACHE_ENTRY *v3; // rax
  struct _NDIS_OID_CACHE_ENTRY *v4; // rbx
  int v5; // edx
  unsigned int v6; // eax

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisSSGetOidCacheEntry(*(struct _NDIS_SELECTIVE_SUSPEND **)(*(_QWORD *)a1 + 4448LL), *(_DWORD *)(v1 + 32));
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_DWORD *)v3 + 4);
    if ( v5 == -1073676265 || v5 == -1073741637 || v5 == 65537 )
    {
      *((_DWORD *)a1 + 10) = v5;
      return 1;
    }
    if ( *((_BYTE *)v3 + 20) )
    {
      v6 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        memmove(*(void **)(v1 + 40), *((const void **)v4 + 1), v6);
        *(_DWORD *)(v1 + 52) = *((_DWORD *)v4 + 1);
        *((_DWORD *)a1 + 10) = 0;
        return 1;
      }
    }
  }
  return 0;
}
