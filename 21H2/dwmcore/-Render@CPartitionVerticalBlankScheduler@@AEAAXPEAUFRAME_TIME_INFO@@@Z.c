/*
 * XREFs of ?Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z @ 0x18007BC40
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800790F0 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18007BD30 (-NeedsPresent@CFrameInfo@@QEBA_NXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::Render(
        CPartitionVerticalBlankScheduler *this,
        struct FRAME_TIME_INFO *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  bool v6; // cl
  unsigned __int8 v7; // al
  bool v8; // zf
  CFrameInfo *v9; // rcx
  bool v10; // al
  __int64 v11; // rcx
  bool v12; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+38h] [rbp-20h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_RENDER_Start,
      a3,
      1u,
      &v13);
  v5 = *((_QWORD *)this + 8);
  v6 = 0;
  v12 = 0;
  *(_DWORD *)(v5 + 1112) = 0;
  *(_QWORD *)(v5 + 488) = a2;
  if ( a2 )
  {
    CComposition::ProcessComposition((CComposition *)v5, &v12);
    v6 = v12;
  }
  *(_QWORD *)(v5 + 488) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 564) + 152LL) = v6;
  v7 = *((_BYTE *)a2 + 16);
  v8 = (v7 | *((_BYTE *)this + 4852)) == 0;
  *((_BYTE *)this + 4852) |= v7;
  if ( !v8 )
    *((_BYTE *)this + 4853) = *(_DWORD *)(*((_QWORD *)this + 8) + 472LL) == 0;
  if ( !CFrameInfo::NeedsPresent(*((CFrameInfo **)this + 564)) )
  {
    CComposition::FlushChannels(*((CComposition **)this + 8));
    v9 = (CFrameInfo *)*((_QWORD *)this + 564);
  }
  v10 = CFrameInfo::NeedsPresent(v9);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0q_EventWriteTransfer(v11, &EVTDESC_SCHEDULE_RENDER_Stop, v10);
}
