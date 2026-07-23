/*
 * XREFs of AuthzBasepCopyoutClaimAttributes @ 0x14096CC2C
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406031BC (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x14026D5E8 (RtlStringCbCopyNW.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     memset @ 0x140414300 (memset.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x14096C9BC (AuthzBasepCopyoutClaimAttributeValues.c)
 */

int __fastcall AuthzBasepCopyoutClaimAttributes(unsigned int *a1, _DWORD *a2, size_t a3)
{
  unsigned __int64 v6; // r12
  int result; // eax
  _DWORD *v8; // r15
  int v9; // r10d
  ULONGLONG v10; // rsi
  __int64 *v11; // r13
  __int64 v12; // r14
  _DWORD *v13; // r15
  ULONGLONG v14; // rcx
  wchar_t *v15; // rsi
  unsigned __int64 v16; // rsi
  ULONGLONG pullResult; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    result = -1073741811;
    goto LABEL_17;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( (_DWORD *)((char *)a2 + a3) < a2 )
  {
    result = -1073741811;
    goto LABEL_18;
  }
  memset(a2, 0, a3);
  v8 = a2 + 4;
  pullResult = 16LL;
  if ( (unsigned __int64)(a2 + 4) > v6 )
  {
    result = -1073741789;
    goto LABEL_18;
  }
  result = RtlULongLongMult(0x20uLL, *a1, &pullResult);
  if ( result >= 0 )
  {
    v10 = (ULONGLONG)v8 + pullResult;
    if ( (unsigned __int64)v8 + pullResult > v6 )
    {
LABEL_9:
      result = -2147483643;
      goto LABEL_18;
    }
    v11 = (__int64 *)(a1 + 2);
    *a2 = 1;
    a2[1] = v9;
    *((_QWORD *)a2 + 1) = v8;
    v12 = *v11;
    if ( (__int64 *)*v11 != v11 )
    {
      v13 = a2 + 8;
      do
      {
        *((_WORD *)v13 - 4) = *(_WORD *)(v12 + 48);
        *v13 = *(_DWORD *)(v12 + 60);
        *((_WORD *)v13 - 3) = 0;
        *(v13 - 1) = *(_DWORD *)(v12 + 52);
        v14 = *(unsigned __int16 *)(v12 + 32) + 2LL;
        pullResult = v14;
        v15 = (wchar_t *)((v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (unsigned __int64)v15 + v14 > v6 )
          goto LABEL_9;
        *((_QWORD *)v13 - 2) = v15;
        RtlStringCbCopyNW(v15, v14, *(STRSAFE_PCNZWCH *)(v12 + 40), v14 - 2);
        v16 = (unsigned __int64)v15 + pullResult;
        result = AuthzBasepCopyoutClaimAttributeValues(v12, (__int64)(v13 - 4), v16, v6 - v16, &pullResult);
        if ( result < 0 )
          goto LABEL_18;
        v10 = pullResult + v16;
        v13 += 8;
        v12 = *(_QWORD *)v12;
      }
      while ( (__int64 *)v12 != v11 );
    }
LABEL_17:
    if ( result >= 0 )
      return result;
  }
LABEL_18:
  if ( a3 >= 0x10 )
    *(_OWORD *)a2 = 0LL;
  return result;
}
