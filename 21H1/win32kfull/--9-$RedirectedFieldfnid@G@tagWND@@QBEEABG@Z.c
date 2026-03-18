/*
 * XREFs of ??9?$RedirectedFieldfnid@G@tagWND@@QBEEABG@Z @ 0x154804
 * Callers:
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldfnid<unsigned short>::operator!=(char *this, _WORD *a2)
{
  return *(_WORD *)(*(_DWORD *)(this - 27) + 30) != *a2;
}
