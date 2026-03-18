/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x14063B5E4
 * Callers:
 *     MiValidateExistingImage @ 0x14063B24C (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MiRegQueryDWORD @ 0x1405C6D54 (MiRegQueryDWORD.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 *     SeCompareSigningLevels @ 0x140769DA0 (SeCompareSigningLevels.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140937828 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12)
{
  char v16; // r12
  _KPROCESS *Process; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  __int64 v25; // [rsp+20h] [rbp-38h]
  int v26; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 >= 2 )
    return 3221225485LL;
  if ( !a8 && !a9 )
    return 0LL;
  v16 = a11;
  Process = KeGetCurrentThread()->ApcState.Process;
  v18 = a7 | 0x2000000;
  if ( a8 )
    v18 = a7;
  v21 = MiValidateSectionCreate(a2, a3, a4, a5, v18, a11, a12);
  if ( v21 < 0 )
  {
    v20 = (unsigned int)(a1 != 1) + 1;
    dword_140C4CB58 = (a1 != 1) + 1;
  }
  if ( a8 == 1 )
  {
    v26 = 0;
    if ( (int)MiRegQueryDWORD(v20, v19, &v26) >= 0 && v26 )
    {
      if ( v21 < 0 )
        goto LABEL_19;
      LOBYTE(v19) = v16;
      LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      if ( !(unsigned int)SeCompareSigningLevels(v20, v19)
        && (a6 || (BYTE2(Process[2].Header.WaitListHead.Flink) & 8) == 0) )
      {
        dword_140C4CB58 = 3;
        v21 = -1073740760;
      }
    }
    if ( v21 < 0 )
    {
LABEL_19:
      if ( v21 != -1073740760 || a10 != 1 )
        return (unsigned int)v21;
      LOBYTE(v22) = v16;
      v25 = a2 + 88;
      v24 = 2;
LABEL_27:
      LOBYTE(v23) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      EtwTimLogProhibitNonMicrosoftBinaries(v24, (_DWORD)Process, v22, v23, v25);
      return (unsigned int)v21;
    }
  }
  if ( a9 == 1 )
  {
    if ( v21 < 0 )
      return 0;
    if ( qword_140C1DAA0 )
    {
      LOBYTE(v19) = a12;
      LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
      if ( (unsigned int)qword_140C1DAA0(v20, v19) )
        return (unsigned int)v21;
    }
    LOBYTE(v22) = a12;
    v25 = a2 + 88;
    v24 = 1;
    goto LABEL_27;
  }
  return (unsigned int)v21;
}
