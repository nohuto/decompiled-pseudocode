/*
 * XREFs of MiValidateImagePfn @ 0x1405FAEC4
 * Callers:
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiReleaseFaultPte @ 0x14053ABAC (MiReleaseFaultPte.c)
 *     MiReserveFaultPte @ 0x14053AD1C (MiReserveFaultPte.c)
 *     SeValidateImageData @ 0x1405FB0F8 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x1405FB138 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x1408D8030 (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  void *v17; // rsi
  int v18; // ebx
  int v19; // eax
  __int64 v20; // r8
  int v21; // r12d
  __int64 v22; // rax
  int v23; // ebx
  char v24; // dl
  __int64 result; // rax
  bool v26; // zf
  int v27; // [rsp+78h] [rbp+10h]
  char v29; // [rsp+90h] [rbp+28h]

  v27 = a2;
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
  v13 = MiReservePtes((__int64)&qword_140C4EF80, 1u, a3, a4);
  if ( v13 )
  {
    v29 = 0;
  }
  else
  {
    if ( ((MiFlags & 0x4000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0) && v8 != -1 )
      return 3221225626LL;
    v13 = MiReserveFaultPte();
    if ( !v13 )
      return 3221225626LL;
    v29 = 1;
  }
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v11);
  ValidPte = MiMakeValidPte(v13, a7, ProtectionPfnCompatible | 0x20000000u);
  v16 = 0;
  if ( MiPteInShadowRange(v13) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
      v26 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v26 = (ValidPte & 1) == 0;
    }
    if ( !v26 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)v13 = ValidPte;
  if ( v16 )
    MiWritePteShadow(v13, ValidPte);
  v17 = 0LL;
  v18 = a8 | 2;
  if ( (a6 & 2) == 0 )
    v18 = a8;
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
  {
    v19 = v18;
    if ( v8 != -1 )
    {
      v21 = (__int64)(v13 << 25) >> 16;
      if ( v10[4] )
        v19 = v18 | 1;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  v19 = v18;
  if ( v8 == -1 )
  {
LABEL_25:
    v21 = (__int64)(v13 << 25) >> 16;
LABEL_14:
    v23 = SeValidateImageData(v12, v21, 4096, v27, v19, a3);
    if ( v23 < 0 )
    {
      _InterlockedIncrement(&dword_140C4CCDC);
    }
    else
    {
      v24 = 0;
      if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v11 + 16) >> 5) & 2) != 0 )
        v24 = 3;
      if ( (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v11, v24);
    }
    goto LABEL_18;
  }
  v20 = v8;
  v21 = (__int64)(v13 << 25) >> 16;
  v22 = MiRevertRelocatedImagePfn((__int64)(v13 << 25) >> 16, a1, v20);
  v17 = (void *)v22;
  if ( v22 == -1 )
  {
    v17 = 0LL;
LABEL_13:
    v19 = v18;
    goto LABEL_14;
  }
  if ( v22 )
  {
    v21 = v22;
    goto LABEL_13;
  }
  v23 = -1073741670;
LABEL_18:
  if ( v29 )
    MiReleaseFaultPte(v13);
  else
    MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v13, 1u);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v23;
}
