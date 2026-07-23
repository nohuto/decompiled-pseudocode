/*
 * XREFs of MiUpdateVadBits @ 0x1406C0020
 * Callers:
 *     MiExpandVadBitMap @ 0x1406BFED0 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x1408D0F84 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiLocateLowestConflictingVad @ 0x1402A3090 (MiLocateLowestConflictingVad.c)
 *     MiSetVadBits @ 0x140704240 (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 ***v9; // rcx

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
      result = *(_QWORD *)(v7 + 8);
      v8 = v7;
      if ( result )
      {
        v9 = *(__int64 ****)result;
        v7 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)result )
        {
          do
          {
            result = (unsigned __int64)*v9;
            v7 = (unsigned __int64)v9;
            v9 = (__int64 ***)result;
          }
          while ( result );
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)v7 == v8 )
            break;
          v8 = v7;
        }
      }
      if ( !v7 )
        break;
      result = *(unsigned int *)(v7 + 24);
    }
    while ( (result | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12 < v5 );
  }
  return result;
}
