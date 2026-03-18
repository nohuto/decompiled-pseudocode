/*
 * XREFs of ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18003D2B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18003D380 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18003D650 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CComposition::Partition_SetCurrentMmTask(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETCURRENTMMTASK *a4)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  _OWORD v16[9]; // [rsp+30h] [rbp-A8h] BYREF

  v5 = *(_OWORD *)((char *)a4 + 24);
  v16[0] = *(_OWORD *)((char *)a4 + 8);
  v6 = *(_OWORD *)((char *)a4 + 40);
  v16[1] = v5;
  v7 = *(_OWORD *)((char *)a4 + 56);
  v16[2] = v6;
  v8 = *(_OWORD *)((char *)a4 + 72);
  v16[3] = v7;
  v9 = *(_OWORD *)((char *)a4 + 88);
  v16[4] = v8;
  v10 = *(_OWORD *)((char *)a4 + 104);
  v16[5] = v9;
  v11 = *(_OWORD *)((char *)a4 + 136);
  v16[6] = v10;
  v16[7] = *(_OWORD *)((char *)a4 + 120);
  v16[8] = v11;
  v12 = CMmcssTask::Set((CComposition *)((char *)this + 184), (const struct DWM_MMTASK *)v16, 1);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x428u, 0LL);
  else
    CComposition::UpdateMmcssPartners(this);
  return v14;
}
