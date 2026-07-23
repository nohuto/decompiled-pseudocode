/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x140696178
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1406CBCC4 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140285468 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     memset @ 0x140414300 (memset.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x1405D2430 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  int inserted; // ecx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 *v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rdi
  wchar_t *v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h]

  if ( !a2 || !a3 )
  {
    inserted = -1073741811;
    goto LABEL_18;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( v6 < (unsigned __int64)a2 )
  {
    inserted = -1073741811;
    goto LABEL_19;
  }
  memset(a2, 0, a3);
  if ( (unsigned __int64)(a2 + 12) > v6 )
    goto LABEL_6;
  *a2 = 0;
  a2[6] = 0;
  *((_QWORD *)a2 + 5) = a2 + 8;
  *((_QWORD *)a2 + 4) = a2 + 8;
  *((_QWORD *)a2 + 2) = a2 + 2;
  *((_QWORD *)a2 + 1) = a2 + 2;
  v8 = 112LL * *a1;
  if ( v8 <= 0xFFFFFFFF )
  {
    inserted = 0;
    v9 = (unsigned __int64)a2 + (unsigned int)v8 + 48;
    if ( v9 > v6 )
    {
LABEL_6:
      inserted = -2147483643;
      goto LABEL_19;
    }
    v10 = (__int64 *)(a1 + 2);
    v11 = *v10;
    if ( (__int64 *)*v10 != v10 )
    {
      v12 = a2 + 38;
      do
      {
        inserted = AuthzBasepProbeAndInsertTailList((unsigned __int64)(a2 + 2), v12 - 13);
        if ( inserted < 0 )
          goto LABEL_19;
        ++*a2;
        *((_WORD *)v12 - 28) = *(_WORD *)(v11 + 48);
        v13 = (wchar_t *)((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        *((_DWORD *)v12 - 13) = *(_DWORD *)(v11 + 52);
        *(v12 - 3) = v12 - 4;
        *(v12 - 4) = v12 - 4;
        *(v12 - 6) = 0LL;
        *((_DWORD *)v12 - 10) = 0;
        *((_DWORD *)v12 - 4) = 0;
        *v12 = v12 - 1;
        *(v12 - 1) = v12 - 1;
        v14 = *(unsigned __int16 *)(v11 + 32);
        v19 = v14;
        v18 = v14;
        if ( (unsigned __int64)v13 + v14 > v6 )
          goto LABEL_6;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.MaximumLength = v14;
        DestinationString.Buffer = v13;
        RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 32));
        v15 = (unsigned __int64)v13 + (unsigned int)v19;
        *(UNICODE_STRING *)(v12 - 9) = DestinationString;
        inserted = AuthzBasepCopyoutInternalSecurityAttributeValues(
                     v11,
                     (__int64)(v12 - 13),
                     v15,
                     (int)v6 - (int)v15,
                     &v18);
        if ( inserted < 0 )
          goto LABEL_19;
        v12 += 14;
        v11 = *(_QWORD *)v11;
        v9 = v18 + v15;
      }
      while ( (__int64 *)v11 != v10 );
    }
LABEL_18:
    if ( inserted >= 0 )
      return (unsigned int)inserted;
    goto LABEL_19;
  }
  inserted = -1073741675;
LABEL_19:
  if ( a3 >= 0x30 )
  {
    *(_OWORD *)a2 = 0LL;
    *((_OWORD *)a2 + 1) = 0LL;
    *((_OWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)inserted;
}
