/*
 * XREFs of ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C003E904
 * Callers:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BF1B0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxHungAppDemon @ 0x1C00CADB0 (xxxHungAppDemon.c)
 *     xxxSendMinRectMessages @ 0x1C011B6F8 (xxxSendMinRectMessages.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 */

struct tagWND *__fastcall VWPLNextBase(struct tagVWPL *a1, __int64 a2, struct tagWND *a3, unsigned int *a4)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx

  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(0, 4, 11, 13, (__int64)&WPP_7b6843d7872833607704d87654b4b262_Traceguids, 0);
    return 0LL;
  }
  if ( *((_DWORD *)a1 + 3) )
    return 0LL;
  v6 = *a4;
  v7 = *(_DWORD *)a1;
  if ( *a4 >= *(_DWORD *)a1 )
    goto LABEL_10;
  if ( *((struct tagWND **)a1 + 2 * v6 + 3) == a3 )
    *a4 = ++v6;
  if ( v6 >= v7 )
  {
LABEL_10:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v6, 4, 11, 15, (__int64)&WPP_7b6843d7872833607704d87654b4b262_Traceguids, (char)a1);
    *a4 = 0;
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      v6,
      v7,
      11,
      14,
      (__int64)&WPP_7b6843d7872833607704d87654b4b262_Traceguids,
      (char)a1,
      *((_QWORD *)a1 + 2 * v6 + 3));
    v6 = *a4;
  }
  return (struct tagWND *)*((_QWORD *)a1 + 2 * v6 + 3);
}
