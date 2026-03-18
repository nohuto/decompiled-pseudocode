/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C0093D00
 * Callers:
 *     ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C0093AC0 (-GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C007D258 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct _MDL *result; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 Pool2; // rax
  __int64 v6; // rcx

  if ( *((_DWORD *)this + 54) != 4 || !*((_BYTE *)this + 128) )
    return 0LL;
  result = (struct _MDL *)*((_QWORD *)this + 12);
  if ( !result )
  {
    v3 = *(_QWORD *)(**((_QWORD **)this + 28) + 8LL);
    v4 = 8 * (v3 >> 12) + 48;
    Pool2 = ExAllocatePool2(64LL, v4, 892561750LL);
    *((_QWORD *)this + 12) = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 40) = v3;
      *(_WORD *)(*((_QWORD *)this + 12) + 8LL) = v4;
      *(_QWORD *)(*((_QWORD *)this + 12) + 32LL) = *((_QWORD *)this + 6);
      *(_QWORD *)(*((_QWORD *)this + 12) + 16LL) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL)
                                                                           + 8LL)
                                                               + 8LL);
      VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
        (unsigned __int64 *)(*((_QWORD *)this + 12) + 48LL),
        *((_QWORD *)this + 6),
        *((_QWORD *)this + 6) + v3);
      return (struct _MDL *)*((_QWORD *)this + 12);
    }
    _InterlockedIncrement(&dword_1C006E804);
    WdLogSingleEntry1(6LL, 4238LL);
    DxgkLogInternalTriageEvent(v6, 262145LL);
    return 0LL;
  }
  return result;
}
