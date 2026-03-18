/*
 * XREFs of _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01C8284
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01C8648 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001EE84 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C01C85D4 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

void __fastcall lambda_8317567312832b51b45aaef017a7684b_::operator()(unsigned int ***a1)
{
  struct DispBrokerClientHandle **v2; // rdx
  DispBrokerClientHandle **v3; // rcx
  int v4; // ebx
  unsigned __int64 v5; // kr00_8
  unsigned int **v6; // rax
  unsigned int v7; // r8d
  _BYTE v8[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  unsigned __int64 v11; // [rsp+88h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)*a1 + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v9);
  v2 = (struct DispBrokerClientHandle **)a1[1];
  v3 = (DispBrokerClientHandle **)(*a1 + 6);
  v10 = 2;
  DispBrokerClientReference::Assign(v3, *v2);
  v4 = *(_DWORD *)a1[2];
  if ( v4 >= 0 != DispBrokerClient::IsClientHandleValid((DispBrokerClient *)*a1) )
  {
    WdLogSingleEntry1(1LL, 190LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!!NT_SUCCESS(Status) == IsClientHandleValid()",
      190LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = KeQueryInterruptTimePrecise(&v11);
  v6 = a1[3];
  v7 = *(_DWORD *)a1[2];
  v11 = v5 / 0xA;
  DxgkLogCodePointPacketForSession(0x70u, ***a1, v7, (v5 / 0xA - (unsigned __int64)*v6) / 0x3E8, 0, 0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
}
