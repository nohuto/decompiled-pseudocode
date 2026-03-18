/*
 * XREFs of ACPIBuildFixedButtonExtension @ 0x1C0031090
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0031030 (ACPIFixedFeatureButtonInitialize.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C001B83C (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildFixedButtonExtension(__int64 a1, struct _KEVENT **a2)
{
  int v3; // esi
  __int64 result; // rax
  struct _KEVENT *v5; // rbx
  char *PoolWithTag; // rax

  if ( AcpiBuildFixedButtonEnumerated )
    goto LABEL_13;
  AcpiBuildFixedButtonEnumerated = 1;
  v3 = HIBYTE(*((unsigned __int16 *)AcpiInformation + 56)) & 1 | 2;
  if ( (*((_WORD *)AcpiInformation + 56) & 0x200) == 0 )
    v3 = HIBYTE(*((unsigned __int16 *)AcpiInformation + 56)) & 1;
  if ( !v3 || (AcpiOverrideAttributes & 0x400000) != 0 )
  {
LABEL_13:
    *a2 = 0LL;
    return 0LL;
  }
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, a2);
  if ( (int)result >= 0 )
  {
    v5 = *a2;
    if ( *a2 )
    {
      _InterlockedOr64((volatile signed __int64 *)&v5->Header.WaitListHead, 0x18000000360000uLL);
      KeInitializeSpinLock((PKSPIN_LOCK)&v5[7].Header.WaitListHead.Blink);
      LODWORD(v5[8].Header.WaitListHead.Flink) = v3 | 0x80000000;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x11uLL, 0x53706341u);
      v5[23].Header.WaitListHead.Blink = (_LIST_ENTRY *)PoolWithTag;
      if ( PoolWithTag )
      {
        strcpy(PoolWithTag, "ACPI\\FixedButton");
        _InterlockedOr64((volatile signed __int64 *)&v5->Header.WaitListHead, 0xA00000000000uLL);
        return 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&v5->Header.WaitListHead, 0x2000000000000uLL);
      result = 3221225626LL;
    }
  }
  *a2 = 0LL;
  return result;
}
