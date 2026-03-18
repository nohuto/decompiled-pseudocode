/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x140541CD0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v15[0] = MI_READ_PTE_LOCK_FREE(a2);
  v11 = v15[0] & 0x800;
  if ( (v15[0] & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset((unsigned __int64)v15) )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( v11 )
        v12 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0x600000;
      else
        v12 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0xA00000;
      *(_QWORD *)(a3 + 8) = v12;
    }
    else if ( (a4 & 2) != 0 )
    {
      MiUnlockPageTableInternal(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v10);
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0LL, 0, a5, 0);
      MiUnlockPageTableInternal(a1, a2, v13);
      return 1;
    }
  }
  return v9;
}
