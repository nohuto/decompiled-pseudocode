/*
 * XREFs of _QueryAutoRotationState@0 @ 0x141575
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     <none>
 */

int __stdcall QueryAutoRotationState()
{
  return (*(int (__thiscall **)(PVOID))(*(_DWORD *)dword_274060 + 8))(dword_274060);
}
