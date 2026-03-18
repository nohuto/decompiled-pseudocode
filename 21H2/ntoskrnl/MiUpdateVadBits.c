/*
 * XREFs of MiUpdateVadBits @ 0x140709F54
 * Callers:
 *     MiExpandVadBitMap @ 0x140709E04 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140977E70 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiGetNextVad @ 0x140281C00 (MiGetNextVad.c)
 *     MiLocateLowestConflictingVad @ 0x14029EBB0 (MiLocateLowestConflictingVad.c)
 *     MiSetVadBits @ 0x1407B8A60 (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx

  v2 = a2 < a1;
  CurrentThread = KeGetCurrentThread();
  v5 = 0x7FFFFFFEFFFFLL;
  if ( !v2 )
    v5 = a2;
  result = (unsigned __int64)MiLocateLowestConflictingVad((__int64)CurrentThread->ApcState.Process, a1, v5 - 1);
  v7 = result;
  if ( result )
  {
    do
    {
      MiSetVadBits(v7);
      result = MiGetNextVad(v7);
      v7 = result;
      if ( !result )
        break;
      v8 = *(unsigned __int8 *)(result + 32);
      result = *(unsigned int *)(result + 24);
    }
    while ( (result | (v8 << 32)) << 12 < v5 );
  }
  return result;
}
