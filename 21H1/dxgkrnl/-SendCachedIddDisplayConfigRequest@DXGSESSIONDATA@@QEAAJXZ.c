/*
 * XREFs of ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0152AB0
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0152A40 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A27C (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C0041E38 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0152ED8 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(DXGSESSIONDATA *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdx
  int v10; // esi
  signed int MessageId; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  ReferenceCounted *v16; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-31h] BYREF
  char v18; // [rsp+58h] [rbp-29h]
  union _LARGE_INTEGER v19; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-19h] BYREF
  _PORT_MESSAGE v21[2]; // [rsp+78h] [rbp-9h] BYREF

  v2 = 0;
  v16 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGSESSIONDATA *)((char *)this + 18992), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v5 = *((_QWORD *)this + 2380);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v16, *((_QWORD *)this + 2380));
    v10 = *((_DWORD *)this + 4758);
    if ( v18 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v9);
    v19.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
    memset(v21, 0, 0x48uLL);
    v20 = 72LL;
    MessageId = DispBrokerClient::SendDisplayBrokerMessage(
                  (DXGSESSIONDATA *)((char *)this + 18936),
                  0x120000u,
                  (struct _PORT_MESSAGE *)(((unsigned __int64)v16 + 16) & -(__int64)(v16 != 0LL)),
                  0LL,
                  v21,
                  &v20,
                  0LL,
                  &v19);
    if ( MessageId == 192 )
    {
      v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      v2 = -1073741749;
      *(_QWORD *)(v15 + 24) = *(unsigned int *)this;
      *(_QWORD *)(v15 + 32) = -1073741749LL;
      WdLogEvent5_WdWarning(v15);
    }
    else
    {
      if ( MessageId >= 0 )
      {
        MessageId = v21[1].MessageId;
        if ( (v21[1].MessageId & 0x80000000) == 0 )
        {
          DXGSESSIONDATA::SetDisplayConfigDone(this, v10);
          MessageId = v21[1].MessageId;
        }
      }
      v2 = MessageId;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdEvent(v4, v3);
    *(_QWORD *)(v6 + 24) = *(unsigned int *)this;
    WdLogEvent5_WdEvent(v6);
    if ( v18 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v7);
  }
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v16, 0LL);
  return v2;
}
