/*
 * XREFs of ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14006BF20
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001CC68 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x1400515C4 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140051678 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x1400516D4 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140060440 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x1400686E0 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::SetEventHandle(
        CSpatialCrossProcessClientEndpoint *this,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ebp
  void **v7; // rdi
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdx

  v6 = 0;
  v7 = 0LL;
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::SetEventHandle", 45, a3, a4);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0, 0) & 0x20) != 0
    || *((_BYTE *)this + 1368) )
  {
    v9 = -2147418113;
LABEL_19:
    if ( v9 == -2147023537 )
    {
      v9 = -2004287484;
    }
    else if ( v9 >= 0 && v6 < 0 )
    {
      v9 = v6;
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::SetEventHandle", 93, (unsigned int)v6, v8);
    }
    goto LABEL_24;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v9 = -2147024809;
    goto LABEL_26;
  }
  if ( !*((_WORD *)this + 78) )
  {
    v9 = -2147418113;
    goto LABEL_26;
  }
  v7 = (void **)operator new(0x10uLL);
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = &HandleSendReceiveClient::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = HandleSendReceiveClient::Initialize(v7, (unsigned __int16 *)this + 78);
    if ( v9 >= 0 )
    {
      v9 = HandleSendReceiveClient::SendHandle((HandleSendReceiveClient *)v7, v10, a2, v8);
      if ( v9 == -2147023537 )
        v9 = -2004287484;
      if ( v9 >= 0 )
        *((_BYTE *)this + 1368) = 1;
      v6 = HandleSendReceiveClient::CloseConnection((HandleSendReceiveClient *)v7);
    }
    goto LABEL_19;
  }
  v9 = -2147024882;
LABEL_24:
  if ( v7 )
    HandleSendReceiveClient::`vector deleting destructor'((HandleSendReceiveClient *)v7, 1);
LABEL_26:
  memset_0((char *)this + 156, 0, 0x80uLL);
  return (unsigned int)v9;
}
