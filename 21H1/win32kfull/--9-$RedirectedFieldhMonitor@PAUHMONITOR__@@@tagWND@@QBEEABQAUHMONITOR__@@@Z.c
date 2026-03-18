/*
 * XREFs of ??9?$RedirectedFieldhMonitor@PAUHMONITOR__@@@tagWND@@QBEEABQAUHMONITOR__@@@Z @ 0x13F41E
 * Callers:
 *     _xxxProcessSetWindowPosEvent@4 @ 0x16FEA (_xxxProcessSetWindowPosEvent@4.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldhMonitor<HMONITOR__ *>::operator!=(char *this, _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(this - 99) + 164) != *a2;
}
