/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00C0CAC
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0014600 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0014780 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0014958 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C011AB70 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01401B8 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeBrushMemory(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx

  v1 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( v1 )
  {
    if ( v1 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, BugCheckParameter2, 0LL, 0LL);
    if ( gpTypeIsolation[3] )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(gpTypeIsolation[3], BugCheckParameter2);
  }
  else if ( gpTypeIsolation[2] )
  {
    NSInstrumentation::CTypeIsolation<40960,160>::Free(gpTypeIsolation[2], BugCheckParameter2);
  }
}
