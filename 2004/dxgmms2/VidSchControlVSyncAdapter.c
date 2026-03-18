/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1C0087C30
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x1C0033C60 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C00340E0 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncDevice @ 0x1C0087AE0 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1C00D3F50 (VidSchTerminateAdapter.c)
 * Callees:
 *     ?IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0013FCC (-IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0013FF8 (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014040 (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C001405C (-DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiControlVSync @ 0x1C00866B4 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // r14d
  __int64 v5; // rdi
  char v6; // bp
  unsigned int v7; // r12d
  struct _ERESOURCE *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 i; // rsi

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    goto LABEL_13;
  }
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= *((_DWORD *)a1 + 10) )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = *((unsigned int *)a1 + 10);
LABEL_13:
    WdLogEvent5_WdAssertion(v15);
    return 0LL;
  }
  if ( !*((_BYTE *)a1 + 2132) )
    v5 = 4294967293LL;
LABEL_3:
  v9 = (struct _ERESOURCE *)((char *)a1 + 1072);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1072), 1u);
  if ( !v6 )
  {
    DerementRequestVSyncReasonAdapter(v7, (__int64)a1, v5);
    DecrementRequestVSyncCount((unsigned int *)a1 + 452, a1, v14);
  }
  if ( !*((_BYTE *)a1 + 2132) )
  {
    if ( *((_DWORD *)a1 + 452) )
      goto LABEL_7;
    v16 = -3;
LABEL_27:
    LOBYTE(v10) = v6;
    v4 = VidSchiControlVSync((__int64)a1, v10, v6 != 0 ? 0x10000 : 0, v16);
    goto LABEL_7;
  }
  if ( (_DWORD)v5 == -3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 10); i = (unsigned int)(i + 1) )
    {
      if ( !*((_DWORD *)a1 + i + 452) )
      {
        LOBYTE(v10) = v6;
        v4 = VidSchiControlVSync((__int64)a1, v10, v6 != 0 ? 0x10000 : 0, i);
      }
    }
    goto LABEL_7;
  }
  if ( !*((_DWORD *)a1 + v5 + 452) )
  {
    v16 = v5;
    goto LABEL_27;
  }
LABEL_7:
  if ( v6 )
  {
    if ( v4 >= 0 )
    {
      IncrementRequestVSyncCount((unsigned int *)a1 + 452, a1, v5);
      IncrementRequestVSyncReasonAdapter(v7, v11, v12);
    }
  }
  ExReleaseResourceLite(v9);
  return (unsigned int)v4;
}
