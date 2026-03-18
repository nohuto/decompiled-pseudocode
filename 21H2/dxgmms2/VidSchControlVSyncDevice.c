/*
 * XREFs of VidSchControlVSyncDevice @ 0x1C00A3490
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0098844 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateDevice @ 0x1C0098CB0 (VidSchTerminateDevice.c)
 * Callees:
 *     ?IncrementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014F8C (-IncrementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_V.c)
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014FB8 (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014FFC (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DerementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C001B528 (-DerementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VI.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     VidSchControlVSyncAdapter @ 0x1C00A3620 (VidSchControlVSyncAdapter.c)
 */

__int64 __fastcall VidSchControlVSyncDevice(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v12; // rcx

  v4 = 0;
  v5 = a4;
  v9 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(a1 + 32);
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= *(_DWORD *)(v10 + 40) )
  {
    WdLogSingleEntry2(1LL, a4, *(unsigned int *)(v10 + 40));
LABEL_17:
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 0LL;
  }
  if ( !*(_BYTE *)(v10 + 2212) )
    v5 = 4294967293LL;
LABEL_3:
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 968), 1u);
  if ( !a3 )
  {
    if ( a2 < 4 )
      DerementRequestVSyncReasonDevice(a2, a1, v10, v5);
    DecrementRequestVSyncCount((unsigned int *)(a1 + 1072), *(struct _VIDSCH_GLOBAL **)(a1 + 32), v5);
  }
  if ( !*(_BYTE *)(v10 + 2212) )
  {
    if ( *(_DWORD *)(a1 + 1072) )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 == -3 )
  {
    if ( *(_DWORD *)(v10 + 40) )
    {
      do
      {
        if ( !*(_DWORD *)(a1 + 4LL * v4 + 1072) )
          v9 = VidSchControlVSyncAdapter((struct _VIDSCH_GLOBAL *)v10);
        ++v4;
      }
      while ( v4 < *(_DWORD *)(v10 + 40) );
    }
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(a1 + 4 * v5 + 1072) )
LABEL_6:
    v9 = VidSchControlVSyncAdapter((struct _VIDSCH_GLOBAL *)v10);
LABEL_7:
  if ( a3 && v9 >= 0 )
  {
    IncrementRequestVSyncCount((unsigned int *)(a1 + 1072), *(struct _VIDSCH_GLOBAL **)(a1 + 32), v5);
    if ( a2 != 4 )
      IncrementRequestVSyncReasonDevice(a2, a1, v10, v5);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 968));
  return (unsigned int)v9;
}
