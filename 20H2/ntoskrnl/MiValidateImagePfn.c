/*
 * XREFs of MiValidateImagePfn @ 0x1406BEE74
 * Callers:
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1403156F4 (MiMarkPfnVerified.c)
 *     MiReleaseFaultPte @ 0x140538E6C (MiReleaseFaultPte.c)
 *     MiReserveFaultPte @ 0x140538FDC (MiReserveFaultPte.c)
 *     SeValidateImageData @ 0x1406BF0A8 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x1406BF0E8 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x1408DA710 (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateImagePfn(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6,
        __int64 a7,
        int a8)
{
  _QWORD *v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  unsigned __int64 ValidPte; // rbx
  int v17; // esi
  __int64 v18; // r8
  void *v19; // rsi
  int v20; // ebx
  int v21; // eax
  __int64 v22; // r8
  int v23; // r12d
  __int64 v24; // rax
  int v25; // ebx
  char v26; // dl
  __int64 result; // rax
  bool v28; // zf
  int v29; // [rsp+78h] [rbp+10h]
  char v31; // [rsp+90h] [rbp+28h]

  v29 = a2;
  v10 = *(_QWORD **)(a1 + 96);
  v11 = 48 * a7 - 0x58000000000LL;
  v12 = v10[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v10[7] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96), a2, a3);
    if ( (int)result < 0 )
      return result;
  }
  v13 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
  if ( v13 )
  {
    v31 = 0;
  }
  else
  {
    if ( ((MiFlags & 0x4000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0) && a4 != -1 )
      return 3221225626LL;
    v13 = MiReserveFaultPte();
    if ( !v13 )
      return 3221225626LL;
    v31 = 1;
  }
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v11);
  ValidPte = MiMakeValidPte(v13, a7, ProtectionPfnCompatible | 0x20000000u, v15);
  v17 = 0;
  if ( MiPteInShadowRange(v13) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_5;
      v28 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v28 = (ValidPte & 1) == 0;
    }
    if ( !v28 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)v13 = ValidPte;
  if ( v17 )
    MiWritePteShadow(v13, ValidPte, v18);
  v19 = 0LL;
  v20 = a8 | 2;
  if ( (a6 & 2) == 0 )
    v20 = a8;
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
  {
    v21 = v20;
    if ( a4 != -1 )
    {
      v23 = (__int64)(v13 << 25) >> 16;
      if ( v10[4] )
        v21 = v20 | 1;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  v21 = v20;
  if ( a4 == -1 )
  {
LABEL_25:
    v23 = (__int64)(v13 << 25) >> 16;
LABEL_14:
    v25 = SeValidateImageData(v12, v23, 4096, v29, v21, a3);
    if ( v25 < 0 )
    {
      _InterlockedIncrement(&dword_140C4CB1C);
    }
    else
    {
      v26 = 0;
      if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v11 + 16) >> 5) & 2) != 0 )
        v26 = 3;
      if ( (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v11, v26);
    }
    goto LABEL_18;
  }
  v22 = a4;
  v23 = (__int64)(v13 << 25) >> 16;
  v24 = MiRevertRelocatedImagePfn((__int64)(v13 << 25) >> 16, a1, v22);
  v19 = (void *)v24;
  if ( v24 == -1 )
  {
    v19 = 0LL;
LABEL_13:
    v21 = v20;
    goto LABEL_14;
  }
  if ( v24 )
  {
    v23 = v24;
    goto LABEL_13;
  }
  v25 = -1073741670;
LABEL_18:
  if ( v31 )
    MiReleaseFaultPte(v13);
  else
    MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v13, 1u);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)v25;
}
