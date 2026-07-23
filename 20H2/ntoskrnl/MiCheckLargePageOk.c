/*
 * XREFs of MiCheckLargePageOk @ 0x140A6A708
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiCheckLargePageSystemImage @ 0x140A6A870 (MiCheckLargePageSystemImage.c)
 *     MiVerifyLargeSectionLayout @ 0x140A6A96C (MiVerifyLargeSectionLayout.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rsi
  unsigned int i; // ebp
  void *v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  void *v9; // r12
  ULONG_PTR SectionAlignment; // rcx
  _QWORD *v11; // rsi
  int v12; // ebp
  unsigned __int64 v13; // rdi
  int v15; // eax

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  LODWORD(v2) = 0;
  for ( i = 0; i < 2; ++i )
  {
    v5 = *(void **)(v1 + 48);
    v6 = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v5);
    v7 = v2 + 1;
    if ( !v6 )
      v7 = v2;
    v8 = (__int64)v5 + *(unsigned int *)(v1 + 64);
    v2 = v7;
    if ( i )
    {
      MxHalDataTableEntry = v1;
      PsHalImageBase = v5;
      PsHalImageEnd = v8;
    }
    else
    {
      qword_140D58728 = v1;
      PsNtosImageBase = v5;
      PsNtosImageEnd = v8;
    }
    v1 = *(_QWORD *)v1;
  }
  v9 = *(void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL);
  qword_140C4CB98 = *(_QWORD *)(BugCheckParameter2 + 16);
  SectionAlignment = RtlImageNtHeader(v9)->OptionalHeader.SectionAlignment;
  if ( (_DWORD)SectionAlignment != 4096 )
    KeBugCheckEx(0x1Au, 0x3030207uLL, BugCheckParameter2, SectionAlignment, 0LL);
  MiVerifyLargeSectionLayout((ULONG_PTR)v9);
  if ( !(_DWORD)v2 )
    return 0LL;
  if ( (_DWORD)v2 != 1 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v2, 0LL);
  v11 = *(_QWORD **)(BugCheckParameter2 + 16);
  v12 = 0;
  do
  {
    v13 = v11[6];
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v13) != 1 )
    {
      v15 = MI_IS_PHYSICAL_ADDRESS(v13);
      KeBugCheckEx(0x1Au, 0x3030204uLL, BugCheckParameter2, v13, v15);
    }
    if ( ((v13 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != v13 )
      KeBugCheckEx(0x1Au, 0x3030206uLL, BugCheckParameter2, v13, 0LL);
    MiCheckLargePageSystemImage(BugCheckParameter2);
    v11 = (_QWORD *)*v11;
    ++v12;
  }
  while ( !v12 );
  MiFlags |= 4u;
  return 1LL;
}
