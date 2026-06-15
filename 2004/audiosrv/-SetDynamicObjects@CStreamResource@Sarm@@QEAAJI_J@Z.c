/*
 * XREFs of ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x18010C5E0
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x18010792C (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180109108 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x18010BDB8 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x18010C344 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010ACB0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18010B334 (-RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5535@Z @ 0x18010B754 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@U.c)
 *     ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18010C0D8 (-IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18010C240 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::SetDynamicObjects(
        Sarm::CStreamResource *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  bool v7; // zf
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  int v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v24; // [rsp+B0h] [rbp+30h] BYREF
  int v25; // [rsp+B8h] [rbp+38h] BYREF
  int v26; // [rsp+C8h] [rbp+48h] BYREF

  v6 = a3;
  SarmTraceLoggingTracer("Sarm::CStreamResource::SetDynamicObjects", 300, a3, a4);
  v7 = a2 == *((_DWORD *)this + 20);
  if ( a2 < *((_DWORD *)this + 20) )
  {
    if ( !v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)0x887C0106LL);
      return 2289828102LL;
    }
    v7 = a2 == *((_DWORD *)this + 20);
  }
  if ( v7 )
  {
    v6 = 0LL;
  }
  else
  {
    v9 = Sarm::CStreamResource::IssueGrantToASAR(this, a2, v6);
    v12 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)(unsigned int)v9);
      return v12;
    }
    v13 = *((_DWORD *)this + 20);
    if ( a2 >= v13 )
    {
      Sarm::CEndpointResourcePool::RemoveFromDynamicPool(
        *((Sarm::CEndpointResourcePool **)this + 1),
        a2 - v13,
        v10,
        v11);
      v13 = *((_DWORD *)this + 20);
    }
    else
    {
      *((_DWORD *)this + 21) = v13 - a2;
    }
    *((_DWORD *)this + 19) = v13;
    *((_DWORD *)this + 20) = a2;
  }
  v14 = Sarm::CStreamResource::NotifyClientOfGrant(this, a2, v6);
  v18 = v14;
  if ( v14 >= 0 )
  {
    if ( (unsigned int)dword_18019D350 > 5 )
    {
      v25 = *((_DWORD *)this + 13);
      v24 = *((_DWORD *)this + 20);
      v26 = *((_DWORD *)this + 19);
      v19 = *((_DWORD *)this + 21);
      v21 = (__int64)this + 16;
      v22 = *((_QWORD *)this + 5);
      v20 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v15,
        byte_18016A5BB,
        v16,
        v17,
        (__int64)&v22,
        &v21,
        (__int64)&v19,
        (__int64)&v26,
        (__int64)&v24,
        (__int64)&v20,
        (__int64)&v25);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v14);
    return v18;
  }
}
