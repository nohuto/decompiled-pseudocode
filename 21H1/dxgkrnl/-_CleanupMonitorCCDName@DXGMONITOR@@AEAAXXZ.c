/*
 * XREFs of ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C02F43A4
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02F3FBC (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_CleanupMonitorCCDName(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  void *v9; // rcx

  if ( *((_QWORD *)this + 71) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v3 = *((_QWORD *)this + 71);
    if ( (*(_DWORD *)(v3 + 16))-- == 1 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 71);
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      operator delete[](*((void **)this + 71));
    }
    *((_QWORD *)this + 71) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 516) )
  {
    if ( !*((_QWORD *)this + 66) )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v8);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 520));
    *((_QWORD *)this + 66) = 0LL;
    *((_BYTE *)this + 516) = 0;
  }
  *((_QWORD *)this + 68) = 0LL;
  v9 = (void *)*((_QWORD *)this + 70);
  if ( v9 )
  {
    operator delete[](v9);
    *((_QWORD *)this + 70) = 0LL;
  }
}
