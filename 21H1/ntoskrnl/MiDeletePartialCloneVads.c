/*
 * XREFs of MiDeletePartialCloneVads @ 0x1408D4BD8
 * Callers:
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x1408D4E30 (MiInsertChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     MiGetVadWakeList @ 0x14027AC60 (MiGetVadWakeList.c)
 *     MiIsVadLargePrivate @ 0x1402FE744 (MiIsVadLargePrivate.c)
 *     MiFreeVadEvents @ 0x140534C44 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     MiFreePlaceholderStorage @ 0x1406EDC98 (MiFreePlaceholderStorage.c)
 *     MiFreeVadEventBitmap @ 0x1408C3E08 (MiFreeVadEventBitmap.c)
 *     MiVadHasSharedCommit @ 0x1408D50E0 (MiVadHasSharedCommit.c)
 *     MiFreeLargePageView @ 0x1408D59C0 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
    MiFreeVadEventBitmap((ULONG_PTR)i, (__int64)v6, 4LL, a4);
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
