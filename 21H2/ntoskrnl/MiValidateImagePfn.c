/*
 * XREFs of MiValidateImagePfn @ 0x14069BD04
 * Callers:
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x14023B570 (MiValidateInPage.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1402B8A04 (MiMarkPfnVerified.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiReleaseFaultPte @ 0x14053A96C (MiReleaseFaultPte.c)
 *     MiReserveFaultPte @ 0x14053AADC (MiReserveFaultPte.c)
 *     SeValidateImageData @ 0x14069BF38 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x14069BF78 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x1408D7ED0 (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateImagePfn(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // r12d
  _QWORD *v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v16; // esi
  __int64 v17; // r8
  void *v18; // rsi
  int v19; // ebx
  int v20; // eax
  __int64 v21; // r8
  int v22; // r12d
  __int64 v23; // rax
  int v24; // ebx
  char v25; // dl
  __int64 result; // rax
  bool v27; // zf
  int v28; // [rsp+78h] [rbp+10h]
  char v30; // [rsp+90h] [rbp+28h]

  v28 = a2;
  v8 = a4;
  v10 = *(_QWORD **)(a1 + 96);
  v11 = 48 * a7 - 0x58000000000LL;
  v12 = v10[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v10[7] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96), a2, a3);
    if ( (int)result < 0 )
      return result;
  }
  v13 = MiReservePtes((__int64)&qword_140C4EF40, 1u, a3, a4);
  if ( v13 )
  {
    v30 = 0;
  }
  else
  {
    if ( ((MiFlags & 0x4000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0) && v8 != -1 )
      return 3221225626LL;
    v13 = MiReserveFaultPte();
    if ( !v13 )
      return 3221225626LL;
    v30 = 1;
  }
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v11);
  ValidPte = MiMakeValidPte(v13, a7, ProtectionPfnCompatible | 0x20000000u);
  v16 = 0;
  if ( MiPteInShadowRange(v13) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_5;
      v27 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v27 = (ValidPte & 1) == 0;
    }
    if ( !v27 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)v13 = ValidPte;
  if ( v16 )
    MiWritePteShadow(v13, ValidPte, v17);
  v18 = 0LL;
  v19 = a8 | 2;
  if ( (a6 & 2) == 0 )
    v19 = a8;
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
  {
    v20 = v19;
    if ( v8 != -1 )
    {
      v22 = (__int64)(v13 << 25) >> 16;
      if ( v10[4] )
        v20 = v19 | 1;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  v20 = v19;
  if ( v8 == -1 )
  {
LABEL_25:
    v22 = (__int64)(v13 << 25) >> 16;
LABEL_14:
    v24 = SeValidateImageData(v12, v22, 4096, v28, v20, a3);
    if ( v24 < 0 )
    {
      _InterlockedIncrement(&dword_140C4CC9C);
    }
    else
    {
      v25 = 0;
      if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v11 + 16) >> 5) & 2) != 0 )
        v25 = 3;
      if ( (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v11, v25);
    }
    goto LABEL_18;
  }
  v21 = v8;
  v22 = (__int64)(v13 << 25) >> 16;
  v23 = MiRevertRelocatedImagePfn((__int64)(v13 << 25) >> 16, a1, v21);
  v18 = (void *)v23;
  if ( v23 == -1 )
  {
    v18 = 0LL;
LABEL_13:
    v20 = v19;
    goto LABEL_14;
  }
  if ( v23 )
  {
    v22 = v23;
    goto LABEL_13;
  }
  v24 = -1073741670;
LABEL_18:
  if ( v30 )
    MiReleaseFaultPte(v13);
  else
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v13, 1u);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v24;
}
