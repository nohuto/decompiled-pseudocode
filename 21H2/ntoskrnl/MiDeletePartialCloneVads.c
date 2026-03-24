/*
 * XREFs of MiDeletePartialCloneVads @ 0x1408D9528
 * Callers:
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x1408D9780 (MiInsertChildVads.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x1402AD514 (MiIsVadLargePrivate.c)
 *     MiGetVadWakeList @ 0x140318020 (MiGetVadWakeList.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiFreeVadEvents @ 0x14053A764 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiDereferencePerSessionProtos @ 0x1406BC7FC (MiDereferencePerSessionProtos.c)
 *     MiFreePlaceholderStorage @ 0x1406C3E08 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1406EB4E0 (MiRemoveSharedCommitNode.c)
 *     MiFreeVadEventBitmap @ 0x1408C8758 (MiFreeVadEventBitmap.c)
 *     MiVadHasSharedCommit @ 0x1408D9A30 (MiVadHasSharedCommit.c)
 *     MiFreeLargePageView @ 0x1408DA310 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P, int a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v5; // rdi
  _DWORD *v6; // rbx
  _KPROCESS *i; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 *VadWakeList; // rsi
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *j; // rsi
  __int64 **v16; // rax
  __int64 *v17; // rsi
  unsigned int SessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  int v22; // ecx
  __int64 *v23; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+50h] [rbp+18h] BYREF

  v5 = P;
  v6 = P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v5; v6 = v5 )
  {
    v5 = (_QWORD *)*v5;
    MiFreeVadEventBitmap(i, (__int64)v6, 4LL, a4);
    if ( MiIsVadLargePrivate((__int64)v6) )
    {
      if ( a2 == 1 )
      {
        VadWakeList = MiGetVadWakeList(v8, 16, v9, v10);
        MiFreeLargePageView(i, v6, VadWakeList, 1LL);
        if ( VadWakeList )
          ExFreePoolWithTag(VadWakeList, 0);
      }
    }
    else
    {
      v12 = v6[12] & 0x70;
      if ( v12 == 80 && *(_QWORD *)(**((_QWORD **)v6 + 9) + 64LL) )
      {
        v13 = *((unsigned __int8 *)v6 + 32);
        v14 = (unsigned int)v6[6];
        v24 = 0LL;
        v23 = 0LL;
        MiGetProtoPteAddress((__int64)v6, v14 | (v13 << 32), 0, &v24);
        MiGetProtoPteAddress(
          (__int64)v6,
          (unsigned int)v6[7] | ((unsigned __int64)*((unsigned __int8 *)v6 + 33) << 32),
          0,
          &v23);
        for ( j = v24; ; j = (__int64 *)j[2] )
        {
          MiDecrementLargeSubsections(j, j);
          if ( j == v23 )
            break;
        }
      }
      else if ( v12 == 32 )
      {
        v16 = (__int64 **)*((_QWORD *)v6 + 9);
        v17 = *v16;
        if ( ((*v16)[7] & 0x4000000) != 0 )
        {
          SessionId = MmGetSessionIdEx((__int64)i);
          MiDereferencePerSessionProtos(v17, SessionId);
        }
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v6) )
      MiRemoveSharedCommitNode(**((_QWORD ***)v6 + 9), (unsigned __int64)i, 0);
    v22 = v6[12];
    if ( (v22 & 0x100000) == 0 && (v22 & 0x70) == 0x20 && (v22 & 0x200000) != 0 )
      --*(_QWORD *)(i[1].ActiveProcessorsPadding[8] + 384);
    MiFreePlaceholderStorage((__int64)v6, v19, v20, v21);
    MiFreeVadEvents((__int64)v6);
    ExFreePoolWithTag(v6, 0);
  }
}
