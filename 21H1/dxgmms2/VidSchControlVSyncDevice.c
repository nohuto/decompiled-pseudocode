/*
 * XREFs of VidSchControlVSyncDevice @ 0x1C0087B00
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002924 (VidSchiSetFlipDevice.c)
 *     VidSchiCreateDeviceInternal @ 0x1C007FCC0 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateDevice @ 0x1C0080130 (VidSchTerminateDevice.c)
 * Callees:
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0013FF8 (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014014 (-IncrementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_V.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0014040 (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DerementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0032CA4 (-DerementRequestVSyncReasonDevice@@YAXW4_VIDSCH_VSYNC_REASON_DEVICE@@PEAU_VIDSCH_DEVICE@@PEAU_VI.c)
 *     VidSchControlVSyncAdapter @ 0x1C0087C50 (VidSchControlVSyncAdapter.c)
 */

__int64 __fastcall VidSchControlVSyncDevice(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // r14d
  __int64 v5; // rbx
  char v6; // r15
  unsigned int v7; // r12d
  __int64 v9; // rsi
  struct _ERESOURCE *v10; // r13
  __int64 v12; // rax
  __int64 i; // rbp

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(a1 + 32);
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= *(_DWORD *)(v9 + 40) )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = *(unsigned int *)(v9 + 40);
LABEL_17:
    WdLogEvent5_WdAssertion(v12);
    return 0LL;
  }
  if ( !*(_BYTE *)(v9 + 2132) )
    v5 = 4294967293LL;
LABEL_3:
  v10 = (struct _ERESOURCE *)(a1 + 968);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 968), 1u);
  if ( !v6 )
  {
    if ( v7 < 4 )
      DerementRequestVSyncReasonDevice(v7, a1, v9, v5);
    DecrementRequestVSyncCount((unsigned int *)(a1 + 1072), *(struct _VIDSCH_GLOBAL **)(a1 + 32), v5);
  }
  if ( !*(_BYTE *)(v9 + 2132) )
  {
    if ( *(_DWORD *)(a1 + 1072) )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 == -3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 40); i = (unsigned int)(i + 1) )
    {
      if ( !*(_DWORD *)(a1 + 4 * i + 1072) )
        v4 = VidSchControlVSyncAdapter((struct _VIDSCH_GLOBAL *)v9);
    }
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(a1 + 4 * v5 + 1072) )
LABEL_6:
    v4 = VidSchControlVSyncAdapter((struct _VIDSCH_GLOBAL *)v9);
LABEL_7:
  if ( v6 && v4 >= 0 )
  {
    IncrementRequestVSyncCount((unsigned int *)(a1 + 1072), *(struct _VIDSCH_GLOBAL **)(a1 + 32), v5);
    if ( v7 != 4 )
      IncrementRequestVSyncReasonDevice(v7, a1, v9, v5);
  }
  ExReleaseResourceLite(v10);
  return (unsigned int)v4;
}
