/*
 * XREFs of ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x180108C94
 * Callers:
 *     ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x180108C10 (-OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::OnConstantChanged(
        __int64 a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int128 *a5)
{
  int v8; // ebx
  __int64 v9; // rdx
  struct IMessageCallSendHost *v11; // rcx
  char *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  unsigned int v17; // [rsp+50h] [rbp-31h] BYREF
  struct IMessageCallSendHost *v18[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  __int128 v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  unsigned int v24; // [rsp+E0h] [rbp+5Fh] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v8 = -2018375660;
    v9 = 9294LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (Microsoft::BamoImpl::BamoProxyImpl *)a1,
         v18,
         &v24,
         &v17);
  if ( v8 < 0 )
  {
    v9 = 9301LL;
    goto LABEL_3;
  }
  v11 = v18[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    v12 = (char *)v18[0] - 16;
    if ( !v18[0] )
      v12 = 0LL;
    v12[72] = 1;
  }
  v13 = *a5;
  v14 = *((_QWORD *)a5 + 2);
  v18[0] = (struct IMessageCallSendHost *)v24;
  v18[1] = (struct IMessageCallSendHost *)v17;
  v19 = v13;
  v15 = *a4;
  v20 = v14;
  v16 = *((_QWORD *)a4 + 2);
  v21 = v15;
  v22 = v16;
  return CoreUICallSend(v11, v18, 2LL, 2LL, 0, &unk_1801C18CC, a2);
}
