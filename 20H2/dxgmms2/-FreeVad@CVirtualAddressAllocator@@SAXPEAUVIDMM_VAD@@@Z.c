/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C007DDC0
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C007A360 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C007DAA4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C008831C (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023648 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  unsigned int v1; // esi
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v1 = 0;
  if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v3 = (_QWORD **)((char *)a1 + 24 * v1 + 96);
      while ( 1 )
      {
        v4 = *v3;
        if ( *v3 == v3 )
          break;
        if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
          __fastfail(3u);
        *v3 = v5;
        v5[1] = v3;
        *v4 = 0LL;
        v4[1] = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v4 - 1));
      }
      ++v1;
    }
    while ( v1 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
  }
  operator delete(a1);
}
