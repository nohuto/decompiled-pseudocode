/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002C888
 * Callers:
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18002C29C (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002C4A0 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x180061D94 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x1800689FC (--0CVolumeStrip@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z @ 0x1800FA264 (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
