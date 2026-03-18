/*
 * XREFs of AuthzBasepCopyoutClaimAttributes @ 0x140A1A928
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406C1884 (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140248A04 (RtlStringCbCopyNW.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x140A1A6D0 (AuthzBasepCopyoutClaimAttributeValues.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributes(unsigned int *a1, _DWORD *a2, size_t a3)
{
  unsigned __int64 v6; // r15
  _DWORD *v7; // r14
  __int64 result; // rax
  int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // kr00_8
  __int64 v13; // r8
  _DWORD *v14; // rdi
  __int64 *v15; // r12
  __int64 v16; // rsi
  _DWORD *i; // r14
  wchar_t *v18; // rdi
  size_t v19; // r9
  size_t v20; // r13
  unsigned __int64 v21; // rdi
  size_t v22; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 && a3 && (v6 = (unsigned __int64)a2 + a3, (_DWORD *)((char *)a2 + a3) >= a2) )
  {
    memset(a2, 0, a3);
    v7 = a2 + 4;
    if ( (unsigned __int64)(a2 + 4) <= v6 )
    {
      v9 = *a1;
      v10 = *a1;
      v22 = 0LL;
      v12 = v10;
      v11 = 8 * v10;
      v13 = v11 * 4;
      if ( is_mul_ok(0x20uLL, v12) )
      {
        v14 = &v7[v11];
        result = 0LL;
        if ( (unsigned __int64)v7 + v13 <= v6 )
        {
          v15 = (__int64 *)(a1 + 2);
          *a2 = 1;
          a2[1] = v9;
          *((_QWORD *)a2 + 1) = v7;
          v16 = *v15;
          if ( (__int64 *)*v15 == v15 )
            return result;
          for ( i = a2 + 8; ; i += 8 )
          {
            *((_WORD *)i - 4) = *(_WORD *)(v16 + 48);
            v18 = (wchar_t *)(((unsigned __int64)v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            *i = *(_DWORD *)(v16 + 60);
            *((_WORD *)i - 3) = 0;
            *(i - 1) = *(_DWORD *)(v16 + 52);
            v19 = *(unsigned __int16 *)(v16 + 32);
            v20 = v19 + 2;
            v22 = v19 + 2;
            if ( (unsigned __int64)v18 + v19 + 2 > v6 )
              break;
            *((_QWORD *)i - 2) = v18;
            RtlStringCbCopyNW(v18, v19 + 2, *(STRSAFE_PCNZWCH *)(v16 + 40), v19);
            v21 = (unsigned __int64)v18 + v20;
            result = AuthzBasepCopyoutClaimAttributeValues(v16, (__int64)(i - 4), v21, v6 - v21, &v22);
            if ( (int)result < 0 )
              goto LABEL_17;
            v14 = (_DWORD *)(v22 + v21);
            v16 = *(_QWORD *)v16;
            if ( (__int64 *)v16 == v15 )
              return result;
          }
        }
        result = 2147483653LL;
      }
      else
      {
        result = 3221225621LL;
      }
    }
    else
    {
      result = 3221225507LL;
    }
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_17:
  if ( a3 >= 0x10 )
    *(_OWORD *)a2 = 0LL;
  return result;
}
