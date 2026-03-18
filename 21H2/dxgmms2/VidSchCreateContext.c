/*
 * XREFs of VidSchCreateContext @ 0x1C00987A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateContextInternal @ 0x1C001270C (VidSchiCreateContextInternal.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C001350C (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0018E48 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchCreateContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int16 v4; // r9
  unsigned int v5; // edx
  __int64 v6; // rcx
  int SoftwareOnlyNodeForDriverEngine; // eax
  int *v8; // r10
  __int64 v9; // r11
  __int64 v11; // rcx

  if ( a1 && a2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 768LL);
    v4 = *(_WORD *)a2 & 0x440;
    *(_DWORD *)a2 = (4 * (v4 != 0)) | *(_DWORD *)a2 & 0xFFFFFFE2 | 8 | (16 * (v4 == 0));
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_QWORD *)(v3 + 32);
    if ( (v4 & 0x440) != 0 )
      SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(v6, v5);
    else
      SoftwareOnlyNodeForDriverEngine = VidSchiDriverNodeEngineToSchedulerNode(v6, *(_DWORD *)(a2 + 4), v5);
    v8[1] = SoftwareOnlyNodeForDriverEngine;
    return VidSchiCreateContextInternal(v3, v8, v9);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 0LL;
  }
}
