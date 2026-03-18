/*
 * XREFs of ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400012DC
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001130 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400014E4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x1400024E4 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400013F0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x14000143C (--1CPortClient@@UEAA@XZ.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001480 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, unsigned int a2, void *a3)
{
  unsigned int v3; // edi
  int v5; // ebx
  _DWORD *v6; // rax
  void *v7; // rdi
  int v8; // eax
  int v9; // eax
  void *v11; // [rsp+28h] [rbp-58h]
  void *v12; // [rsp+28h] [rbp-58h]
  _BYTE v13[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  HANDLE hHeap; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+90h] [rbp+10h]

  v3 = 0;
  if ( *(&g_dwmAppHost + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v13, a2, a3);
    LODWORD(v16) = 1073741871;
    HIDWORD(v16) = a2;
    v5 = 0;
    v14 = (__int64)*(&g_dwmAppHost + 1);
    v6 = HeapAlloc(hHeap, 8u, 0x38uLL);
    v7 = v6;
    if ( v6 )
    {
      v6[10] = 1073741871;
      *v6 = 3670032;
      v12 = 0LL;
      *((_QWORD *)v6 + 6) = v16;
      v8 = NtAlpcSendWaitReceivePort(v14, 0x10000LL, v6, 0LL, 0LL);
      v9 = CPortClient::CheckStatus((CPortClient *)v13, v8);
      if ( v9 < 0 )
      {
        v5 = v9 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(
          4u,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          9u,
          v9 | 0x10000000,
          0x1C2u,
          0LL);
      }
      HeapFree(hHeap, 0, v7);
      v3 = v5;
      if ( v5 >= 0 )
        goto LABEL_6;
    }
    else
    {
      v3 = -2147024882;
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        -2147024882,
        0x1B1u,
        v11);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x164u, v12);
LABEL_6:
    CPortClient::~CPortClient((CPortClient *)v13);
  }
  return v3;
}
