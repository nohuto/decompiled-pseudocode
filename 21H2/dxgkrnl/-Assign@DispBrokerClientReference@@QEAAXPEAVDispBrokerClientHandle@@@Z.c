/*
 * XREFs of ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001EE84
 * Callers:
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x1C0002668 (--1DispBrokerClient@@QEAA@XZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001F90C (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C0160F74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01C8284 (_lambda_8317567312832b51b45aaef017a7684b_--operator().c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01C8394 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C01C855C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??1DispBrokerClientHandle@@QEAA@XZ @ 0x1C001EEEC (--1DispBrokerClientHandle@@QEAA@XZ.c)
 */

void __fastcall DispBrokerClientReference::Assign(DispBrokerClientHandle **this, struct DispBrokerClientHandle *a2)
{
  DispBrokerClientHandle *v2; // rdi

  v2 = *this;
  if ( *this != a2 )
  {
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      {
        DispBrokerClientHandle::~DispBrokerClientHandle(v2);
        operator delete(v2);
      }
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
