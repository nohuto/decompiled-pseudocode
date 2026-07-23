/*
 * XREFs of HaliInitializePlatformDebugTriggers @ 0x1404DD1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     HalpAcquirePccInterface @ 0x140866984 (HalpAcquirePccInterface.c)
 */

void HaliInitializePlatformDebugTriggers()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  v0 = PdttTable;
  v1 = 0;
  if ( PdttTable )
  {
    v2 = 0;
    v3 = PdttTable + *(unsigned int *)(PdttTable + 40);
    if ( *(_BYTE *)(PdttTable + 36) )
    {
      do
      {
        v4 = v2++;
        *(_QWORD *)(136 * v4 + qword_140C50AE8) = v3;
        v3 += 2LL;
        v5 = *(unsigned __int8 *)(v0 + 36);
      }
      while ( v2 < v5 );
      if ( (_BYTE)v5 )
      {
        do
        {
          v6 = 136LL * v1;
          v7 = v6 + qword_140C50AE8 + 8;
          LOBYTE(v6) = **(_BYTE **)(v6 + qword_140C50AE8);
          HalpAcquirePccInterface(v6, &DestinationString, v7);
          ++v1;
        }
        while ( v1 < *(unsigned __int8 *)(v0 + 36) );
      }
    }
  }
}
