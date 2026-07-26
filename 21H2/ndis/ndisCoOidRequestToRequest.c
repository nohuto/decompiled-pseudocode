/*
 * XREFs of ndisCoOidRequestToRequest @ 0x1C00B9FD8
 * Callers:
 *     NdisCoOidRequest @ 0x1C00BA100 (NdisCoOidRequest.c)
 *     NdisMCmOidRequest @ 0x1C00BAAB0 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisCoOidRequestToRequest(
        __int64 (__fastcall **a1)(__int64, __int64, __int64, PVOID),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  unsigned int v10; // esi
  int v11; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    v11 = *(_DWORD *)(a5 + 4);
    v9[6] |= 0x400u;
    v9[8] = v11;
    *((_QWORD *)v9 + 1) = a5;
    if ( *(_DWORD *)(a5 + 4) == 12 )
    {
      v10 = -1073741637;
    }
    else
    {
      v9[10] = *(_DWORD *)(a5 + 32);
      *((_QWORD *)v9 + 6) = *(_QWORD *)(a5 + 40);
      v9[14] = *(_DWORD *)(a5 + 48);
      v9[15] = *(_DWORD *)(a5 + 52);
      v9[16] = *(_DWORD *)(a5 + 56);
      v10 = (*a1)(a2, a3, a4, v9);
      if ( v10 == 259 )
        return v10;
      *(_DWORD *)(a5 + 52) = v9[15];
      *(_DWORD *)(a5 + 56) = v9[16];
    }
    ExFreePoolWithTag(v9, 0);
    return v10;
  }
  return (unsigned int)-1073741670;
}
