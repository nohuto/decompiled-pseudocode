/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x1800AC720
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800D5A80 (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CNotificationResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  unsigned int v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0LL;
  v6 = *((_QWORD *)this + 2);
  if ( v3 < 0x10000 && v3 < *(_DWORD *)(v6 + 320) && (v8 = v3, v9 = *(_QWORD *)(v6 + 296), *(_QWORD *)(v9 + 8 * v8)) )
  {
    v4 = *(volatile signed __int32 **)(v9 + 8 * v8);
    _InterlockedIncrement(v4 + 2);
    v10 = *((_QWORD *)this + 6);
    v11 = 0;
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 68);
    else
      v12 = 0;
    if ( v12 && v4 != (volatile signed __int32 *)v10 )
    {
      v11 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024891, 0x5Bu, 0LL);
    }
    else
    {
      if ( v10 )
        v13 = *(_DWORD *)(v10 + 68);
      else
        v13 = 0;
      if ( v13 )
      {
        v14 = *((_DWORD *)this + 14);
        if ( v14 )
        {
          if ( v10 )
            v17 = *(_DWORD *)(v10 + 68);
          else
            v17 = 0;
          CMessageConversationHost::FlushCallbackId(
            *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1080LL),
            v17,
            v14);
        }
      }
      *((_DWORD *)this + 14) = *((_DWORD *)a3 + 2);
      v15 = *(_QWORD *)this;
      *((_QWORD *)this + 6) = v4;
      (*(void (__fastcall **)(CNotificationResource *))(v15 + 200))(this);
    }
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x76Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x53u, 0LL);
  }
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
  return v11;
}
