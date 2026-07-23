/*
 * XREFs of MiSetGraphicsPtes @ 0x14053487C
 * Callers:
 *     MmSetGraphicsPtes @ 0x1408C7010 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSetGraphicsPtes(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned __int64 *v6; // r15
  unsigned int v7; // edi
  unsigned __int64 v8; // r12
  unsigned __int8 v9; // si
  unsigned __int64 v10; // r13
  unsigned __int64 *v11; // rbp
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rbx
  int v14; // esi
  unsigned __int64 v15; // r14
  unsigned __int64 valid; // r8
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned __int64 v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp+10h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = v8;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v25 = 0LL;
  v26 = v10;
  a5 = a6 & 1;
  if ( (a6 & 1) != 0 && a3 )
  {
    v6 = &v25;
    v25 = *a3;
  }
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v12 = MiLockWorkingSetShared((__int64)v11, a2, 0xFFFFF68000000000uLL, (_DWORD *)0x7FFFFFFFF8LL);
  v13 = v25;
  a6 = v12;
  v14 = (v9 & 2) == 0;
  while ( 1 )
  {
    v15 = v8;
    if ( v8 <= v10 )
      break;
LABEL_24:
    if ( (unsigned int)++v14 >= 2 )
      goto LABEL_27;
  }
  while ( 1 )
  {
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v26 )
      v10 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    valid = MiLockLowestValidPageTable((__int64)v11, v15, v24);
    v25 = valid;
    if ( valid == ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      break;
LABEL_14:
    if ( v14 )
    {
LABEL_15:
      v18 = (((__int64)(v10 - v15) >> 3) + 1) / (v27 >> 12);
      if ( a5 )
      {
        v13 += v27 * v18;
      }
      else if ( v6 )
      {
        v6 += v18;
      }
    }
LABEL_19:
    MiUnlockPageTableInternal((__int64)v11, valid);
    if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v11, a6);
      MiLockWorkingSetShared((__int64)v11, v19, v20, v21);
    }
    v15 = v10 + 8;
    v10 = v26;
    if ( v15 > v26 )
    {
      v8 = v23;
      goto LABEL_24;
    }
  }
  if ( v14 )
    goto LABEL_15;
  v17 = v15;
  if ( v15 > v10 )
    goto LABEL_19;
  while ( !MI_READ_PTE_LOCK_FREE(v17) )
  {
    v17 += 8LL;
    if ( v17 > v10 )
    {
      valid = v25;
      goto LABEL_14;
    }
  }
  v7 = -1073741800;
  MiUnlockPageTableInternal((__int64)v11, v25);
LABEL_27:
  MiUnlockWorkingSetShared((__int64)v11, a6);
  return v7;
}
