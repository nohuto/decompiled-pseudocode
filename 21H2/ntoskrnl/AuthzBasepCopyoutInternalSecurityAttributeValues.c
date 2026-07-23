/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140285468
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140696178 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x1405D2430 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // r15d
  unsigned __int64 v6; // rbp
  int inserted; // r10d
  _DWORD *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rdi
  wchar_t *v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int16 v15; // ax
  size_t v16; // rax
  wchar_t *v17; // r14
  __int64 v18; // r14
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3;
  v6 = a3 + a4;
  inserted = 0;
  DestinationString = 0LL;
  if ( v6 < a3 )
    return (unsigned int)-2147483643;
  v9 = a5;
  v10 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v11 = (unsigned int)(*(_DWORD *)(a1 + 60) << 6);
  *a5 = 0;
  if ( v10 + v11 > v6 )
    return (unsigned int)-2147483643;
  v12 = *(__int64 **)(a1 + 72);
  v13 = (wchar_t *)(v11 + v10);
  if ( v12 == (__int64 *)(a1 + 72) )
    goto LABEL_27;
  v14 = ((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 40;
  while ( 1 )
  {
    *(_DWORD *)(v14 - 8) = 0;
    v15 = *(_WORD *)(a1 + 48);
    if ( !v15 )
      break;
    if ( v15 <= 2u )
      goto LABEL_20;
    switch ( v15 )
    {
      case 3u:
        v18 = *((unsigned __int16 *)v12 + 20);
        if ( (unsigned __int64)v13 + v18 > v6 )
          return (unsigned int)-2147483643;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.MaximumLength = v18;
        DestinationString.Buffer = v13;
        RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v12 + 5));
        *(UNICODE_STRING *)v14 = DestinationString;
        break;
      case 4u:
        v18 = *((unsigned __int16 *)v12 + 24);
        if ( (unsigned __int64)v13 + v18 > v6 )
          return (unsigned int)-2147483643;
        *(_QWORD *)v14 = v12[5];
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.MaximumLength = v18;
        DestinationString.Buffer = v13;
        RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)v12 + 3);
        *(UNICODE_STRING *)(v14 + 8) = DestinationString;
        break;
      case 5u:
        goto LABEL_13;
      case 6u:
LABEL_20:
        *(_QWORD *)v14 = v12[5];
        goto LABEL_21;
      case 0x10u:
LABEL_13:
        v16 = *((unsigned int *)v12 + 12);
        v17 = (wchar_t *)((char *)v13 + v16);
        if ( (unsigned __int64)v13 + v16 > v6 )
          return (unsigned int)-2147483643;
        *(_DWORD *)(v14 + 8) = v16;
        *(_QWORD *)v14 = v13;
        memmove(v13, (const void *)v12[5], v16);
        v13 = v17;
        goto LABEL_21;
      default:
        goto LABEL_24;
    }
    v13 = (wchar_t *)((char *)v13 + v18);
LABEL_21:
    inserted = AuthzBasepProbeAndInsertTailList(a2 + 72, v14 - 40);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v14 += 64LL;
    ++*(_DWORD *)(a2 + 60);
    v12 = (__int64 *)*v12;
    if ( v12 == (__int64 *)(a1 + 72) )
      goto LABEL_25;
  }
LABEL_24:
  inserted = -1073741811;
LABEL_25:
  if ( inserted >= 0 )
  {
    v9 = a5;
LABEL_27:
    *v9 = (_DWORD)v13 - v5;
  }
  return (unsigned int)inserted;
}
