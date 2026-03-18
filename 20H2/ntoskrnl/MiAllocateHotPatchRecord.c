/*
 * XREFs of MiAllocateHotPatchRecord @ 0x1408CB514
 * Callers:
 *     MiLoadHotPatch @ 0x1408CD410 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CD770 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatch @ 0x140A954CC (MmRegisterHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     memmove @ 0x140411040 (memmove.c)
 */

_DWORD *__fastcall MiAllocateHotPatchRecord(int a1, int a2, const void **a3)
{
  _DWORD *Pool; // rax
  _DWORD *v7; // rbx

  Pool = MiAllocatePool(256, *(unsigned __int16 *)a3 + 48LL, 0x70486D4Du);
  v7 = Pool;
  if ( Pool )
  {
    Pool[6] = a1;
    Pool[7] = a2;
    *((_WORD *)Pool + 16) = *(_WORD *)a3;
    *((_WORD *)Pool + 17) = *(_WORD *)a3;
    *((_QWORD *)Pool + 5) = Pool + 12;
    memmove(Pool + 12, a3[1], *(unsigned __int16 *)a3);
  }
  return v7;
}
