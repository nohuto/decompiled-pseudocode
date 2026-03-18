/*
 * XREFs of MiDeletePartialCloneVads @ 0x140980B94
 * Callers:
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiIsVadLargePrivate @ 0x14030FBE0 (MiIsVadLargePrivate.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiFreeVadEvents @ 0x140595D50 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiDereferencePerSessionProtos @ 0x1406DDA18 (MiDereferencePerSessionProtos.c)
 *     MiFreePlaceholderStorage @ 0x1406EBA90 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiFreeVadEventBitmap @ 0x14096D778 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x140983198 (MiFreeLargePageView.c)
 *     MiVadHasSharedCommit @ 0x140983978 (MiVadHasSharedCommit.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  _KPROCESS *i; // rbp
  __int64 v4; // rcx
  void *VadWakeList; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *j; // rsi
  __int64 **v10; // rax
  __int64 *v11; // rsi
  unsigned int SessionId; // eax
  int v13; // ecx
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+48h] [rbp+10h] BYREF

  v1 = P;
  v2 = P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = v1 )
  {
    v1 = (_QWORD *)*v1;
    MiFreeVadEventBitmap(i, (__int64)v2, 4);
    if ( MiIsVadLargePrivate((__int64)v2) )
    {
      VadWakeList = (void *)MiGetVadWakeList(v4, 16);
      MiFreeLargePageView(i, v2, VadWakeList, 1LL);
      if ( VadWakeList )
        ExFreePoolWithTag(VadWakeList, 0);
    }
    else
    {
      v6 = v2[12] & 0x70;
      if ( v6 == 80 )
      {
        if ( *(_QWORD *)(**((_QWORD **)v2 + 9) + 64LL) )
        {
          v7 = *((unsigned __int8 *)v2 + 32);
          v8 = (unsigned int)v2[6];
          v15 = 0LL;
          v14 = 0LL;
          MiGetProtoPteAddress((__int64)v2, v8 | (v7 << 32), 0, (__int64 *)&v15);
          MiGetProtoPteAddress(
            (__int64)v2,
            (unsigned int)v2[7] | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
            0,
            (__int64 *)&v14);
          for ( j = v15; ; j = (__int64 *)j[2] )
          {
            MiDecrementLargeSubsections(j, j);
            if ( j == v14 )
              break;
          }
        }
      }
      else if ( v6 == 32 )
      {
        v10 = (__int64 **)*((_QWORD *)v2 + 9);
        v11 = *v10;
        if ( ((*v10)[7] & 0x8000000) != 0 )
        {
          SessionId = MmGetSessionIdEx((__int64)i);
          MiDereferencePerSessionProtos(v11, SessionId);
        }
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v2) )
      MiRemoveSharedCommitNode(**((_QWORD ***)v2 + 9), (unsigned __int64)i, 0);
    v13 = v2[12];
    if ( (v13 & 0x200000) == 0 && (v13 & 0x70) == 0x20 && (v13 & 0x400000) != 0 )
      --*(_QWORD *)(i[1].ActiveProcessors.StaticBitmap[28] + 368);
    MiFreePlaceholderStorage((__int64)v2);
    MiFreeVadEvents((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
}
