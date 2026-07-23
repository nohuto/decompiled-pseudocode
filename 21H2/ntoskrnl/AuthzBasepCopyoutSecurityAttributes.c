/*
 * XREFs of AuthzBasepCopyoutSecurityAttributes @ 0x1402F2020
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1402F3050 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributeValues @ 0x1402F22BC (AuthzBasepCopyoutSecurityAttributeValues.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1402F3440 (AuthzBasepFindSecurityAttribute.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall AuthzBasepCopyoutSecurityAttributes(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        size_t Size)
{
  size_t v5; // r12
  unsigned int v6; // r15d
  _DWORD *v10; // r13
  unsigned __int64 v11; // rbp
  unsigned int v12; // r11d
  NTSTATUS result; // eax
  __int64 v14; // r10
  int v15; // r11d
  ULONGLONG v16; // rdi
  _DWORD *v17; // r14
  __int64 SecurityAttribute; // r13
  void *v19; // rdi
  int v20; // ecx
  ULONGLONG v21; // rcx
  ULONGLONG v22; // rdi
  _QWORD *v23; // r13
  _QWORD *v24; // r14
  _DWORD *v25; // r15
  void *v26; // rdi
  ULONGLONG v27; // rcx
  ULONGLONG v28; // rdi
  ULONGLONG pullResult; // [rsp+98h] [rbp+20h] BYREF

  v5 = Size;
  v6 = 0;
  v10 = a1;
  if ( !a4 || !Size )
  {
    result = -1073741811;
    goto LABEL_16;
  }
  v11 = (unsigned __int64)a4 + Size;
  if ( (_DWORD *)((char *)a4 + Size) < a4 )
  {
    result = -1073741811;
  }
  else
  {
    memset(a4, 0, Size);
    pullResult = 16LL;
    if ( (unsigned __int64)(a4 + 4) > v11 )
    {
      result = -1073741789;
    }
    else
    {
      v12 = a3;
      if ( !a2 )
        v12 = *v10;
      result = RtlULongLongMult(0x28uLL, v12, &pullResult);
      if ( result >= 0 )
      {
        v16 = v14 + pullResult;
        if ( v14 + pullResult <= v11 )
        {
          *a4 = 1;
          a4[1] = v15;
          *((_QWORD *)a4 + 1) = v14;
          if ( a2 )
          {
            if ( a3 )
            {
              v17 = (_DWORD *)(v14 + 24);
              while ( 1 )
              {
                SecurityAttribute = AuthzBasepFindSecurityAttribute(v10, a2 + 16LL * v6);
                if ( !SecurityAttribute )
                  break;
                *((_WORD *)v17 - 4) = *(_WORD *)(SecurityAttribute + 48);
                v19 = (void *)((v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
                v20 = *(_DWORD *)(SecurityAttribute + 60);
                *((_WORD *)v17 - 3) = 0;
                *v17 = v20;
                *(v17 - 1) = *(_DWORD *)(SecurityAttribute + 52);
                v21 = *(unsigned __int16 *)(SecurityAttribute + 32);
                pullResult = v21;
                if ( (unsigned __int64)v19 + v21 > v11 )
                  goto LABEL_28;
                *((_WORD *)v17 - 12) = v21;
                *((_WORD *)v17 - 11) = v21;
                *((_QWORD *)v17 - 2) = v19;
                memmove(v19, *(const void **)(SecurityAttribute + 40), (unsigned int)v21);
                v22 = (ULONGLONG)v19 + pullResult;
                result = AuthzBasepCopyoutSecurityAttributeValues(
                           SecurityAttribute,
                           (int)v17 - 24,
                           v22,
                           (int)v11 - (int)v22,
                           (__int64)&pullResult);
                if ( result < 0 )
                  goto LABEL_25;
                v16 = pullResult + v22;
                ++v6;
                v10 = a1;
                v17 += 10;
                if ( v6 >= a3 )
                  goto LABEL_16;
              }
              result = -1073741275;
              goto LABEL_25;
            }
LABEL_16:
            if ( result >= 0 )
              return result;
            goto LABEL_25;
          }
          v23 = v10 + 2;
          v24 = (_QWORD *)*v23;
          if ( (_QWORD *)*v23 == v23 )
            goto LABEL_16;
          v25 = (_DWORD *)(v14 + 24);
          while ( 1 )
          {
            *((_WORD *)v25 - 4) = *((_WORD *)v24 + 24);
            *v25 = *((_DWORD *)v24 + 15);
            *((_WORD *)v25 - 3) = 0;
            v26 = (void *)((v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            *(v25 - 1) = *((_DWORD *)v24 + 13);
            v27 = *((unsigned __int16 *)v24 + 16);
            pullResult = v27;
            if ( (unsigned __int64)v26 + v27 > v11 )
              break;
            *((_WORD *)v25 - 12) = v27;
            *((_WORD *)v25 - 11) = v27;
            *((_QWORD *)v25 - 2) = v26;
            memmove(v26, (const void *)v24[5], (unsigned int)v27);
            v28 = (ULONGLONG)v26 + pullResult;
            result = AuthzBasepCopyoutSecurityAttributeValues(
                       (_DWORD)v24,
                       (int)v25 - 24,
                       v28,
                       (int)v11 - (int)v28,
                       (__int64)&pullResult);
            if ( result < 0 )
              goto LABEL_25;
            v16 = pullResult + v28;
            v25 += 10;
            v24 = (_QWORD *)*v24;
            if ( v24 == v23 )
              goto LABEL_16;
          }
        }
LABEL_28:
        result = -2147483643;
      }
    }
  }
LABEL_25:
  if ( v5 >= 0x10 )
    *(_OWORD *)a4 = 0LL;
  return result;
}
