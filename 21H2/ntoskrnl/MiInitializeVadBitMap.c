/*
 * XREFs of MiInitializeVadBitMap @ 0x1406BFDE4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x1406BFED0 (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadBitMap(int a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v2; // edi
  __int64 v4; // r14
  __int64 Process; // r13
  __int64 v6; // rbp
  __int64 *i; // rsi
  unsigned __int64 v8; // rcx
  int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = *(_QWORD *)(Process + 1680);
  if ( *(_QWORD *)(v6 + 264) )
  {
    for ( i = (__int64 *)(v6 + 64); ; i += 9 )
    {
      v8 = (unsigned __int64)i[6] >> 15 << 12;
      *i = i[6] & 0x7FFF;
      *(i - 1) = qword_140C4E3A0 + 4 * (v8 >> 2);
      if ( a1 == 1 )
        *(i - 2) = 0LL;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      v9 = MiExpandVadBitMap(i - 2, 1LL);
      i[2] = *i;
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( !v9 )
        break;
      if ( (unsigned __int64)++v4 >= *(_QWORD *)(v6 + 264) )
        return v2;
    }
    return (unsigned int)-1073741801;
  }
  return v2;
}
