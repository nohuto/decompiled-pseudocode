/*
 * XREFs of ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800790F0
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x18007BB3C (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 *     ?Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z @ 0x18007BC40 (-Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800DC2C8 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800E7CE0 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CComposition::FlushChannels(CComposition *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  CChannelContext *v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+34h] [rbp-24h]
  __int64 v10; // [rsp+44h] [rbp-14h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 64LL))(*((_QWORD *)this + 28)) )
  {
    if ( *((_DWORD *)this + 134) )
    {
      v2 = 0LL;
      v3 = *((unsigned int *)this + 134);
      do
      {
        v4 = *((_QWORD *)this + 64);
        v8 = 1;
        v9 = 0LL;
        v5 = *(CChannelContext **)(v2 + v4);
        v10 = 0LL;
        v6 = CChannelContext::PostMessageToChannel(v5, (const struct MIL_MESSAGE *)&v8);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x70u);
        CMILRefCountBaseT<IMILRefCount>::InternalRelease(v5);
        v2 += 8LL;
        --v3;
      }
      while ( v3 );
    }
    *((_DWORD *)this + 134) = 0;
    DynArrayImpl<1>::ShrinkToSize((char *)this + 512, 8LL);
  }
}
