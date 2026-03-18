/*
 * XREFs of MiDeletePartialCloneVads @ 0x1408DBD68
 * Callers:
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x1408DBFC0 (MiInsertChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiIsVadLargePrivate @ 0x14030DCC4 (MiIsVadLargePrivate.c)
 *     MiFreeVadEvents @ 0x140538C64 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x1406DC9FC (MiDereferencePerSessionProtos.c)
 *     MiFreePlaceholderStorage @ 0x1406E4134 (MiFreePlaceholderStorage.c)
 *     MiFreeVadEventBitmap @ 0x1408CAF98 (MiFreeVadEventBitmap.c)
 *     MiVadHasSharedCommit @ 0x1408DC270 (MiVadHasSharedCommit.c)
 *     MiFreeLargePageView @ 0x1408DCB50 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P, int a2)
{
  _QWORD *v3; // rdi
  _DWORD *v4; // rbx
  _KPROCESS *i; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *VadWakeList; // rsi
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *j; // rsi
  __int64 **v13; // rax
  __int64 *v14; // rsi
  unsigned int SessionId; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // ecx
  __int64 *v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+50h] [rbp+18h] BYREF

  v3 = P;
  v4 = P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v3; v4 = v3 )
  {
    v3 = (_QWORD *)*v3;
    MiFreeVadEventBitmap((ULONG_PTR)i, (__int64)v4, 4LL);
    if ( MiIsVadLargePrivate((__int64)v4) )
    {
      if ( a2 == 1 )
      {
        VadWakeList = MiGetVadWakeList(v6, 16, v7);
        MiFreeLargePageView(i, v4, VadWakeList, 1LL);
        if ( VadWakeList )
          ExFreePoolWithTag(VadWakeList, 0);
      }
    }
    else
    {
      v9 = v4[12] & 0x70;
      if ( v9 == 80 && *(_QWORD *)(**((_QWORD **)v4 + 9) + 64LL) )
      {
        v10 = *((unsigned __int8 *)v4 + 32);
        v11 = (unsigned int)v4[6];
        v20 = 0LL;
        v19 = 0LL;
        MiGetProtoPteAddress((__int64)v4, v11 | (v10 << 32), 0, &v20);
        MiGetProtoPteAddress(
          (__int64)v4,
          (unsigned int)v4[7] | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32),
          0,
          &v19);
        for ( j = v20; ; j = (__int64 *)j[2] )
        {
          MiDecrementLargeSubsections(j, j);
          if ( j == v19 )
            break;
        }
      }
      else if ( v9 == 32 )
      {
        v13 = (__int64 **)*((_QWORD *)v4 + 9);
        v14 = *v13;
        if ( ((*v13)[7] & 0x4000000) != 0 )
        {
          SessionId = MmGetSessionIdEx((__int64)i);
          MiDereferencePerSessionProtos(v14, SessionId);
        }
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v4) )
      MiRemoveSharedCommitNode(**((_QWORD ***)v4 + 9), (unsigned __int64)i, 0);
    v18 = v4[12];
    if ( (v18 & 0x100000) == 0 && (v18 & 0x70) == 0x20 && (v18 & 0x200000) != 0 )
      --*(_QWORD *)(i[1].ActiveProcessorsPadding[8] + 384);
    MiFreePlaceholderStorage((__int64)v4, v16, v17);
    MiFreeVadEvents((__int64)v4);
    ExFreePoolWithTag(v4, 0);
  }
}
