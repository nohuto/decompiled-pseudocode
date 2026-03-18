/*
 * XREFs of MiFillPerSessionProtos @ 0x1408D49E0
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiGetNextPageColor @ 0x1402272F4 (MiGetNextPageColor.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402B7128 (MiCreatePteCopyList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     MiReleasePteCopyList @ 0x140358E98 (MiReleasePteCopyList.c)
 *     MiReturnPfnReferenceCount @ 0x14035CB94 (MiReturnPfnReferenceCount.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x14050D960 (KeCopyPrivilegedPage.c)
 *     MiInitializeProtoPfn @ 0x14054FAF0 (MiInitializeProtoPfn.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        _QWORD *a1,
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
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int64 PteFromCopyList; // r12
  unsigned __int64 v30; // rdi
  int v31; // eax
  int v32; // [rsp+28h] [rbp-70h]
  __int128 v33; // [rsp+40h] [rbp-58h] BYREF
  __int128 v34; // [rsp+50h] [rbp-48h] BYREF
  __int64 v35; // [rsp+60h] [rbp-38h]
  __int64 i; // [rsp+A8h] [rbp+10h]

  v9 = a4;
  v34 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  if ( !a8 )
  {
    v13 = (unsigned int)a4 * ((a7 != 0) + 2) + 1;
    MiCreatePteCopyList(v13, (unsigned int)v13, (__int64)&v34, a4);
    if ( !DWORD1(v34) )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v33);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition((__int64)a1);
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
        NextPageColor = MiGetNextPageColor((__int64)&v33);
        for ( j = NextPageColor; ; j = NextPageColor )
        {
          DriverPage = MiGetPage((__int64)ControlAreaPartition, j, 0LL);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      v21 = 48 * DriverPage - 0x58000000000LL;
      MiInitializeProtoPfn(DriverPage, (unsigned __int64 *)((char *)a3 + v16), a5, v20);
      if ( !a8 )
        break;
      v22 = a9;
      v23 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0LL, 0);
      if ( v23 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v23);
      MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0, v24, v25);
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
    MiCopyPage(DriverPage, *a3, &v34, 72);
    if ( !a7 )
    {
LABEL_28:
      MiReturnPfnReferenceCount(v21, v26, v27, v28);
      v22 = a9;
      goto LABEL_29;
    }
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v34, DriverPage, -1LL);
    MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7, v32, 2);
    v30 = ZeroPte;
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v31 = 1;
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
          v30 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_26;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v30 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    v31 = 0;
LABEL_26:
    *(_QWORD *)PteFromCopyList = v30;
    if ( v31 )
      MiWritePteShadow(PteFromCopyList, v30, v27);
    goto LABEL_28;
  }
LABEL_34:
  MiReleasePteCopyList((__int64)&v34);
  return 0LL;
}
