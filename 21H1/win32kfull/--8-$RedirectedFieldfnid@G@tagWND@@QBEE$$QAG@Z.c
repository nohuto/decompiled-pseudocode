/*
 * XREFs of ??8?$RedirectedFieldfnid@G@tagWND@@QBEE$$QAG@Z @ 0xA76D4
 * Callers:
 *     _SetDialogPointer@8 @ 0xA756E (_SetDialogPointer@8.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldfnid<unsigned short>::operator==(char *this, _WORD *a2)
{
  return *(_WORD *)(*(_DWORD *)(this - 27) + 30) == *a2;
}
