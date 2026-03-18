/*
 * XREFs of MiComputeIdealLargePage @ 0x1405C1218
 * Callers:
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetVadPte @ 0x1405C2764 (MiGetVadPte.c)
 */

__int64 __fastcall MiComputeIdealLargePage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 result; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  unsigned __int64 VadPte; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // r11
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  unsigned int v27; // [rsp+20h] [rbp-58h]
  unsigned __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]
  unsigned __int64 valid; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 v32; // [rsp+80h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 48);
  result = ((unsigned __int64)v4 >> 19) & 3;
  v8 = MiVadPageSizes[result];
  if ( v8 >= 0x10 && (v4 & 0x800000) != 0 )
  {
    v9 = -1LL;
    v27 = MiVadPageIndices[result];
    v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
    VadPte = MiGetVadPte(a1);
    v13 = VadPte;
    v14 = v8;
    if ( v8 == 16 )
      v14 = 1LL;
    v28 = v14;
    v15 = v14 * (512 - ((VadPte >> 3) & 0x1FF));
    v29 = MiGetVadPte(v12);
    result = MiGetVadPte(v16);
    v30 = result;
    if ( v13 != v29 || a3 < v15 )
    {
      v32 = MiLockWorkingSetShared((__int64)v10);
      valid = MiLockLowestValidPageTable((__int64)v10, v13, &valid);
      if ( valid == ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        if ( (v13 & 0xFFF) == 0 )
          goto LABEL_16;
        v17 = v13;
        while ( 1 )
        {
          if ( v17 == v29 )
          {
LABEL_15:
            v14 = v28;
            goto LABEL_16;
          }
          v18 = 128LL;
          if ( v8 != 16 )
            v18 = 8LL;
          v17 -= v18;
          v19 = MI_READ_PTE_LOCK_FREE(v17);
          if ( (v19 & 1) != 0 )
            break;
          if ( (v17 & 0xFFF) == 0 )
            goto LABEL_15;
        }
        v24 = v13 - v17;
        v14 = v28;
        v9 = ((v19 >> 12) & 0xFFFFFFFFFFLL) + v28 * (v24 >> 3);
        if ( v9 == -1 )
        {
LABEL_16:
          if ( a3 < v15 )
          {
            v20 = v13 + 8 * (a3 / v14);
            if ( (v20 & 0xFFF) != 0 )
            {
              v21 = v13 + 8 * (a3 / v14);
              while ( v21 < v30 )
              {
                v22 = MI_READ_PTE_LOCK_FREE(v20);
                if ( (v22 & 1) != 0 )
                {
                  v25 = v28 * ((__int64)(v21 - v13) >> 3);
                  v26 = (v22 >> 12) & 0xFFFFFFFFFFLL;
                  if ( v26 < v25 )
                    v9 = -1LL;
                  else
                    v9 = v26 - v25;
                  break;
                }
                v23 = 128LL;
                if ( v8 != 16 )
                  v23 = 8LL;
                v20 = v21 + v23;
                v21 = v20;
                if ( (v20 & 0xFFF) == 0 )
                  break;
              }
            }
          }
        }
      }
      MiUnlockPageTableInternal((__int64)v10, valid);
      result = MiUnlockWorkingSetShared((__int64)v10, v32);
      if ( v9 != -1 )
      {
        result = v27;
        *(_DWORD *)(a4 + 48) = v27;
        *(_QWORD *)(a4 + 40) = v9;
      }
    }
  }
  return result;
}
