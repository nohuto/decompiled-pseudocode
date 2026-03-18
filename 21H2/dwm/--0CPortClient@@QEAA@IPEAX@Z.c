/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400013F0
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400012DC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001D50 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F74 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, __int64 a2, void *a3)
{
  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = GetProcessHeap();
  return this;
}
