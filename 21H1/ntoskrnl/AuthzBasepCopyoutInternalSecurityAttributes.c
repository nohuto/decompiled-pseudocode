/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x140672CAC
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140672B48 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402D85EC (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  _DWORD *v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rsi
  __int64 *v11; // r13
  __int64 v12; // r15
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h]

  if ( !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_13;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( v6 < (unsigned __int64)a2 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  memset(a2, 0, a3);
  if ( (unsigned __int64)(a2 + 12) <= v6 )
  {
    *a2 = 0;
    v7 = a2 + 2;
    *((_QWORD *)a2 + 5) = a2 + 8;
    *((_QWORD *)a2 + 4) = a2 + 8;
    *((_QWORD *)a2 + 2) = a2 + 2;
    *((_QWORD *)a2 + 1) = a2 + 2;
    a2[6] = 0;
    v8 = 112LL * *a1;
    if ( v8 > 0xFFFFFFFF )
    {
      v9 = -1073741675;
      goto LABEL_17;
    }
    v9 = 0;
    v10 = (unsigned __int64)a2 + (unsigned int)v8 + 48;
    if ( v10 <= v6 )
    {
      v11 = (__int64 *)(a1 + 2);
      v12 = *v11;
      if ( (__int64 *)*v11 != v11 )
      {
        v13 = a2 + 38;
        do
        {
          v14 = (_QWORD *)*((_QWORD *)a2 + 2);
          if ( (_DWORD *)*v14 != v7 )
            __fastfail(3u);
          *(v13 - 12) = v14;
          *(v13 - 13) = v7;
          *v14 = v13 - 13;
          *((_QWORD *)a2 + 2) = v13 - 13;
          ++*a2;
          *((_WORD *)v13 - 28) = *(_WORD *)(v12 + 48);
          v15 = *(_DWORD *)(v12 + 52);
          *(v13 - 6) = 0LL;
          *((_DWORD *)v13 - 13) = v15;
          *((_DWORD *)v13 - 10) = 0;
          *(v13 - 3) = v13 - 4;
          v16 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          *(v13 - 4) = v13 - 4;
          *v13 = v13 - 1;
          *(v13 - 1) = v13 - 1;
          *((_DWORD *)v13 - 4) = 0;
          v17 = *(unsigned __int16 *)(v12 + 32);
          v21 = v17;
          v20 = v17;
          if ( v16 + v17 > v6 )
            goto LABEL_19;
          *((_WORD *)v13 - 35) = v17;
          *((_WORD *)v13 - 36) = 0;
          *(v13 - 8) = v16;
          RtlCopyUnicodeString((PUNICODE_STRING)(v13 - 9), (PCUNICODE_STRING)(v12 + 32));
          v18 = (unsigned int)v21 + v16;
          v9 = AuthzBasepCopyoutInternalSecurityAttributeValues(v12, (__int64)(v13 - 13), v18, (int)v6 - (int)v18, &v20);
          if ( v9 < 0 )
            goto LABEL_17;
          v13 += 14;
          v12 = *(_QWORD *)v12;
          v10 = v20 + v18;
        }
        while ( (__int64 *)v12 != v11 );
      }
LABEL_13:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_17;
    }
  }
LABEL_19:
  v9 = -2147483643;
LABEL_17:
  if ( a3 >= 0x30 )
  {
    *(_OWORD *)a2 = 0LL;
    *((_OWORD *)a2 + 1) = 0LL;
    *((_OWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)v9;
}
