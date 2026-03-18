/*
 * XREFs of MiCoalescePlaceholderAllocations @ 0x14096D8A8
 * Callers:
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetNextVad @ 0x140281C00 (MiGetNextVad.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x1406F7F40 (MiUnlockVadRange.c)
 *     MiCheckSecuredVad @ 0x1407A4C90 (MiCheckSecuredVad.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 */

__int64 __fastcall MiCoalescePlaceholderAllocations(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // bl
  unsigned __int64 v7; // r13
  __int64 **Address; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 NextVad; // rdi
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // ebx
  unsigned __int64 v14; // r14
  unsigned __int8 *v15; // rdi
  unsigned __int64 v16; // r15
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 *v20; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+18h]

  v4 = a4;
  CurrentThread = KeGetCurrentThread();
  v7 = MiLockVadRange(a1, a2, a3 & 0xFFFFFFFFFFFFF000uLL, 1);
  if ( v7 >= 2 )
  {
    Address = MiLocateAddress(a2);
    v9 = (unsigned __int64)Address;
    if ( (*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) << 12 == a2 )
    {
      NextVad = (unsigned __int64)Address;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(unsigned int *)(NextVad + 52);
        LODWORD(v12) = v12 & 0x7FFFFFFF;
        if ( (v12 | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 31)) != 0x7FFFFFFFDLL )
          break;
        if ( (*(_DWORD *)(NextVad + 48) & 8) != 0 )
        {
          v13 = MiCheckSecuredVad(
                  NextVad,
                  (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12,
                  ((*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32))
                 - (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32))
                 + 1) << 12,
                  0x55u,
                  v4);
          if ( v13 < 0 )
            goto LABEL_16;
          v4 = a4;
        }
        v14 = NextVad;
        ++v11;
        NextVad = MiGetNextVad(NextVad);
        if ( v11 >= v7 )
        {
          if ( (((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF) != a3 )
            break;
          v15 = (unsigned __int8 *)MiGetNextVad(v9);
          v16 = MiGetNextVad((unsigned __int64)v15);
          MiReferenceVad((__int64)v15);
          MiRemoveVad((unsigned __int64)v15, 0, 0LL);
          *(_QWORD *)v15 = 0LL;
          if ( v15 != (unsigned __int8 *)v14 )
          {
            do
            {
              v17 = (unsigned __int8 *)v16;
              v18 = MiGetNextVad(v16);
              v19 = v16;
              v16 = v18;
              MiReferenceVad(v19);
              MiRemoveVad((unsigned __int64)v17, 0, 0LL);
              *(_QWORD *)v17 = v15;
              v15 = v17;
            }
            while ( v17 != (unsigned __int8 *)v14 );
          }
          *(_DWORD *)(v9 + 28) = a3 >> 12;
          *(_BYTE *)(v9 + 33) = a3 >> 44;
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
          do
          {
            v20 = v15;
            v15 = *(unsigned __int8 **)v15;
            MiDeleteVad(v20, 0LL, 0x40000000);
          }
          while ( v15 );
          MiUnlockVad((__int64)CurrentThread, v9);
          return 0;
        }
      }
    }
  }
  v13 = -1073741800;
LABEL_16:
  MiUnlockVadRange(a1, a2, v7, 1);
  return (unsigned int)v13;
}
