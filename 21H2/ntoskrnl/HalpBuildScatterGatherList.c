/*
 * XREFs of HalpBuildScatterGatherList @ 0x14039F584
 * Callers:
 *     HalGetScatterGatherList @ 0x140234420 (HalGetScatterGatherList.c)
 *     HalBuildScatterGatherListV3 @ 0x14039F500 (HalBuildScatterGatherListV3.c)
 *     HalBuildScatterGatherListEx @ 0x1404C6040 (HalBuildScatterGatherListEx.c)
 *     HalGetScatterGatherListEx @ 0x1404C64F0 (HalGetScatterGatherListEx.c)
 * Callees:
 *     HalpAllocateAdapterCallbackV3 @ 0x14039F760 (HalpAllocateAdapterCallbackV3.c)
 *     HalGetDmaTransferInfoInternal @ 0x14039FB98 (HalGetDmaTransferInfoInternal.c)
 *     HalpAllocateAdapterChannel @ 0x1404CA610 (HalpAllocateAdapterChannel.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        _QWORD *a15)
{
  __int64 **v15; // rdi
  unsigned __int64 v19; // rax
  __int64 result; // rax
  char *v21; // rbx
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  _DWORD *PoolWithTag; // rdx
  int AdapterChannel; // edi

  v15 = a4;
  if ( !a4 )
    return 3221225485LL;
  if ( a15 )
    *a15 = 0LL;
  do
  {
    v19 = *((unsigned int *)v15 + 10);
    if ( a5 < v19 )
      break;
    v15 = (__int64 **)*v15;
    a5 -= v19;
  }
  while ( v15 );
  if ( !v15 )
    return 3221225485LL;
  result = HalGetDmaTransferInfoInternal(a1, (_DWORD)v15, a5, a6);
  if ( (int)result >= 0 )
  {
    if ( a11 )
    {
      v21 = (char *)(a11 + 40);
      *(_DWORD *)(a11 + 40) |= 1u;
      *(_QWORD *)(a11 + 200) = a11;
      *(_DWORD *)(a11 + 196) = a12;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0LL, 0x206C6148u);
      if ( !PoolWithTag )
        return 3221225626LL;
      v21 = (char *)(PoolWithTag + 10);
      PoolWithTag[10] = 0;
      *((_QWORD *)PoolWithTag + 25) = PoolWithTag;
      PoolWithTag[49] = 0;
    }
    if ( a15 )
      *a15 = *((_QWORD *)v21 + 20);
    *((_DWORD *)v21 + 39) -= 168;
    *((_QWORD *)v21 + 1) = v15;
    *((_QWORD *)v21 + 2) = 0LL;
    v22 = (unsigned __int64)v15[4] + *((unsigned int *)v15 + 11) + a5;
    *((_QWORD *)v21 + 15) = a8;
    *((_QWORD *)v21 + 4) = v22;
    *((_DWORD *)v21 + 10) = a6;
    *((_QWORD *)v21 + 16) = a9;
    *((_QWORD *)v21 + 18) = a1;
    v21[152] = a10;
    *((_DWORD *)v21 + 11) = 0;
    *((_QWORD *)v21 + 3) = 0LL;
    if ( a3 )
    {
      v23 = (_QWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 88) = v21;
      *(_DWORD *)(a3 + 36) |= 2u;
    }
    else
    {
      v23 = v21 + 48;
      *((_DWORD *)v21 + 17) &= ~2u;
    }
    v23[4] = v21;
    v23[6] = a2;
    v23[7] = *(_QWORD *)(a2 + 32);
    if ( !*(_BYTE *)(a1 + 432) && *(_DWORD *)(a1 + 512) != 2 && (*(_BYTE *)(a1 + 437) || a10) )
    {
      HalpAllocateAdapterCallbackV3(a2, *(_QWORD *)(a2 + 32), 0LL, v21);
      return 0LL;
    }
    else
    {
      *((_DWORD *)v21 + 11) = 1;
      if ( a8 )
      {
        AdapterChannel = HalpAllocateAdapterChannel((PDMA_ADAPTER)a1, a7, (__int64)HalpAllocateAdapterCallbackV3);
      }
      else
      {
        AdapterChannel = HalpAllocateAdapterChannel((PDMA_ADAPTER)a1, a7, 0LL);
        if ( !AdapterChannel )
          HalpAllocateAdapterCallbackV3(a2, *(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 232), v21);
      }
      if ( AdapterChannel < 0 && !a11 )
        ExFreePoolWithTag(*((PVOID *)v21 + 20), 0);
      return (unsigned int)AdapterChannel;
    }
  }
  return result;
}
