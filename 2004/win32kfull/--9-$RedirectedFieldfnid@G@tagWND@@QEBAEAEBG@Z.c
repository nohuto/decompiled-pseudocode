/*
 * XREFs of ??9?$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z @ 0x1C00BBE5C
 * Callers:
 *     xxxEventWndProc @ 0x1C0030FD0 (xxxEventWndProc.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldfnid<unsigned short>::operator!=(__int64 a1, _WORD *a2)
{
  return *(_WORD *)(*(_QWORD *)(a1 - 47) + 42LL) != *a2;
}
