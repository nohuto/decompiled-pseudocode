/*
 * XREFs of MiFreeWsleList @ 0x140220280
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiAgeWorkingSetTail @ 0x140279300 (MiAgeWorkingSetTail.c)
 *     MiAgePteWorker @ 0x14029DAD0 (MiAgePteWorker.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiEmptyWorkingSetHelper @ 0x1402F1B34 (MiEmptyWorkingSetHelper.c)
 *     MiConvertAndFlushWsleVas @ 0x140305480 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     MiEmptyWorkingSetTail @ 0x140319FA0 (MiEmptyWorkingSetTail.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiTrimWorkingSetBuildup @ 0x14034E5C8 (MiTrimWorkingSetBuildup.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140536C60 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MiRebuildPageTableLeafAges @ 0x1402DE360 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x1402E8870 (MiRemoveWsleList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  bool v8; // zf
  __int64 v9; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v17[24]; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD v18[20]; // [rsp+E0h] [rbp-E8h] BYREF

  memset(&v17[4], 0, 0x98uLL);
  v6 = *(unsigned int *)(a2 + 12);
  v17[1] = 20LL;
  v7 = MiTbFlushType(a1);
  v8 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v9 = 0LL;
  v17[0] = v7;
  v17[2] = 0LL;
  v17[3] = 0LL;
  if ( v8 && *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 360) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v12 = (char *)&v18[j] + 1;
      v13 = *(_QWORD *)&v12[a2 - ((_QWORD)v18 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        if ( v18[j] )
          LOWORD(v18[j]) = MiWsleFree(a1, v13, a3);
        else
          *v12 &= ~1u;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *))MiWsleFlush)(a1, v13, a3, v17);
        v18[j] = v14;
        if ( !v14 )
          ++v9;
      }
    }
    if ( !i )
      MiFlushTbList(v17);
  }
  if ( v9 != v6 )
  {
    v15 = MiRemoveWsleList(a1, a2, v18, v6, v17[0]);
    if ( v15 )
      MiRebuildPageTableLeafAges(0LL, v15 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v9;
}
