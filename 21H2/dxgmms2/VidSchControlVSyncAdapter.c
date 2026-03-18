/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1C00A3620
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x1C003C910 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003CE00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncDevice @ 0x1C00A3490 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1C00F55F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014FB8 (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014FD4 (-IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014FFC (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0015018 (-DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     VidSchiControlVSync @ 0x1C00A3788 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3, unsigned int a4)
{
  int v4; // r14d
  __int64 v5; // rbx
  struct _ERESOURCE *v9; // r15
  __int64 v10; // rdx
  unsigned int v11; // r8d
  struct _VIDSCH_GLOBAL *v13; // rdx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 i; // rsi

  v4 = 0;
  v5 = a4;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_14;
  }
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= *((_DWORD *)a1 + 10) )
  {
    WdLogSingleEntry2(1LL, a4, *((unsigned int *)a1 + 10));
LABEL_14:
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    return 0LL;
  }
  if ( !*((_BYTE *)a1 + 2212) )
    v5 = 4294967293LL;
LABEL_3:
  v9 = (struct _ERESOURCE *)((char *)a1 + 1088);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
  if ( !a3 )
  {
    DerementRequestVSyncReasonAdapter(a2, (__int64)a1, v5);
    DecrementRequestVSyncCount((unsigned int *)a1 + 456, v13, v14);
  }
  if ( !*((_BYTE *)a1 + 2212) )
  {
    if ( *((_DWORD *)a1 + 456) )
      goto LABEL_7;
LABEL_11:
    v4 = VidSchiControlVSync(a1);
    goto LABEL_7;
  }
  if ( (_DWORD)v5 == -3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 10); i = (unsigned int)(i + 1) )
    {
      if ( !*((_DWORD *)a1 + i + 456) )
        v4 = VidSchiControlVSync(a1);
    }
    goto LABEL_7;
  }
  if ( !*((_DWORD *)a1 + v5 + 456) )
    goto LABEL_11;
LABEL_7:
  if ( a3 )
  {
    if ( v4 >= 0 )
    {
      IncrementRequestVSyncCount((unsigned int *)a1 + 456, a1, v5);
      IncrementRequestVSyncReasonAdapter(a2, v10, v11);
    }
  }
  ExReleaseResourceLite(v9);
  return (unsigned int)v4;
}
