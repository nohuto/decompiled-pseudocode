/*
 * XREFs of ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x18007BB3C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x180078E58 (-GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180078EAC (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800790F0 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18007BD30 (-NeedsPresent@CFrameInfo@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x18011256C (McTemplateU0xxxxq_EventWriteTransfer.c)
 */

char __fastcall CPartitionVerticalBlankScheduler::PresentFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3)
{
  char v6; // r15
  __int64 v7; // rdx
  CComposition *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v12; // rtt
  _QWORD v13[2]; // [rsp+40h] [rbp-58h] BYREF
  char v14; // [rsp+50h] [rbp-48h]
  char v15; // [rsp+51h] [rbp-47h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0;
  if ( CFrameInfo::NeedsPresent(a2) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v12 = *((_QWORD *)this + 2147);
      McTemplateU0xxxxq_EventWriteTransfer(
        *((_QWORD *)a2 + 2),
        10000000 * (v12 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart,
        10000000 * (v12 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
      + 10000000 * (v12 / g_qpcFrequency.QuadPart),
        (unsigned __int64)(10000000 * (*(_QWORD *)(v7 + 232) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
      - (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 32) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
      + 10000000 * (*(_QWORD *)(v7 + 232) / g_qpcFrequency.QuadPart - *((_QWORD *)a2 + 32) / g_qpcFrequency.QuadPart),
        *((_QWORD *)a2 + 2),
        *((_BYTE *)a2 + 8) - 1);
    }
    v8 = (CComposition *)*((_QWORD *)this + 8);
    v13[1] = (char *)this + 4536;
    v14 = *((_BYTE *)this + 4852);
    v15 = *((_BYTE *)this + 4854);
    v13[0] = a2;
    if ( !(unsigned int)CComposition::Present(v8, (struct FRAME_TIME_INFO *)v13) )
    {
      *((_BYTE *)a2 + 153) = 1;
      CPartitionVerticalBlankScheduler::GetPresentCount(this, a2);
      v9 = *((_QWORD *)this + 2147);
      *((_DWORD *)this + 1126) = a3;
      *((_QWORD *)a2 + 10) = v9;
      ++*((_QWORD *)this + 2145);
    }
    CComposition::FlushChannels(*((CComposition **)this + 8));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PRESENT_Stop,
        v10,
        1u,
        &v16);
    v6 = 1;
    *((_BYTE *)this + 4852) |= v14;
  }
  return v6;
}
