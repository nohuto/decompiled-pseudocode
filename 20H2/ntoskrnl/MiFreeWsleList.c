/*
 * XREFs of MiFreeWsleList @ 0x1402AAA70
 * Callers:
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiAgePteWorker @ 0x1402BCE70 (MiAgePteWorker.c)
 *     MiConvertAndFlushWsleVas @ 0x1402D3A8C (MiConvertAndFlushWsleVas.c)
 *     MiAgeWorkingSetTail @ 0x1402EA020 (MiAgeWorkingSetTail.c)
 *     MiEmptyWorkingSetHelper @ 0x140310234 (MiEmptyWorkingSetHelper.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiEmptyWorkingSetTail @ 0x140328260 (MiEmptyWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x140343D48 (MiTrimWorkingSetBuildup.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053AC80 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiRebuildPageTableLeafAges @ 0x14029DDE0 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x14029DF00 (MiRemoveWsleList.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-1A0h]
  __int64 v19; // [rsp+30h] [rbp-198h]
  __int64 v20; // [rsp+38h] [rbp-190h]
  _BYTE v21[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v22[20]; // [rsp+E0h] [rbp-E8h] BYREF

  memset(v21, 0, sizeof(v21));
  v6 = *(unsigned int *)(a2 + 12);
  v18 = 20LL;
  v7 = MiTbFlushType(a1);
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v10 = 0LL;
  v17 = v7;
  v19 = 0LL;
  v20 = 0LL;
  if ( v9 && *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 360) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v13 = (char *)&v22[j] + 1;
      v8 = *(_QWORD *)&v13[a2 - ((_QWORD)v22 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        if ( v22[j] )
          LOWORD(v22[j]) = MiWsleFree(a1, v8, a3);
        else
          *v13 &= ~1u;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64 *))MiWsleFlush)(a1, v8, a3, &v17);
        v22[j] = v14;
        if ( !v14 )
          ++v10;
      }
    }
    if ( !i )
      MiFlushTbList(&v17, v8);
  }
  if ( v10 != v6 )
  {
    v15 = MiRemoveWsleList(a1, a2, (char *)v22, v6, v17, v18, v19, v20);
    if ( v15 )
      MiRebuildPageTableLeafAges(0LL, v15 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v10;
}
