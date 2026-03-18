/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x1405A6840
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, char a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v14[0] = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v14[0] & 0x800;
  if ( (v14[0] & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset((__int64)v14) )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( v10 )
        v11 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0x600000;
      else
        v11 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0xA00000;
      *(_QWORD *)(a3 + 8) = v11;
    }
    else if ( (a4 & 2) != 0 )
    {
      MiUnlockPageTableInternal(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v12) = a5;
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0LL, 0, v12, 0);
      MiUnlockPageTableInternal(a1, a2);
      return 1;
    }
  }
  return v9;
}
