/*
 * XREFs of HalpDeleteSecondaryIcEntry @ 0x1404D0D60
 * Callers:
 *     HalpUnregisterSecondaryIcInterface @ 0x1404D1750 (HalpUnregisterSecondaryIcInterface.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404D0A70 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x1404D1660 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDeleteSecondaryIcEntry(PVOID P)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)P + 29, 0, 0) <= 0 )
  {
    HalpAcquireSecondaryIcEntryExclusive((volatile signed __int32 *)P, &v7);
    v4 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    LOBYTE(v3) = v7;
    *v5 = v4;
    v4[1] = v5;
    HalpReleaseSecondaryIcEntryExclusive(P, v3);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 6), 0x746C6644u);
    ExFreePoolWithTag(P, 0x536C6148u);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
