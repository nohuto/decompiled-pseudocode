/*
 * XREFs of ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14006A23C
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14006CEB0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140014A44 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001AF60 (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x14001B84C (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     memcpy_0 @ 0x140029D4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140066C34 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x1400686B4 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x140068880 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x140068B8C (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x140068BF8 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14006941C (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x1400699BC (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x14006B2F8 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemoryManager *a2,
        struct tWAVEFORMATEX *a3,
        size_t *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct ICrossProcessMemory **a10)
{
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbx
  int MemoryRequirement; // eax
  unsigned int v16; // esi
  __int64 result; // rax
  DWORD v18; // r12d
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // r8d
  const char *v22; // r9
  int v23; // eax
  unsigned int v24; // esi
  int v25; // eax
  unsigned int v26; // ebx
  char *v27; // r14
  volatile __int32 *v28; // rcx
  __int64 *v29; // rax
  std::_Ref_count_base *v30; // rsi
  std::_Ref_count_base *v31; // rbx
  std::_Ref_count_base *v32; // rbx
  int v33; // eax
  unsigned int v34; // esi
  std::_Ref_count_base *v35; // rbx
  _OWORD *v36; // rcx
  _OWORD *v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  std::_Ref_count_base *v40; // rbx
  void *v41; // rax
  std::_Ref_count_base *v42; // rbx
  __int64 v43; // [rsp+0h] [rbp-A8h] BYREF
  DWORD v44; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+48h] [rbp-60h] BYREF
  void *Block; // [rsp+50h] [rbp-58h] BYREF
  PVOID pvAddress; // [rsp+58h] [rbp-50h] BYREF
  std::_Ref_count_base *v48[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v49; // [rsp+70h] [rbp-38h] BYREF
  std::_Ref_count_base *v50; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v12 = a6;
  v13 = a6 + a7;
  if ( a6 + a7 < a6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  v14 = 4LL * a5;
  if ( v14 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(v14, a8, a9, v13, &a6);
  v16 = MemoryRequirement;
  if ( MemoryRequirement < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)MemoryRequirement);
    return v16;
  }
  v18 = a6 + 832;
  if ( a6 >= 0xFFFFFCC0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  try
  {
    v45 = 0LL;
    v19 = (*(__int64 (__fastcall **)(struct ICrossProcessMemoryManager *, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(
            a2,
            v18,
            &v45);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v19);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
      return v20;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, DWORD *, PVOID *))(*(_QWORD *)v45 + 32LL))(v45, &v44, &pvAddress);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v23);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
      return v24;
    }
    if ( v44 < v18 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
      return 2147942414LL;
    }
    std::make_unique<SpatialBlock,,0>(&Block);
    if ( !Block )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      if ( !Block )
      {
LABEL_16:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
        return 2147942414LL;
      }
LABEL_15:
      operator delete(Block);
      goto LABEL_16;
    }
    v25 = SpatialBlock::Create((SpatialBlock *)Block, (unsigned __int8 *)pvAddress + 832, a6, v14, a8, a9, v13);
    v26 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v25);
      if ( Block )
        operator delete(Block);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
      return v26;
    }
    v27 = (char *)pvAddress;
    *((_QWORD *)this + 161) = (char *)pvAddress + 8;
    *(_DWORD *)v27 = 806;
    *((_DWORD *)v27 + 1) = 1396785988;
    memset_0(*((void **)this + 161), 0, 0x4CuLL);
    v28 = (volatile __int32 *)(*((_QWORD *)this + 161) + 40LL);
    *((_QWORD *)this + 89) = v28;
    _InterlockedExchange(v28, 6);
    *(_OWORD *)v48 = 0LL;
    v29 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
            &v49,
            (__int64)(v27 + 84));
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=(v48, v29);
    v30 = v50;
    if ( v50 && _InterlockedExchangeAdd((volatile signed __int32 *)v50 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(std::_Ref_count_base *))v30)(v30);
      std::_Ref_count_base::_Decwref(v30);
    }
    if ( !v48[0] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      if ( v48[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v48[1] + 2, 0xFFFFFFFF) == 1 )
      {
        v31 = v48[1];
        (**(void (__fastcall ***)(std::_Ref_count_base *))v48[1])(v48[1]);
        std::_Ref_count_base::_Decwref(v31);
      }
      if ( !Block )
        goto LABEL_16;
      goto LABEL_15;
    }
    if ( a3->cbSize > 0x100u )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x80070057LL);
      if ( v48[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v48[1] + 2, 0xFFFFFFFF) == 1 )
      {
        v32 = v48[1];
        (**(void (__fastcall ***)(std::_Ref_count_base *))v48[1])(v48[1]);
        std::_Ref_count_base::_Decwref(v32);
      }
      if ( Block )
        operator delete(Block);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
      return 2147942487LL;
    }
    memcpy_0((char *)this + 300, a3, a3->cbSize + 18LL);
    *((_DWORD *)this + 71) = a5;
    *((_DWORD *)this + 72) = v12;
    *((_DWORD *)this + 73) = a7;
    *((_DWORD *)this + 74) = v18;
    if ( a4 && (v33 = StringCchCopyW((unsigned __int16 *)this + 78, 0x40uLL, a4), v34 = v33, v33 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v33);
      if ( v48[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v48[1] + 2, 0xFFFFFFFF) == 1 )
      {
        v35 = v48[1];
        (**(void (__fastcall ***)(std::_Ref_count_base *))v48[1])(v48[1]);
        std::_Ref_count_base::_Decwref(v35);
      }
      if ( !Block )
        goto LABEL_44;
    }
    else
    {
      v36 = v27 + 388;
      v37 = (_OWORD *)((char *)this + 156);
      v38 = 3LL;
      do
      {
        *v36 = *v37;
        v36[1] = v37[1];
        v36[2] = v37[2];
        v36[3] = v37[3];
        v36[4] = v37[4];
        v36[5] = v37[5];
        v36[6] = v37[6];
        v36 += 8;
        *(v36 - 1) = v37[7];
        v37 += 8;
        --v38;
      }
      while ( v38 );
      *v36 = *v37;
      v36[1] = v37[1];
      *((_WORD *)v36 + 16) = *((_WORD *)v37 + 16);
      v39 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, (const struct ControlData *)v27);
      v34 = v39;
      if ( v39 >= 0 )
      {
        WerRegisterMemoryBlock(v27, v18);
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=((__int64 *)this + 11, v45);
        v41 = Block;
        Block = 0LL;
        *((_QWORD *)this + 162) = v41;
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((_QWORD *)this + 90, v48);
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(&v45, a10);
        if ( v48[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v48[1] + 2, 0xFFFFFFFF) == 1 )
        {
          v42 = v48[1];
          (**(void (__fastcall ***)(std::_Ref_count_base *))v48[1])(v48[1]);
          std::_Ref_count_base::_Decwref(v42);
        }
        if ( Block )
          operator delete(Block);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v39);
      if ( v48[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v48[1] + 2, 0xFFFFFFFF) == 1 )
      {
        v40 = v48[1];
        (**(void (__fastcall ***)(std::_Ref_count_base *))v48[1])(v48[1]);
        std::_Ref_count_base::_Decwref(v40);
      }
      if ( !Block )
        goto LABEL_44;
    }
    operator delete(Block);
LABEL_44:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v45);
    result = v34;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(retaddr, &v43, v21, v22);
  }
  return result;
}
