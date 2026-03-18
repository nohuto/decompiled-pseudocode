/*
 * XREFs of MiFillPerSessionProtos @ 0x140983680
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCreatePteCopyList @ 0x14024B428 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140250BDC (MiReleasePteCopyList.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiReturnPfnReferenceCount @ 0x14029BA28 (MiReturnPfnReferenceCount.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiGetNextPageColor @ 0x1402EB3DC (MiGetNextPageColor.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x14056B044 (KeCopyPrivilegedPage.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 *     MiInitializeProtoPfn @ 0x1405C4A48 (MiInitializeProtoPfn.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 *     MiRelocateImagePfn @ 0x1407BF070 (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  int v9; // ebp
  ULONG_PTR *ControlAreaPartition; // r12
  __int64 v15; // r13
  __int64 DriverPage; // rdi
  int v17; // r9d
  unsigned int NextPageColor; // r15d
  unsigned int j; // edx
  __int64 v20; // r15
  __int128 *v21; // r13
  int v22; // eax
  unsigned __int64 PteFromCopyList; // r13
  unsigned __int64 v24; // rdi
  int v25; // eax
  int v26; // [rsp+28h] [rbp-70h]
  __int128 v27; // [rsp+40h] [rbp-58h] BYREF
  __int128 v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+60h] [rbp-38h]
  __int64 i; // [rsp+A8h] [rbp+10h]

  v9 = a4;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  if ( !a8 )
  {
    MiCreatePteCopyList(a4 * ((unsigned int)(a7 != 0) + 2) + 1, a4 * ((a7 != 0) + 2) + 1, (__int64)&v28);
    if ( !DWORD1(v28) )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v27);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a1);
  if ( v9 )
  {
    v15 = a2 - (_QWORD)a3;
    for ( i = v15; ; v15 = i )
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage(ControlAreaPartition, a5, 0);
      }
      else
      {
        NextPageColor = MiGetNextPageColor((__int64)&v27);
        for ( j = NextPageColor; ; j = NextPageColor )
        {
          DriverPage = MiGetPage((__int64)ControlAreaPartition, j, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      v20 = 48 * DriverPage - 0x220000000000LL;
      MiInitializeProtoPfn(DriverPage, (unsigned __int64 *)((char *)a3 + v15), a5, v17);
      if ( !a8 )
        break;
      v21 = a9;
      v22 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0LL, 0);
      if ( v22 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v22);
      MiMarkPfnVerified(48 * DriverPage - 0x220000000000LL, 0);
LABEL_28:
      ++a6;
      ++a3;
      --v9;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)v21 += 4096LL;
      }
      if ( !v9 )
        goto LABEL_33;
    }
    MiCopyPage(DriverPage, *a3, (unsigned int *)&v28, 72);
    if ( !a7 )
    {
LABEL_27:
      MiReturnPfnReferenceCount(v20);
      v21 = a9;
      goto LABEL_28;
    }
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v28, DriverPage, -1LL);
    MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7, v26, 37);
    v24 = ZeroPte;
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v25 = 1;
        if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
          v24 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_25;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v24 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    v25 = 0;
LABEL_25:
    *(_QWORD *)PteFromCopyList = v24;
    if ( v25 )
      MiWritePteShadow(PteFromCopyList, v24);
    goto LABEL_27;
  }
LABEL_33:
  MiReleasePteCopyList((__int64)&v28);
  return 0LL;
}
