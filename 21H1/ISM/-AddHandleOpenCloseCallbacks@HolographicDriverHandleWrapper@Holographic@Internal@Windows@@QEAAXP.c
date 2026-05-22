/*
 * XREFs of ?AddHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXPEBV?$function@$$A6AXXZ@std@@0@Z @ 0x180159478
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162A58 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800A0E18 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::AddHandleOpenCloseCallbacks(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  _BYTE *Ptr; // rdx
  _BYTE *v8; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v6 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  if ( a2 )
  {
    Ptr = a1[12].Ptr;
    if ( a1[13].Ptr == Ptr )
    {
      std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>((const void **)&a1[11].Ptr, Ptr, &v9);
    }
    else
    {
      *(_QWORD *)Ptr = a2;
      a1[12].Ptr = (char *)a1[12].Ptr + 8;
    }
  }
  if ( a3 )
  {
    v8 = a1[9].Ptr;
    if ( a1[10].Ptr == v8 )
    {
      std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>((const void **)&a1[8].Ptr, v8, &v10);
    }
    else
    {
      *(_QWORD *)v8 = a3;
      a1[9].Ptr = (char *)a1[9].Ptr + 8;
    }
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
