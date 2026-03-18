/*
 * XREFs of ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C00C056C
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00B80F4 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0088138 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::ReferenceReservedZeroVad(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE *a2,
        unsigned __int64 a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  int v5; // eax
  struct _RTL_BALANCED_NODE *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  struct _RTL_BALANCED_NODE *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( !v3 )
    return 0LL;
  do
  {
    v5 = CompareVadAddressInsideAvl(&v11, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v3 = v3->Children[1];
    }
    else
    {
      v3 = v3->Children[0];
    }
  }
  while ( v3 );
  if ( !v3 )
    return 0LL;
  v6 = v3[1].Children[1];
  v7 = LODWORD(v3[3].Children[0]);
  v8 = (unsigned __int64)&v6[-171].Children[1];
  if ( (v7 & 0x1000) == 0 )
    v8 = (unsigned __int64)v3[1].Children[1];
  if ( v8 < a3 )
    return 0LL;
  LOBYTE(v7) = v7 & 0xF;
  if ( (_BYTE)v7 != 2 )
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v7);
    WdLogEvent5_WdWarning(v9);
    return 0LL;
  }
  return v3;
}
