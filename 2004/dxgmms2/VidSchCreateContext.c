/*
 * XREFs of VidSchCreateContext @ 0x1C007FC00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateContextInternal @ 0x1C000FF50 (VidSchiCreateContextInternal.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0010D00 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C00144C0 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 */

char *__fastcall VidSchCreateContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // r9d
  unsigned int v6; // edx
  __int64 v7; // rcx
  int SoftwareOnlyNodeForDriverEngine; // eax
  int *v9; // r10
  __int64 v10; // r11
  __int64 v12; // rax

  if ( a1 && a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 768LL);
    v5 = *(_WORD *)a2 & 0x440;
    *(_DWORD *)a2 = (4 * (v5 != 0)) | *(_DWORD *)a2 & 0xFFFFFFE2 | 8 | (16 * (v5 == 0));
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_QWORD *)(v4 + 32);
    if ( v5 )
      SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(v7, v6);
    else
      SoftwareOnlyNodeForDriverEngine = VidSchiDriverNodeEngineToSchedulerNode(v7, *(_DWORD *)(a2 + 4), v6);
    v9[1] = SoftwareOnlyNodeForDriverEngine;
    return VidSchiCreateContextInternal(v4, v9, v10);
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v12);
    return 0LL;
  }
}
