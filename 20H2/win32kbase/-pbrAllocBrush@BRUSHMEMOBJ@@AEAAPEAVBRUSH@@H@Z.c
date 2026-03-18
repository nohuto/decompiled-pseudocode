/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001CAB8
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C001C760 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C8E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C001CBFC (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00A36F4 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0118B68 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013DD44 (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 v3; // rax
  ULONG_PTR v4; // rbx

  *((_DWORD *)this + 4) = 0;
  if ( !a2 )
  {
    if ( gpTypeIsolation[2] )
    {
      v3 = NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
      goto LABEL_4;
    }
LABEL_11:
    v4 = 0LL;
    goto LABEL_5;
  }
  if ( !gpTypeIsolation[3] )
    goto LABEL_11;
  v3 = NSInstrumentation::CTypeIsolation<49152,192>::Allocate();
LABEL_4:
  v4 = v3;
LABEL_5:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_DWORD *)(v4 + 84) = 0;
    *(_DWORD *)(v4 + 96) = 0;
    *(_DWORD *)(v4 + 100) = -1;
    *(_DWORD *)(v4 + 144) = a2 != 0;
    *(_QWORD *)(v4 + 48) = v4 + 72;
    *(_DWORD *)(v4 + 44) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(2LL, v4, v4 + 136) )
    {
      FreeBrushMemory(v4);
      return 0LL;
    }
  }
  return (struct BRUSH *)v4;
}
