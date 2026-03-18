/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C00A8730
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C00A86C0 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C007D258 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // r8
  __int64 v8; // rbp
  __int64 Pool2; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  if ( *((_DWORD *)this + 54) == 4 )
  {
    v6 = *((_QWORD *)this + 13);
    if ( v6 )
    {
      if ( *((_QWORD *)this + 14) == a2 )
      {
        if ( *((_QWORD *)this + 15) == a3 )
          return (struct _MDL *)*((_QWORD *)this + 13);
      }
      else if ( *((_QWORD *)this + 15) == a3 )
      {
        goto LABEL_8;
      }
      ExFreePoolWithTag(*((PVOID *)this + 13), 0);
    }
    v8 = 8 * (a3 >> 12) + 48;
    Pool2 = ExAllocatePool2(64LL, v8, 892561750LL);
    *((_QWORD *)this + 13) = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_WORD *)(*((_QWORD *)this + 13) + 8LL) = v8;
      *(_QWORD *)(*((_QWORD *)this + 13) + 16LL) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL)
                                                                           + 8LL)
                                                               + 8LL);
      v6 = *((_QWORD *)this + 13);
LABEL_8:
      v10 = a2 + *((_QWORD *)this + 6);
      *((_QWORD *)this + 14) = a2;
      *((_QWORD *)this + 15) = a3;
      *(_QWORD *)(v6 + 32) = v10;
      VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
        (unsigned __int64 *)(*((_QWORD *)this + 13) + 48LL),
        a2 + *((_QWORD *)this + 6),
        a2 + *((_QWORD *)this + 6) + a3);
      return (struct _MDL *)*((_QWORD *)this + 13);
    }
    _InterlockedIncrement(&dword_1C006E804);
    WdLogSingleEntry1(6LL, 4324LL);
    DxgkLogInternalTriageEvent(v11, 262145LL);
  }
  return 0LL;
}
