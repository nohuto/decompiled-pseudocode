/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x1800779C4
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x1800778C4 (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180015F60 (RtlPrefixUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, _UNICODE_STRING *a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  char v7; // di
  char v8; // r12
  bool v9; // r15
  char v10; // r14
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // r11
  __m128i v15; // xmm0
  int v16; // eax
  int v17; // eax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v11 = RtlDetermineDosPathNameType_Ustr(&a2->Length);
  v12 = a2->Length == 4;
  *v13 = v11;
  if ( v12 )
    goto LABEL_28;
  v7 = 1;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    v10 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    return v4;
  }
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    v10 = 1;
    goto LABEL_23;
  }
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
LABEL_23:
    v8 = 1;
    goto LABEL_27;
  }
  if ( v10 )
    goto LABEL_28;
  v15 = *(__m128i *)a2;
  v18[0] = *(_QWORD *)&a2->Length;
  v18[1] = _mm_srli_si128(v15, 8).m128i_u64[0] + 8;
  LOWORD(v18[0]) -= 8;
  WORD1(v18[0]) -= 8;
  v16 = RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)v18);
  v9 = v16 == 2;
  if ( v16 != 2 )
  {
    *a4 |= 0x200u;
LABEL_27:
    if ( !v10 )
      goto LABEL_18;
LABEL_28:
    *a4 |= 0x400u;
    v17 = *a4;
    if ( !v7 )
      goto LABEL_19;
  }
LABEL_18:
  *a4 |= 0x10u;
  v17 = *a4;
LABEL_19:
  if ( v8 )
  {
    v17 |= 0x40u;
    *a4 = v17;
  }
  if ( v9 )
    *a4 = v17 | 0x20;
  return v4;
}
