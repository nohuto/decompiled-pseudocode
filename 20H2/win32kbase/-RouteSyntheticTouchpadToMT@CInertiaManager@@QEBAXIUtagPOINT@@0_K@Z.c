/*
 * XREFs of ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01A3EE8
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A3A84 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018BBE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v14[20]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-30h]
  _BYTE v17[112]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v18; // [rsp+148h] [rbp+48h]
  _QWORD v19[26]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v20[112]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v21; // [rsp+290h] [rbp+190h]
  __int64 v22; // [rsp+298h] [rbp+198h]

  memset(v14, 0, sizeof(v14));
  v16 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(v19, 0, sizeof(v19));
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v22 = 0LL;
  v14[17] = &v15;
  v14[0] = gpTouchProcessor;
  *(_QWORD *)&v15 = 0x18000000400LL;
  HIDWORD(v19[25]) = a5;
  LODWORD(v14[6]) = 1;
  LODWORD(v19[3]) = 5;
  HIDWORD(v19[4]) = 0x800000;
  v19[9] = a3;
  v19[7] = a3;
  v19[10] = a4;
  v19[8] = a4;
  LODWORD(v19[12]) = a2;
  CTouchProcessor::ForwardInputToManipulationThread(gpTouchProcessor, (const struct CPointerInputFrame *)v14);
  CInputDest::SetEmpty((CInputDest *)v20, v8, v9, v10);
  CInputDest::SetEmpty((CInputDest *)v17, v11, v12, v13);
}
