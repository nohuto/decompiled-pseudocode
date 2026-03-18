/*
 * XREFs of ??$?9K@RedirectedFieldpExtraBytes@tagWND@@QBEEABK@Z @ 0x141AE5
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned long>(_DWORD *this, _DWORD *a2)
{
  return *(_DWORD *)(*(this - 43) + 192) != *a2;
}
