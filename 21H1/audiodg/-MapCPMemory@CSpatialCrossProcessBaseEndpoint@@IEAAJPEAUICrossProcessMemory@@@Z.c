/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140061F28
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x140063130 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005E104 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14005FB84 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14005FD50 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14006005C (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1400600C8 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x1400615E8 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x1400627B8 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  int v3; // edi
  __int64 v4; // rdx
  struct ControlData *v5; // rsi
  volatile __int32 *v6; // rcx
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rax
  std::_Ref_count_base *v11; // rdi
  void *v12; // rcx
  __int64 v13; // rdx
  SpatialBlock *v14; // rcx
  SpatialBlock *v15; // rax
  std::_Ref_count_base *v16; // rbx
  struct ControlData *v18; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  std::_Ref_count_base *v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v23; // [rsp+78h] [rbp+28h] BYREF
  char v24; // [rsp+80h] [rbp+30h] BYREF
  SpatialBlock *v25; // [rsp+88h] [rbp+38h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, char *, struct ControlData **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &v24,
         &v18);
  if ( v3 < 0 )
  {
    v4 = 149LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v5 = v18;
  v6 = (volatile __int32 *)((char *)v18 + 48);
  *((_QWORD *)this + 89) = (char *)v18 + 48;
  _InterlockedExchange(v6, 6);
  v3 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, v5);
  if ( v3 < 0 )
  {
    v4 = 156LL;
    goto LABEL_3;
  }
  v7 = (_OWORD *)((char *)this + 156);
  v8 = (_OWORD *)((char *)v5 + 388);
  v9 = 3LL;
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    *(v7 - 1) = v8[7];
    v8 += 8;
    --v9;
  }
  while ( v9 );
  *v7 = *v8;
  v7[1] = v8[1];
  *((_WORD *)v7 + 16) = *((_WORD *)v8 + 16);
  *(_OWORD *)v19 = 0LL;
  v10 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
          &v20,
          (__int64)v5 + 84);
  std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=(v19, v10);
  v11 = v21;
  if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))v11)(v11);
    std::_Ref_count_base::_Decwref(v11);
  }
  if ( v19[0] )
  {
    v12 = (void *)*((_QWORD *)this + 162);
    if ( v12 )
      operator delete(v12);
    *((_QWORD *)this + 162) = 0LL;
    std::make_unique<SpatialBlock,,0>(&v25);
    if ( v25 )
    {
      v3 = SpatialBlock::Initialize(v25, (unsigned __int8 *)v5 + 832, *((_DWORD *)v5 + 132) - 832);
      if ( v3 == -2005139387 )
      {
        v23 = 1;
        (**((void (__fastcall ***)(char *, __int64, int *))this + 142))((char *)this + 1136, 1LL, &v23);
      }
      if ( v3 >= 0 )
      {
        *((_QWORD *)this + 161) = (char *)v5 + 8;
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((_QWORD *)this + 90, v19);
        v15 = v25;
        v14 = 0LL;
        v25 = 0LL;
        *((_QWORD *)this + 162) = v15;
        v3 = 0;
LABEL_23:
        if ( v14 )
          operator delete(v14);
        goto LABEL_25;
      }
      v13 = 181LL;
    }
    else
    {
      v3 = -2147024882;
      v13 = 169LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v3);
    v14 = v25;
    goto LABEL_23;
  }
  v3 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
    (const char *)0x8007000ELL);
LABEL_25:
  if ( v19[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v19[1] + 2, 0xFFFFFFFF) == 1 )
  {
    v16 = v19[1];
    (**(void (__fastcall ***)(std::_Ref_count_base *))v19[1])(v19[1]);
    std::_Ref_count_base::_Decwref(v16);
  }
  return (unsigned int)v3;
}
