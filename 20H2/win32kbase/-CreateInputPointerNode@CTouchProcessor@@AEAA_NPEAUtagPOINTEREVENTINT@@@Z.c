/*
 * XREFs of ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0189828
 * Callers:
 *     ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C0189A0C (-CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0189B24 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::CreateInputPointerNode(CTouchProcessor *this, struct tagPOINTEREVENTINT *a2)
{
  unsigned __int16 v2; // bp
  unsigned int v3; // r14d
  char v4; // di
  unsigned int v5; // r15d
  unsigned __int16 v7; // r12
  void *v9; // rdx
  int v10; // edx
  struct CInputPointerNode *NodeById; // r10
  int v12; // edx
  __int64 v14; // rcx

  v2 = *(_WORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 5);
  v7 = *((_WORD *)a2 + 6);
  v9 = &WPP_50814762fbc63e38c7e5eacf83347307_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      7,
      238,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  NodeById = CTouchProcessor::FindNodeById(this, v2, 1, 1);
  if ( NodeById || (NodeById = CTouchProcessor::CreateNode(this, v2, v3, v5, v7), v4 = 1, NodeById) )
  {
    *((_DWORD *)a2 + 3) = *((unsigned __int16 *)NodeById + 16);
    if ( v4 )
      *((_DWORD *)a2 + 5) |= 1u;
    v14 = *(_QWORD *)((char *)NodeById + 36);
    if ( !v14 )
      v14 = *(_QWORD *)((char *)NodeById + 44);
    if ( !v14 )
      *(_OWORD *)((char *)NodeById + 36) = *((_OWORD *)a2 + 10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        7,
        241,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    return 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v10,
        7,
        239,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v12) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            7,
            240,
            (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        }
      }
    }
    return 0;
  }
}
