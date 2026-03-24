/*
 * XREFs of MiFreeWsleList @ 0x140327320
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14022E460 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x1402672B8 (MiTrimWorkingSetBuildup.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiConvertAndFlushWsleVas @ 0x140270AEC (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x1402C8854 (MiMakeVaRangeNoAccess.c)
 *     MiEmptyWorkingSetTail @ 0x1402C94C0 (MiEmptyWorkingSetTail.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x140306534 (MiEmptyWorkingSetHelper.c)
 *     NtUnlockVirtualMemory @ 0x14032DF30 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiAgePteWorker @ 0x140339990 (MiAgePteWorker.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053C780 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiRebuildPageTableLeafAges @ 0x140285060 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x14028EBD0 (MiRemoveWsleList.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiTbFlushType @ 0x140337208 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // eax
  bool v10; // zf
  __int64 v11; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-1A0h]
  __int64 v21; // [rsp+30h] [rbp-198h]
  __int64 v22; // [rsp+38h] [rbp-190h]
  _BYTE v23[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v24[20]; // [rsp+E0h] [rbp-E8h] BYREF

  memset(v23, 0, sizeof(v23));
  v6 = *(unsigned int *)(a2 + 12);
  v20 = 20LL;
  v9 = MiTbFlushType(a1, v7, v8);
  v10 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v11 = 0LL;
  v19 = v9;
  v21 = 0LL;
  v22 = 0LL;
  if ( v10 && *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 360) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v14 = (char *)&v24[j] + 1;
      v15 = *(_QWORD *)&v14[a2 - ((_QWORD)v24 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        if ( v24[j] )
          LOWORD(v24[j]) = MiWsleFree(a1, v15, a3);
        else
          *v14 &= ~1u;
      }
      else
      {
        v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64 *))MiWsleFlush)(a1, v15, a3, &v19);
        v24[j] = v16;
        if ( !v16 )
          ++v11;
      }
    }
    if ( !i )
      MiFlushTbList(&v19);
  }
  if ( v11 != v6 )
  {
    v17 = MiRemoveWsleList(a1, a2, (char *)v24, v6, v19, v20, v21, v22);
    if ( v17 )
      MiRebuildPageTableLeafAges(0LL, v17 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v11;
}
