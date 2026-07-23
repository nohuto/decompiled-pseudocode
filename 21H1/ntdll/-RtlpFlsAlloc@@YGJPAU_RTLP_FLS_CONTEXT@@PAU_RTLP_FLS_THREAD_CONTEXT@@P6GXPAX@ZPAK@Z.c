/*
 * XREFs of ?RtlpFlsAlloc@@YGJPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_THREAD_CONTEXT@@P6GXPAX@ZPAK@Z @ 0x4B2E54FB
 * Callers:
 *     _RtlFlsAlloc@8 @ 0x4B2E54F0 (_RtlFlsAlloc@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGKPAU1@@Z @ 0x4B2E55C5 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGKPAU1@@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGXPAU1@K@Z @ 0x4B2E8962 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGXPAU1@K@Z.c)
 */

int __stdcall RtlpFlsAlloc(
        struct _RTLP_FLS_CONTEXT *a1,
        struct _RTLP_FLS_THREAD_CONTEXT *a2,
        void (__stdcall *a3)(void *),
        unsigned int *a4)
{
  int v4; // ebx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax

  v4 = 1;
  RtlAcquireSRWLockExclusive(&RtlpFlsContext);
  v5 = 4;
  while ( 1 )
  {
    v6 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(dword_4B3A66D4);
    v7 = v6;
    if ( v6 == -1 )
    {
      v12 = -1073741801;
LABEL_22:
      RtlReleaseSRWLockExclusive(&RtlpFlsContext);
      return v12;
    }
    v8 = v6 - 16;
    if ( v6 != 16 )
      break;
    _BitScanReverse(&v14, 0x10u);
    v15 = (1 << v14) ^ 0x10;
    v16 = dword_4B3A66D4[v14 - 4];
    if ( v16 )
      v17 = v16 + 8 * v15 + 8;
    else
      v17 = 4;
    *(_DWORD *)v17 = -1;
  }
  if ( v8 >= 0xFF0 )
  {
    v12 = -1073741801;
  }
  else
  {
    _BitScanReverse(&v6, v6);
    v9 = v7 ^ (1 << v6);
    v10 = dword_4B3A66D4[v6 - 4];
    if ( v10 )
      v5 = v10 + 8 * (v9 + 1);
    v11 = (int)a1;
    if ( !a1 )
      v11 = -1;
    *(_DWORD *)v5 = v11;
    if ( v8 > dword_4B3A66FC )
      dword_4B3A66FC = v8;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
    v4 = 0;
    v7 = -1;
    *(_DWORD *)a2 = v8;
    v12 = 0;
  }
  if ( v7 != -1 )
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(dword_4B3A66D4);
  if ( v4 )
    goto LABEL_22;
  return v12;
}
