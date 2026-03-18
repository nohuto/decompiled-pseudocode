/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402D85EC
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140672CAC (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rbp
  int v7; // r15d
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // r8
  unsigned __int64 v12; // rsi
  __int64 *v13; // r14
  wchar_t *v14; // rdi
  UNICODE_STRING *v15; // rsi
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  wchar_t *v18; // rdx
  UNICODE_STRING *v19; // rax
  const UNICODE_STRING *v21; // rdx
  __int64 v22; // r12
  UNICODE_STRING *v23; // rcx
  size_t v24; // rax
  char *v25; // r12

  v5 = 0;
  v6 = a3 + a4;
  v7 = a3;
  if ( v6 < a3 )
    return (unsigned int)-2147483643;
  v9 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  *a5 = 0;
  v10 = (unsigned int)(*(_DWORD *)(a1 + 60) << 6);
  if ( v9 + v10 > v6 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    v11 = (__int64 *)(a1 + 72);
    v12 = v9;
    v13 = *(__int64 **)(a1 + 72);
    v14 = (wchar_t *)(v10 + v9);
    if ( v13 != (__int64 *)(a1 + 72) )
    {
      v15 = (UNICODE_STRING *)(v12 + 48);
      v16 = a2;
      do
      {
        *(_DWORD *)&v15[-1].Length = 0;
        v17 = *(_WORD *)(a1 + 48);
        if ( !v17 )
          return (unsigned int)-1073741811;
        if ( v17 > 2u )
        {
          switch ( v17 )
          {
            case 3u:
              v21 = (const UNICODE_STRING *)(v13 + 5);
              v22 = *((unsigned __int16 *)v13 + 20);
              if ( (unsigned __int64)v14 + v22 > v6 )
                return (unsigned int)-2147483643;
              v23 = (UNICODE_STRING *)((char *)v15 - 8);
              WORD1(v15[-1].Buffer) = v22;
              LOWORD(v15[-1].Buffer) = 0;
              *(_QWORD *)&v15->Length = v14;
LABEL_15:
              RtlCopyUnicodeString(v23, v21);
              v14 = (wchar_t *)((char *)v14 + v22);
              goto LABEL_16;
            case 4u:
              v21 = (const UNICODE_STRING *)(v13 + 6);
              v22 = *((unsigned __int16 *)v13 + 24);
              if ( (unsigned __int64)v14 + v22 > v6 )
                return (unsigned int)-2147483643;
              v23 = v15;
              v15[-1].Buffer = (wchar_t *)v13[5];
              v15->Length = 0;
              v15->MaximumLength = v22;
              v15->Buffer = v14;
              goto LABEL_15;
            case 5u:
              goto LABEL_23;
          }
          if ( v17 != 6 )
          {
            if ( v17 != 16 )
              return (unsigned int)-1073741811;
LABEL_23:
            v24 = *((unsigned int *)v13 + 12);
            v25 = (char *)v14 + v24;
            if ( (unsigned __int64)v14 + v24 > v6 )
              return (unsigned int)-2147483643;
            *(_DWORD *)&v15->Length = v24;
            v15[-1].Buffer = v14;
            memmove(v14, (const void *)v13[5], v24);
            v14 = (wchar_t *)v25;
LABEL_16:
            v16 = a2;
            v11 = (__int64 *)(a1 + 72);
            goto LABEL_8;
          }
        }
        v15[-1].Buffer = (wchar_t *)v13[5];
LABEL_8:
        v18 = *(wchar_t **)(v16 + 80);
        if ( *(_QWORD *)v18 != v16 + 72 )
          __fastfail(3u);
        v15[-3].Buffer = v18;
        v19 = v15 - 3;
        *(_QWORD *)&v19->Length = v16 + 72;
        v15 += 4;
        *(_QWORD *)v18 = v19;
        *(_QWORD *)(v16 + 80) = v19;
        ++*(_DWORD *)(v16 + 60);
        v13 = (__int64 *)*v13;
      }
      while ( v13 != v11 );
    }
    *a5 = (_DWORD)v14 - v7;
  }
  return v5;
}
