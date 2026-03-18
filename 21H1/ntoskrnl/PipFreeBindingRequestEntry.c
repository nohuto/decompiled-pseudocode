/*
 * XREFs of PipFreeBindingRequestEntry @ 0x1408998AC
 * Callers:
 *     PipFreeDependencyEdge @ 0x140506C70 (PipFreeDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x14089953C (PipAddRequestToEdge.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingRequestEntry(PVOID P)
{
  UNICODE_STRING *v2; // rcx

  if ( *((_DWORD *)P + 4) == 1 )
  {
    v2 = (UNICODE_STRING *)*((_QWORD *)P + 3);
    if ( v2 )
    {
      RtlFreeAnsiString(v2);
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x53706E50u);
      *((_QWORD *)P + 3) = 0LL;
    }
  }
  ExFreePoolWithTag(P, 0x53706E50u);
}
