/*
 * XREFs of sub_180001FD0 @ 0x180001FD0
 * Callers:
 *     sub_180002BE8 @ 0x180002BE8 (sub_180002BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001FD0(int a1)
{
  dword_18005AC60 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18005AD40);
}
