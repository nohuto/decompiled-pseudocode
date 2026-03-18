/*
 * XREFs of ?UnblockDeferredInput@@YGXPAUtagTHREADINFO@@@Z @ 0xF1082
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 */

void __thiscall UnblockDeferredInput(_DWORD *this)
{
  int v2; // esi
  _DWORD *i; // esi
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( (this[172] & 0x20000000) != 0 )
  {
    v2 = this[59];
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v5, v2);
    for ( i = *(_DWORD **)(v2 + 12); ; i = (_DWORD *)*i )
    {
      if ( !i )
      {
        this[172] &= ~0x20000000u;
        return;
      }
      if ( (i[16] & 0x30000) != 0 && (_DWORD *)i[17] == this )
        break;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0);
    if ( RIMQpcCountToMilliSecs(
           PerformanceCounter.LowPart - i[22],
           (unsigned __int64)(PerformanceCounter.QuadPart - *((_QWORD *)i + 11)) >> 32) > 0x2710u )
      HandleDeferredInput(this, 4, 0);
  }
}
