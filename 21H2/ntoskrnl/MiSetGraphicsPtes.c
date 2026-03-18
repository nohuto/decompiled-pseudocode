/*
 * XREFs of MiSetGraphicsPtes @ 0x14058C874
 * Callers:
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
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
  unsigned __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp+10h]
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = v8;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v21 = 0LL;
  v22 = v10;
  a5 = a6 & 1;
  if ( (a6 & 1) != 0 && a3 )
  {
    v6 = &v21;
    v21 = *a3;
  }
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v12 = MiLockWorkingSetShared((__int64)v11);
  v13 = v21;
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
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v22 )
      v10 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    valid = MiLockLowestValidPageTable((__int64)v11, v15, &v21);
    v21 = valid;
    if ( valid == ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      break;
LABEL_14:
    if ( v14 )
    {
LABEL_15:
      v18 = (((__int64)(v10 - v15) >> 3) + 1) / (v23 >> 12);
      if ( a5 )
      {
        v13 += v23 * v18;
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
      MiLockWorkingSetShared((__int64)v11);
    }
    v15 = v10 + 8;
    v10 = v22;
    if ( v15 > v22 )
    {
      v8 = v20;
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
      valid = v21;
      goto LABEL_14;
    }
  }
  v7 = -1073741800;
  MiUnlockPageTableInternal((__int64)v11, v21);
LABEL_27:
  MiUnlockWorkingSetShared((__int64)v11, a6);
  return v7;
}
