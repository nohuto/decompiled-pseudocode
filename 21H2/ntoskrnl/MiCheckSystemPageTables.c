/*
 * XREFs of MiCheckSystemPageTables @ 0x14031C910
 * Callers:
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140220080 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140245F28 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x1405487A0 (MiGenerateAccessViolation.c)
 */

__int64 __fastcall MiCheckSystemPageTables(ULONG_PTR *a1)
{
  __int64 v2; // rdx
  __int64 **i; // r9
  __int64 *v4; // r8
  __int64 v5; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // ecx
  ULONG_PTR v13; // rdx

  v2 = 3LL;
  for ( i = (__int64 **)(a1 + 6); ; --i )
  {
    v4 = *i;
    v5 = **i;
    if ( (unsigned __int64)*i >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v5 & 1) == 0 )
LABEL_31:
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xDuLL);
      if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v8 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v4 >> 3) & 0x1FF));
          v9 = v5 | 0x20;
          if ( (v8 & 0x20) == 0 )
            v9 = **i;
          v5 = v9;
          if ( (v8 & 0x42) != 0 )
            v5 = v9 | 0x42;
        }
      }
    }
    if ( (v5 & 1) == 0 )
      goto LABEL_31;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( !--v2 )
      return 0LL;
  }
  if ( (a1[1] & 2) == 0 || (v5 & 0x800) != 0 )
  {
    MiCheckSystemNxFault((__int64)a1, v5, 6u);
    v10 = a1[2];
    if ( (v10 & 1) != 0 )
    {
      v11 = *(unsigned __int8 *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (unsigned __int8)v11 <= 6u )
      {
        v12 = 74;
        if ( _bittest(&v12, v11) )
          return 1LL;
      }
    }
    else if ( KeInvalidAccessAllowed(v10, 0) == 1 )
    {
      return 1LL;
    }
    v13 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v13, a1[1], a1[2], 8uLL);
    return 1LL;
  }
  if ( !(unsigned int)MiGenerateAccessViolation(a1) )
    KeBugCheckEx(0xBEu, *a1, v5, a1[2], 0x10uLL);
  return 2LL;
}
