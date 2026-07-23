/*
 * XREFs of PiDevCfgBuildDriverConfigurationId @ 0x14073D628
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x14036EB50 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036F210 (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x14050C698 (RtlUnicodeStringExHandleOtherFlags.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 */

__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int v6; // ebx
  NTSTATUS v8; // ebx
  unsigned __int16 Length; // di
  wchar_t *Buffer; // r8
  size_t v12; // rdx
  wchar_t *v13; // r9
  __int16 v14; // cx
  size_t v15; // rax
  const wchar_t *v16; // rcx
  __int64 v17; // r9
  size_t v18; // r10
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-60h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-58h]
  __int64 dwFlags; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+70h] [rbp-10h] BYREF
  wchar_t *v25; // [rsp+C0h] [rbp+40h] BYREF
  size_t v26; // [rsp+D0h] [rbp+50h] BYREF
  size_t pcchNewDestLength; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a1 + 40;
  v3 = *(unsigned __int16 *)(a1 + 40);
  v4 = a1 + 72;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = *(unsigned __int16 *)(a1 + 72) + v3 + 4;
  DestinationString.Buffer = 0LL;
  RemainingString = 0LL;
  TimeFields = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v6 += *(unsigned __int16 *)(a1 + 88) + 2;
  if ( !PnpIsNullGuid((void *)(a1 + 188)) )
    v6 += 72;
  if ( (unsigned __int64)v6 + 2 > 0xFFFE )
  {
    v8 = -1073741562;
    goto LABEL_13;
  }
  DestinationString.Length = v6;
  DestinationString.MaximumLength = v6 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v6 + 2));
  if ( !DestinationString.Buffer )
  {
    v8 = -1073741670;
    goto LABEL_13;
  }
  v8 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v2, v4);
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v8 = RtlUnicodeStringPrintfEx(&RemainingString, &RemainingString, 0x800u, L",%wZ", a1 + 88);
      if ( v8 < 0 )
        goto LABEL_13;
      Length = *(_WORD *)(a1 + 88) + 2 + DestinationString.Length;
      DestinationString.Length = Length;
    }
    else
    {
      Length = DestinationString.Length;
    }
    if ( PnpIsNullGuid((void *)(a1 + 188)) )
    {
LABEL_12:
      *a2 = DestinationString;
      DestinationString = 0LL;
      goto LABEL_13;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
LABEL_46:
      RtlTimeToTimeFields((PLARGE_INTEGER)(a1 + 112), &TimeFields);
      LODWORD(dwFlags) = *(unsigned __int16 *)(a1 + 124);
      LODWORD(pcchRemaining) = (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124));
      LODWORD(ppszDestEnd) = TimeFields.Year;
      v8 = RtlUnicodeStringPrintf(
             &RemainingString,
             L",%02d/%02d/%04d,%u.%u.%u.%u",
             (unsigned int)TimeFields.Month,
             (unsigned int)TimeFields.Day,
             ppszDestEnd,
             pcchRemaining,
             dwFlags,
             *(unsigned __int16 *)(a1 + 122),
             *(unsigned __int16 *)(a1 + 120));
      if ( v8 < 0 )
        goto LABEL_13;
      DestinationString.Length = RemainingString.Length + Length;
      goto LABEL_12;
    }
    Buffer = 0LL;
    v12 = 0LL;
    v8 = 0;
    if ( (RemainingString.Length & 1) != 0
      || (RemainingString.MaximumLength & 1) != 0
      || RemainingString.Length > RemainingString.MaximumLength
      || RemainingString.MaximumLength == 0xFFFF )
    {
      v8 = -1073741811;
LABEL_44:
      if ( v8 < 0 )
        goto LABEL_13;
      Length += 2;
      DestinationString.Length = Length;
      goto LABEL_46;
    }
    if ( !RemainingString.Buffer && (RemainingString.Length || RemainingString.MaximumLength) )
    {
      v8 = -1073741811;
    }
    else
    {
      Buffer = RemainingString.Buffer;
      v12 = (unsigned __int64)RemainingString.MaximumLength >> 1;
    }
    if ( v8 >= 0 )
    {
      v13 = Buffer;
      v14 = v12;
      v15 = 0LL;
      if ( v12 )
      {
        v16 = L",";
        v17 = 0x7FFFLL;
        v18 = v12;
        v8 = 0;
        do
        {
          if ( !v17 )
            break;
          if ( !*v16 )
            break;
          *(const wchar_t *)((char *)v16 + (char *)Buffer - (char *)L",") = *v16;
          --v17;
          ++v16;
          ++v15;
          --v18;
        }
        while ( v18 );
        if ( !v18 && v17 && *v16 )
          v8 = -2147483643;
        pcchNewDestLength = v15;
        v14 = v12 - v15;
        v13 = &Buffer[v15];
        v25 = v13;
        v26 = v12 - v15;
        if ( v8 < 0 )
        {
          RtlUnicodeStringExHandleOtherFlags(Buffer, v12, (size_t)Buffer, &pcchNewDestLength, &v25, &v26, 0x800u);
          v13 = v25;
          v14 = v26;
          LOWORD(v15) = pcchNewDestLength;
        }
      }
      else
      {
        v8 = Buffer != 0LL ? -2147483643 : -1073741811;
      }
      RemainingString.Length = 2 * v15;
      if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
      {
        RemainingString.Length = 0;
        RemainingString.MaximumLength = 2 * v14;
        RemainingString.Buffer = v13;
      }
      goto LABEL_44;
    }
  }
LABEL_13:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v8;
}
