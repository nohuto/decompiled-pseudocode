/*
 * XREFs of ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C0040980
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C009E708 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CitpDPGetAppIndex(struct _CIT_PROCESS *a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  PUNICODE_STRING v3; // r8
  WCHAR *Buffer; // rdx
  WCHAR *v5; // rcx
  WCHAR *i; // rax
  unsigned int v7; // esi
  PCUNICODE_STRING *v8; // rdi
  char **v10; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp+10h] BYREF

  pImageFileName = 0LL;
  v1 = 0;
  v2 = *((_DWORD *)a1 + 16) == 1;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( v2 )
  {
    if ( SeLocateProcessImageName(**((PEPROCESS **)a1 + 1), &pImageFileName) < 0 )
      goto LABEL_14;
    v3 = pImageFileName;
    DestinationString = *pImageFileName;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)a1 + 4));
    v3 = pImageFileName;
  }
  Buffer = DestinationString.Buffer;
  v5 = &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1];
  for ( i = v5 - 1; i > DestinationString.Buffer; --i )
  {
    if ( *i == 92 )
    {
      Buffer = i + 1;
      break;
    }
  }
  String2.Buffer = Buffer;
  String2.Length = 2 * (v5 - Buffer);
  String2.MaximumLength = String2.Length;
  if ( v3 )
    RtlUpcaseUnicodeString(&String2, &String2, 0);
  v7 = 0;
  v8 = (PCUNICODE_STRING *)&unk_1C01FF750;
  while ( !RtlEqualUnicodeString(v8[1], &String2, 0) )
  {
    ++v7;
    v8 += 2;
    if ( v7 >= 0xD )
      goto LABEL_14;
  }
  v1 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 > 6u )
  {
    switch ( v1 )
    {
      case 7u:
        if ( (unsigned int)dword_1C0246C8C < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C0246C80;
          goto LABEL_25;
        }
        break;
      case 8u:
        if ( (unsigned int)dword_1C02453C4 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C02453B8;
          goto LABEL_25;
        }
        break;
      case 9u:
        if ( (unsigned int)dword_1C0246C5C < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C0246C50;
          goto LABEL_25;
        }
        break;
      default:
        if ( v1 == 10 && (unsigned int)dword_1C0246C44 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C0246C38;
          goto LABEL_25;
        }
        break;
    }
  }
  else
  {
    switch ( v1 )
    {
      case 6u:
        if ( (unsigned int)dword_1C0246C74 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C0246C68;
          goto LABEL_25;
        }
        break;
      case 1u:
        if ( (unsigned int)dword_1C02453F4 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C02453E8;
LABEL_25:
          EtwTelemetryCoverageReport(v10);
        }
        break;
      case 2u:
        if ( (unsigned int)dword_1C02453DC >= MEMORY[0xFFFFF7800000037C] )
          break;
        v10 = &off_1C02453D0;
        goto LABEL_25;
      case 3u:
        if ( (unsigned int)dword_1C0246CA4 < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C0246C98;
          goto LABEL_25;
        }
        break;
      case 4u:
        if ( (unsigned int)dword_1C024540C < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C0245400;
          goto LABEL_25;
        }
        break;
      default:
        if ( v1 == 5 && (unsigned int)dword_1C02453AC < MEMORY[0xFFFFF7800000037C] )
        {
          v10 = &off_1C02453A0;
          goto LABEL_25;
        }
        break;
    }
  }
LABEL_14:
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  return v1;
}
