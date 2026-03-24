/*
 * XREFs of _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C0166500
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C0166298 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019DF8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001AD7C (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C0166934 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

void __fastcall lambda_d7c4861ef0734605370a98f05df27570_::operator()(unsigned int ***a1)
{
  HANDLE **v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int *v8; // r8
  unsigned __int64 v9; // kr00_8
  unsigned int **v10; // rax
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)*a1 + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v13);
  v2 = (HANDLE **)a1[1];
  v3 = (__int64)*a1;
  v14 = 2;
  DispBrokerClientReference::Assign((HANDLE **)(v3 + 48), *v2);
  v4 = *(_DWORD *)a1[2];
  if ( v4 >= 0 != DispBrokerClient::IsClientHandleValid((DispBrokerClient *)*a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v11 + 24) = 187LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = KeQueryInterruptTimePrecise(&v15);
  v8 = (unsigned int *)a1[2];
  v9 = v7;
  v10 = a1[3];
  v15 = v9 / 0xA;
  DxgkLogCodePointPacketForSession(0x70u, ***a1, *v8, (v9 / 0xA - (unsigned __int64)*v10) / 0x3E8, 0, 0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
}
