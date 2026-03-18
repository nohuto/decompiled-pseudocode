/*
 * XREFs of ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001A3BC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C015F204 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C0161550 (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0161748 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C016190C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C016A37C (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 */

void __fastcall DispBrokerClientReference::Assign(HANDLE **this, HANDLE *a2)
{
  HANDLE *v2; // rdi

  v2 = *this;
  if ( *this != a2 )
  {
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      {
        ZwAlpcDisconnectPort(v2[1], 0LL);
        ZwClose(v2[1]);
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
