/*
 * XREFs of MiFreeWsleList @ 0x1402B2F00
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402202B0 (MiAgeWorkingSetTail.c)
 *     MiAgePteWorker @ 0x140244AA0 (MiAgePteWorker.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiTrimWorkingSetBuildup @ 0x1402D3C98 (MiTrimWorkingSetBuildup.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x14032D8D4 (MiEmptyWorkingSetHelper.c)
 *     MiConvertAndFlushWsleVas @ 0x140342ED0 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiEmptyWorkingSetTail @ 0x140357AC0 (MiEmptyWorkingSetTail.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405311FC (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1405372B0 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiRebuildPageTableLeafAges @ 0x140301790 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x1403234F0 (MiRemoveWsleList.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  int v7; // eax
  _KPROCESS *v8; // rdx
  bool v9; // zf
  __int64 v10; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v18; // [rsp+24h] [rbp-1A4h]
  __int16 v19; // [rsp+26h] [rbp-1A2h]
  __int64 v20; // [rsp+28h] [rbp-1A0h]
  __int64 v21; // [rsp+30h] [rbp-198h]
  __int64 v22; // [rsp+38h] [rbp-190h]
  _BYTE v23[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v24[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v19 = 0;
  memset(v23, 0, sizeof(v23));
  v6 = *(unsigned int *)(a2 + 12);
  v20 = 20LL;
  v7 = MiTbFlushType(a1);
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v10 = 0LL;
  v17 = v7;
  v18 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( v9 && *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 360) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v13 = (char *)&v24[j] + 1;
      v8 = (_KPROCESS *)(*(_QWORD *)&v13[a2 - ((_QWORD)v24 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL);
      if ( i )
      {
        if ( v24[j] )
          LOWORD(v24[j]) = MiWsleFree(a1, v8, a3);
        else
          *v13 &= ~1u;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(__int64, _KPROCESS *, _QWORD, int *))MiWsleFlush)(a1, v8, a3, &v17);
        v24[j] = v14;
        if ( !v14 )
          ++v10;
      }
    }
    if ( !i )
      MiFlushTbList((__int64)&v17, v8);
  }
  if ( v10 != v6 )
  {
    v15 = MiRemoveWsleList(a1, a2, v24, v6);
    if ( v15 )
      MiRebuildPageTableLeafAges(0LL, v15 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v10;
}
