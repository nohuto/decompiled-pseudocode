/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x1406064F4
 * Callers:
 *     MiValidateExistingImage @ 0x14060620C (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x14060DEB4 (MiCreateNewSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140938AC8 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        int a9,
        char a10,
        char a11)
{
  _KPROCESS *Process; // r13
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // r8
  int v21; // r9d
  int v22; // ecx
  __int64 v23; // [rsp+20h] [rbp-38h]

  if ( a1 >= 2 )
    return 3221225485LL;
  if ( !a7 && !a8 )
    return 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = a6 | 0x2000000;
  if ( a7 )
    v16 = a6;
  v19 = MiValidateSectionCreate(a2, a3, a4, a5, v16, a10, a11);
  if ( v19 < 0 )
  {
    v18 = (unsigned int)(a1 != 1) + 1;
    dword_140C4CA18 = (a1 != 1) + 1;
  }
  if ( a7 == 1 && v19 < 0 )
  {
    if ( v19 != -1073740760 || a9 != 1 )
      return (unsigned int)v19;
    LOBYTE(v20) = a10;
    v23 = a2 + 88;
    v22 = 2;
LABEL_20:
    LOBYTE(v21) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
    EtwTimLogProhibitNonMicrosoftBinaries(v22, (_DWORD)Process, v20, v21, v23);
    return (unsigned int)v19;
  }
  if ( a8 == 1 )
  {
    if ( v19 < 0 )
      return 0;
    if ( qword_140C1D8E0 )
    {
      LOBYTE(v17) = a11;
      LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      if ( (unsigned int)qword_140C1D8E0(v18, v17, v20) )
        return (unsigned int)v19;
    }
    LOBYTE(v20) = a11;
    v23 = a2 + 88;
    v22 = 1;
    goto LABEL_20;
  }
  return (unsigned int)v19;
}
