/*
 * XREFs of ExQueueDpcEventWait @ 0x14063E340
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectDpc @ 0x140565F08 (KeRegisterObjectDpc.c)
 */

char __fastcall ExQueueDpcEventWait(__int64 a1, char a2, __int64 a3, _DWORD *a4)
{
  if ( *(_BYTE *)(a1 + 17) != 5 )
    __fastfail(5u);
  LOBYTE(a4) = a2;
  return KeRegisterObjectDpc(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 48), a1, a4);
}
