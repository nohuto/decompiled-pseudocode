/*
 * XREFs of MiFillPerSessionProtos @ 0x1408D8140
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiReleasePteCopyList @ 0x140249314 (MiReleasePteCopyList.c)
 *     MiReturnPfnReferenceCount @ 0x14024D52C (MiReturnPfnReferenceCount.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402E5388 (MiCreatePteCopyList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x140513010 (KeCopyPrivilegedPage.c)
 *     MiInitializeProtoPfn @ 0x1405551D0 (MiInitializeProtoPfn.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  int v9; // r15d
  unsigned __int64 v13; // rcx
  ULONG_PTR *ControlAreaPartition; // r13
  __int64 v16; // r12
  unsigned int NextPageColor; // ebp
  unsigned int j; // edx
  __int64 DriverPage; // rdi
  int v20; // r9d
  __int64 v21; // rbp
  __int128 *v22; // r12
  NTSTATUS v23; // eax
  unsigned __int64 PteFromCopyList; // r12
  unsigned __int64 v25; // rdi
  int v26; // eax
  int v27; // [rsp+28h] [rbp-70h]
  __int128 v28; // [rsp+40h] [rbp-58h] BYREF
  __int128 v29; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30; // [rsp+60h] [rbp-38h]
  __int64 i; // [rsp+A8h] [rbp+10h]

  v9 = a4;
  v29 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  if ( !a8 )
  {
    v13 = (unsigned int)a4 * ((a7 != 0) + 2) + 1;
    MiCreatePteCopyList(v13, (unsigned int)v13, (__int64)&v29, a4);
    if ( !DWORD1(v29) )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v28);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a1);
  if ( v9 )
  {
    v16 = a2 - (_QWORD)a3;
    for ( i = v16; ; v16 = i )
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage(ControlAreaPartition, a5, 0);
      }
      else
      {
        NextPageColor = MiGetNextPageColor((__int64)&v28);
        for ( j = NextPageColor; ; j = NextPageColor )
        {
          DriverPage = MiGetPage((__int64)ControlAreaPartition, j, 0LL);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      v21 = 48 * DriverPage - 0x58000000000LL;
      MiInitializeProtoPfn(DriverPage, (__int64 *)((char *)a3 + v16), a5, v20);
      if ( !a8 )
        break;
      v22 = a9;
      v23 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0LL, 0);
      if ( v23 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v23);
      MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
LABEL_29:
      ++a6;
      ++a3;
      --v9;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)v22 += 4096LL;
      }
      if ( !v9 )
        goto LABEL_34;
    }
    MiCopyPage(DriverPage, *a3, &v29, 72);
    if ( !a7 )
    {
LABEL_28:
      MiReturnPfnReferenceCount(v21);
      v22 = a9;
      goto LABEL_29;
    }
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v29, DriverPage, -1LL);
    MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7, v27, 2);
    v25 = ZeroPte;
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v26 = 1;
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v25 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_26;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v25 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    v26 = 0;
LABEL_26:
    *(_QWORD *)PteFromCopyList = v25;
    if ( v26 )
      MiWritePteShadow(PteFromCopyList, v25);
    goto LABEL_28;
  }
LABEL_34:
  MiReleasePteCopyList((__int64)&v29);
  return 0LL;
}
