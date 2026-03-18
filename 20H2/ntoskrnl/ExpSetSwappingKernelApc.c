/*
 * XREFs of ExpSetSwappingKernelApc @ 0x14099AA70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x14020AC60 (KeSetKernelStackSwapEnable.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall ExpSetSwappingKernelApc(__int64 a1, __int64 a2, BOOLEAN *a3, struct _KEVENT **a4)
{
  struct _KEVENT *v4; // rbx

  v4 = *a4;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0 )
    KeSetKernelStackSwapEnable(*a3);
  return KeSetEvent(v4, 0, 0);
}
