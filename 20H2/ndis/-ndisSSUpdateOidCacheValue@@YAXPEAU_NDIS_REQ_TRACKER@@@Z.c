/*
 * XREFs of ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A6968
 * Callers:
 *     ?ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0006870 (-ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     ?ndisSSGetOidCacheEntry@@YAPEAU_NDIS_OID_CACHE_ENTRY@@PEAU_NDIS_SELECTIVE_SUSPEND@@K@Z @ 0x1C00A667C (-ndisSSGetOidCacheEntry@@YAPEAU_NDIS_OID_CACHE_ENTRY@@PEAU_NDIS_SELECTIVE_SUSPEND@@K@Z.c)
 */

void __fastcall ndisSSUpdateOidCacheValue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  struct _NDIS_OID_CACHE_ENTRY *v3; // rax
  __int64 v4; // r9
  struct _NDIS_OID_CACHE_ENTRY *v5; // rbx
  unsigned int v6; // eax
  void *v7; // rcx
  PVOID PoolWithTag; // rax

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v3 = ndisSSGetOidCacheEntry(*(struct _NDIS_SELECTIVE_SUSPEND **)(*(_QWORD *)a1 + 4448LL), *(_DWORD *)(v1 + 32));
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 4) = *(_DWORD *)(v4 + 40);
    *((_BYTE *)v3 + 20) = 0;
    if ( !*(_DWORD *)(v4 + 40) )
    {
      v6 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        v7 = (void *)*((_QWORD *)v5 + 1);
        if ( !v7 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x7373444Eu);
          *((_QWORD *)v5 + 1) = PoolWithTag;
          v7 = PoolWithTag;
          if ( !PoolWithTag )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xFu,
                0x27u,
                (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
                v2);
            return;
          }
          v6 = *((_DWORD *)v5 + 1);
        }
        memmove(v7, *(const void **)(v1 + 40), v6);
        *((_BYTE *)v5 + 20) = 1;
      }
    }
  }
}
