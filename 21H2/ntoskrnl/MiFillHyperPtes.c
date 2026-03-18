/*
 * XREFs of MiFillHyperPtes @ 0x140236274
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiMakeHyperPteDemandZero @ 0x140236400 (MiMakeHyperPteDemandZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v7; // r10
  unsigned __int64 *v8; // r9
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  _KPROCESS *Process; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  char *v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  char v17; // [rsp+48h] [rbp-80h] BYREF
  char v18; // [rsp+78h] [rbp-50h] BYREF

  v4 = 4LL;
  v16 = 4LL;
  v7 = 4LL;
  v8 = (unsigned __int64 *)&v17;
  do
  {
    *(v8 - 1) = a1;
    *v8 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 += 2;
    --v7;
  }
  while ( v7 );
  v9 = (unsigned __int64 *)&v18;
  v15 = &v18;
  do
  {
    v10 = *(v9 - 1);
    v11 = *v9;
    if ( *(_DWORD *)a4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( v10 <= v11 )
      {
        do
        {
          v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          LOBYTE(v8) = a3;
          MiMakeSystemAddressValid(v10, 0, 0, (_DWORD)v8, 0);
          do
          {
            if ( !MI_READ_PTE_LOCK_FREE(v10) )
              MiMakeHyperPteDemandZero(v10, v14, a4);
            v10 += 8LL;
          }
          while ( v10 <= v11 && (v10 & 0xFFF) != 0 );
          MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v13);
        }
        while ( v10 <= v11 );
        v9 = (unsigned __int64 *)v15;
        v4 = v16;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v11 - v10) >> 3) + 1;
    }
    v9 -= 2;
    --v4;
    v15 = (char *)v9;
    v16 = v4;
  }
  while ( v4 );
}
