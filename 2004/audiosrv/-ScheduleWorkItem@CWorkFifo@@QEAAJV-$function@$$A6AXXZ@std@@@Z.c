/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180109288
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18004F630 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180107AE8 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180108330 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180108500 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180109108 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800388A8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180052B54 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180067FAC (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Setp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@U?$integral_constant@_N$0A@@1@@Z @ 0x180106194 (--$_Setp@VWorkItem@CWorkFifo@@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFi.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180107D50 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180107E18 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Push_back_internal@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x18010A030 (-_Push_back_internal@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CWorkFifo::ScheduleWorkItem(wil::details **this, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // eax
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  std::_Ref_count_base *v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  std::_Ref_count_base *v20[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[88]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct _Mtx_internal_imp_t *v23; // [rsp+90h] [rbp+8h]

  v2 = a2;
  v23 = (struct _Mtx_internal_imp_t *)(this + 18);
  v4 = _Mtx_lock((_Mtx_t)(this + 18));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( !*((_BYTE *)this + 136) )
  {
    v5 = CWorkFifo::Initialize(this);
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)(unsigned int)v5);
      v8 = _Mtx_unlock(v23);
      if ( v8 )
        std::_Throw_C_error(v8);
      goto LABEL_34;
    }
    wil::details::ResetEvent(this[28], v6);
    v10 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
    }
    *(_OWORD *)v20 = 0LL;
    std::shared_ptr<CWorkFifo::WorkItem>::_Setp<CWorkFifo::WorkItem>(v20, (__int64)v10);
    v11 = v20[0];
    if ( !v20[0] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      if ( v20[1] )
        std::_Ref_count_base::_Decref(v20[1]);
      v12 = _Mtx_unlock(v23);
      if ( !v12 )
        goto LABEL_33;
      std::_Throw_C_error(v12);
    }
    v13 = std::function<void (void)>::function<void (void)>((__int64)v21, v2);
    v14 = CWorkFifo::WorkItem::Initialize(v11, v13);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)(unsigned int)v14);
      if ( v20[1] )
        std::_Ref_count_base::_Decref(v20[1]);
      v15 = _Mtx_unlock(v23);
      if ( v15 )
        std::_Throw_C_error(v15);
      goto LABEL_34;
    }
    try
    {
      std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Push_back_internal(this + 12, v20);
      if ( this[16] == (wil::details *)1 && !*((_BYTE *)this + 137) )
        SubmitThreadpoolWork(this[2]);
      if ( v20[1] )
        std::_Ref_count_base::_Decref(v20[1]);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      goto LABEL_28;
    }
  }
  v16 = _Mtx_unlock(v23);
  if ( v16 )
  {
    std::_Throw_C_error(v16);
LABEL_28:
    if ( v20[1] )
      std::_Ref_count_base::_Decref(v20[1]);
    v18 = _Mtx_unlock(v23);
    if ( v18 )
    {
      std::_Throw_C_error(v18);
      __debugbreak();
    }
    v2 = a2;
LABEL_33:
    v7 = -2147024882;
LABEL_34:
    std::_Func_class<void,>::_Tidy(v2, v9);
    return v7;
  }
  std::_Func_class<void,>::_Tidy(v2, v17);
  return 0LL;
}
