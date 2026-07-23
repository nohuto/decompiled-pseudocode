/*
 * XREFs of IopValidateQueryInformationParameters @ 0x1406EAF70
 * Callers:
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 * Callees:
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1409562C0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall IopValidateQueryInformationParameters(
        char a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int Length,
        signed int a6)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int16 v11; // ax

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)a6 >= 0x4C )
    return 3221225475LL;
  v6 = *((unsigned __int8 *)IopQueryOperationLength + a6);
  if ( !(_BYTE)v6 )
    return 3221225475LL;
  if ( Length >= v6 )
  {
    if ( a3 >= 0x7FFFFFFF0000LL )
      a3 = 0x7FFFFFFF0000LL;
    *(_DWORD *)a3 = *(_DWORD *)a3;
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 1408LL);
    if ( v7 && ((v11 = *(_WORD *)(v7 + 8), v11 == 332) || v11 == 452) )
    {
      ProbeForWrite((volatile void *)a4, Length, 4u);
    }
    else if ( Length )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + a6) - 1) & (unsigned int)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = Length + a4 - 1;
      if ( a4 > v9 || v9 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v10 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)a4 = *(_BYTE *)a4;
        a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( a4 != v10 );
    }
    return 0LL;
  }
  return 3221225476LL;
}
