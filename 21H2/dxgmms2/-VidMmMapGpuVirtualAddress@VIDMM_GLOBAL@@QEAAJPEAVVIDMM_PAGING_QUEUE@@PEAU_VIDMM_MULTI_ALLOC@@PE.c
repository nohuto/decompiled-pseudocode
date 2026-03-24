/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0066CA0
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C00012D0 (-VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@.c)
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C00B6448 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0066D60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  int v10; // eax
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) == 0 || (*(_BYTE *)&Value & 7) == 0 )
  {
    v10 = *(_BYTE *)&Value & 0xC;
    if ( v10 )
    {
      if ( a3 )
      {
        v16 = WdLogNewEntry5_WdWarning(this, a2);
        *(_QWORD *)(v16 + 24) = 20634LL;
        goto LABEL_11;
      }
    }
    else if ( a3 )
    {
      goto LABEL_4;
    }
    if ( !v10 )
    {
      v16 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v16 + 24) = 20640LL;
      goto LABEL_11;
    }
LABEL_4:
    a4->BaseAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MinimumAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MaximumAddress &= 0xFFFFFFFFFFFFF000uLL;
    if ( a2 )
      return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
    v12 = 0;
    if ( a6 == -1 )
    {
      v17 = 0;
      if ( !*((_DWORD *)this + 1750) )
        return (unsigned int)v12;
      while ( 1 )
      {
        v12 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
                this,
                (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL) + 176LL * v17),
                a3,
                a4,
                0);
        if ( v12 < 0 )
          break;
        ++v17;
        a4->BaseAddress = a4->VirtualAddress;
        if ( v17 >= *((_DWORD *)this + 1750) )
          return (unsigned int)v12;
      }
      v21 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = v17;
    }
    else
    {
      v12 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL) + 176LL * a6),
              a3,
              a4,
              0);
      if ( v12 >= 0 )
        return (unsigned int)v12;
      v21 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
      *(_QWORD *)(v21 + 24) = a6;
    }
    WdLogEvent5_WdAssertion(v21);
    return (unsigned int)v12;
  }
  v16 = WdLogNewEntry5_WdWarning(this, a2);
LABEL_11:
  WdLogEvent5_WdWarning(v16);
  return 3221225485LL;
}
