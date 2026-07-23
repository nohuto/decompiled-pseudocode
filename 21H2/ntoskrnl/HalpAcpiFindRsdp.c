/*
 * XREFs of HalpAcpiFindRsdp @ 0x140A65290
 * Callers:
 *     HalpAcpiTableCacheInit @ 0x140A65690 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     HalpAcpiAllocateMemory @ 0x1403BB978 (HalpAcpiAllocateMemory.c)
 *     strcmp @ 0x1403D38A0 (strcmp.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KeFindConfigurationNextEntry @ 0x140A653A0 (KeFindConfigurationNextEntry.c)
 */

__int64 __fastcall HalpAcpiFindRsdp(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 ConfigurationNextEntry; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // r14d
  void *Memory; // rax
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v2 = HalpAcpiMultiNode;
  v3 = 0;
  v13 = 0LL;
  if ( !HalpAcpiMultiNode )
  {
    v6 = *(_QWORD *)(a1 + 176);
    v14 = 0LL;
    ConfigurationNextEntry = KeFindConfigurationNextEntry(v6, 3, 12, 0, (__int64)&v14);
    if ( !ConfigurationNextEntry )
      goto LABEL_11;
    do
    {
      if ( !strcmp(*(const char **)(ConfigurationNextEntry + 56), "ACPI BIOS") )
        break;
      v8 = *(_QWORD *)(a1 + 176);
      v13 = ConfigurationNextEntry;
      ConfigurationNextEntry = KeFindConfigurationNextEntry(v8, 3, 12, 0, (__int64)&v13);
    }
    while ( ConfigurationNextEntry );
    if ( !ConfigurationNextEntry )
    {
LABEL_11:
      DbgPrint("**** HalpAcpiFindRsdp: Could not find RSDP\n");
      return (unsigned int)-1073741275;
    }
    v9 = *(_QWORD *)(ConfigurationNextEntry + 64);
    v10 = 24 * *(_DWORD *)(v9 + 36) + 16;
    Memory = (void *)HalpAcpiAllocateMemory(a1, v10);
    HalpAcpiMultiNode = (__int64)Memory;
    v2 = (__int64)Memory;
    if ( !Memory )
      return (unsigned int)-1073741670;
    memmove(Memory, (const void *)(v9 + 28), v10);
  }
  *a2 = v2;
  return v3;
}
