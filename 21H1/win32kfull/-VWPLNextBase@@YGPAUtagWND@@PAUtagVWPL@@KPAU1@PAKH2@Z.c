/*
 * XREFs of ?VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z @ 0x6FC58
 * Callers:
 *     ?_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1718E (-_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _xxxHungAppDemon@16 @ 0x7336E (_xxxHungAppDemon@16.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 */

struct tagWND *__userpurge VWPLNextBase@<eax>(
        unsigned int *a1@<ecx>,
        struct tagVWPL *a2,
        unsigned int *a3,
        struct tagWND *a4,
        unsigned int *a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v8; // edx
  unsigned int v9; // ecx

  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(0, 4, 0xBu, 13, (int)&WPP_7b6843d7872833607704d87654b4b262_Traceguids, 0);
    return 0;
  }
  if ( a1[3] )
    return 0;
  v8 = *a1;
  v9 = *a3;
  if ( *a3 >= v8 )
    goto LABEL_11;
  if ( (struct tagVWPL *)a1[2 * v9 + 5] == a2 )
    *a3 = ++v9;
  if ( v9 >= v8 )
  {
LABEL_11:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v9, 4, 0xBu, 15, (int)&WPP_7b6843d7872833607704d87654b4b262_Traceguids, (char)a1);
    *a3 = 0;
    return 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qq(11, 14, &WPP_7b6843d7872833607704d87654b4b262_Traceguids, (char)a1, a1[2 * v9 + 5]);
      v9 = *a3;
    }
    return (struct tagWND *)a1[2 * v9 + 5];
  }
}
