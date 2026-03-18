/*
 * XREFs of ??8?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QBEE$$QAW4ZBID@@@Z @ 0x2FE94
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldzbid<enum ZBID>::operator==(char *this, _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(this - 98) + 148) == *a2;
}
