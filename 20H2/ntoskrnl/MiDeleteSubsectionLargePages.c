/*
 * XREFs of MiDeleteSubsectionLargePages @ 0x1403F4D98
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockPage @ 0x14030EF8C (MiUnlockPage.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiGetLeafPfnBuddy @ 0x14038020C (MiGetLeafPfnBuddy.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F49E4 (MiConvertSmallPageRangeToLarge.c)
 *     MiFreeLargePages @ 0x14055C9C8 (MiFreeLargePages.c)
 *     MmUnlockPreChargedPagedPool @ 0x140773370 (MmUnlockPreChargedPagedPool.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408CAD20 (MmReturnChargesToLockPagedPool.c)
 */

__int64 __fastcall MiDeleteSubsectionLargePages(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // r14
  ULONG_PTR v8; // rdi
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 LeafPfnBuddy; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned __int64 v15; // r13
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rbx
  __int64 result; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int8 v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  v24 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  v6 = a1;
  if ( a2 )
  {
    do
    {
      v8 = (__int64)(v5 + 0xB000000000LL) / 48;
      LeafPfnBuddy = MiGetLeafPfnBuddy(v5);
      if ( a3 )
      {
        MiUpdateLargePageBitMap(
          *(_QWORD *)(qword_140C4E4C8 + 8 * ((v5[5] >> 39) & 0x3FFLL)),
          (__int64)(v5 + 0xB000000000LL) / 48,
          0x200uLL,
          0,
          1);
        v15 = (unsigned __int64)(v5 + 3072);
        if ( v5 < v5 + 3072 )
        {
          v16 = v5 + 3;
          v3 += 512LL;
          do
          {
            v23 = MiLockPageInline((__int64)(v16 - 3), v12, v13, v14);
            v17 = *v16 & 0xC000000000000000uLL;
            v18 = *((_WORD *)v16 + 4) == 2;
            *((_WORD *)v16 + 4) -= 2;
            *v16 = v17;
            if ( v18 )
            {
              _InterlockedOr(v21, 0);
              MiSetPfnTbFlushStamp((__int64)(v16 - 3), KiTbFlushTimeStamp, 1);
              MiInsertPageInFreeOrZeroedList(v8, 2);
            }
            else
            {
              if ( (v17 & 0x4000000000000000LL) == 0 )
                *v16 = v17 | 0x4000000000000000LL;
              *((_BYTE *)v16 + 10) |= 7u;
            }
            MiUnlockPage((__int64)(v16 - 3), v23);
            v16 += 6;
            ++v8;
          }
          while ( (unsigned __int64)(v16 - 3) < v15 );
        }
      }
      else
      {
        MiConvertSmallPageRangeToLarge((__int64)(v5 + 0xB000000000LL) / 48, 1LL, v9, v10);
        v4 += MiFreeLargePages(v5, &v24);
        v3 += 512LL;
      }
      v5 = (_QWORD *)LeafPfnBuddy;
    }
    while ( LeafPfnBuddy );
    v6 = a1;
  }
  v19 = 8LL * *(unsigned int *)(v6 + 44);
  MmUnlockPreChargedPagedPool(*(_QWORD *)(v6 + 8), v19);
  MmReturnChargesToLockPagedPool(*(_QWORD *)(v6 + 8), v19);
  result = v4;
  *(_QWORD *)(*(_QWORD *)v6 + 120LL) ^= (*(_QWORD *)(*(_QWORD *)v6 + 120LL) ^ (*(_QWORD *)(*(_QWORD *)v6 + 120LL) - v3)) & 0xFFFFFFFFFLL;
  return result;
}
