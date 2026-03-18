/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x1C0031940
 * Callers:
 *     <none>
 * Callees:
 *     LogicalToPhysicalDPIPoint @ 0x1C0030850 (LogicalToPhysicalDPIPoint.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0031FC0 (PhysicalToLogicalDPIPoint.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003265C (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v8; // r8d
  int v9; // ecx
  int v10; // edx
  int v12; // ebx

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext();
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v8 >> 8)) & 0x1FF) != 0 )
    goto LABEL_12;
  v9 = 1;
  v10 = (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0;
  if ( (v8 & 0xF) != 2 || (v8 & 0x20000000) == 0 )
    v9 = 0;
  if ( v10 != v9 )
  {
LABEL_12:
    v12 = LogicalToPhysicalDPIPoint((__int64)a1, (__int64)a2, v8, 0LL);
    return v12 | (unsigned int)PhysicalToLogicalDPIPoint(a1, a1, CurrentThreadDpiAwarenessContext, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
