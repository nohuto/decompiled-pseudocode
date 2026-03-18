/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x140704A60
 * Callers:
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140704958 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCommitDeleteKeyUoW @ 0x14072F5F8 (CmpCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x14076DE10 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1408817B0 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int16 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  int v3; // eax
  __int16 result; // ax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v9 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 7) != 0 )
  {
    if ( (v3 & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    LOWORD(v3) = *(_WORD *)(a1 + 8) & 0xFFF8;
  }
  result = v3 | 0x40;
  *(_WORD *)(a1 + 8) = result;
  if ( a2 )
  {
    v6 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v6 != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
             *(_QWORD *)(a1 + 32),
             v6,
             &v8);
      *(_WORD *)(a1 + 8) &= ~0x40u;
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(v7 + 20) + *(_DWORD *)(v7 + 24);
      return (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v8);
    }
  }
  return result;
}
