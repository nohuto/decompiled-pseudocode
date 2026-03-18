/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C0065244
 * Callers:
 *     ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z @ 0x1C0065340 (-GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX@Z.c)
 * Callees:
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0060BFC (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct _MDL *result; // rax
  unsigned __int64 v3; // rdi
  SIZE_T v4; // rsi
  _OWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( *((_DWORD *)this + 54) != 4 || !*((_BYTE *)this + 128) )
    return 0LL;
  result = (struct _MDL *)*((_QWORD *)this + 12);
  if ( !result )
  {
    v3 = *(_QWORD *)(**((_QWORD **)this + 28) + 8LL);
    v4 = 8 * (v3 >> 12) + 48;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v4, 0x35336956u);
    *((_QWORD *)this + 12) = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_DWORD *)(*((_QWORD *)this + 12) + 40LL) = v3;
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
    _InterlockedIncrement(&dword_1C0051724);
    v7 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v7 + 24) = 4238LL;
    WdLogEvent5_WdLowResource(v7);
    return 0LL;
  }
  return result;
}
