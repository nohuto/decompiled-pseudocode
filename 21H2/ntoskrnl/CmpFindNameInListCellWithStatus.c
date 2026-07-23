/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x14065AE50
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x14065AD9C (CmpFindNameInListWithStatus.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14087BC34 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406DDE80 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140875F88 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        const UNICODE_STRING *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v10; // ebp
  unsigned int *v11; // r14
  int v12; // edi
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  wchar_t *v15; // rbx
  unsigned __int16 v16; // r10
  unsigned __int16 *Buffer; // r11
  unsigned __int16 v18; // di
  unsigned int v19; // esi
  int v20; // edi
  __int64 result; // rax
  LONG v22; // eax
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-40h] BYREF
  int v26; // [rsp+90h] [rbp+28h]

  v23 = 0xFFFFFFFFLL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  if ( a3 )
  {
    v10 = 0;
    v11 = a2;
    v12 = a5 & 0x10000;
    v26 = a5 & 0x10000;
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *v11, &v23);
      v14 = *(_WORD *)(v13 + 2);
      v15 = (wchar_t *)(v13 + 20);
      LOBYTE(v13) = *(_BYTE *)(v13 + 16);
      String2.Buffer = v15;
      String2.Length = v14;
      String2.MaximumLength = v14;
      if ( (v13 & 1) != 0 )
      {
        if ( v12 )
        {
          v22 = CmpCompareTwoCompressedNames(a4->Buffer, a4->Length, v15);
          goto LABEL_31;
        }
        v16 = a4->Length >> 1;
        Buffer = a4->Buffer;
        if ( v16 )
        {
          while ( v14 )
          {
            v18 = *Buffer++;
            v19 = *(unsigned __int8 *)v15;
            v15 = (wchar_t *)((char *)v15 + 1);
            if ( v18 != (_WORD)v19 )
            {
              if ( v18 >= 0x61u )
              {
                if ( v18 > 0x7Au )
                  v18 = NLS_UPCASE(v18);
                else
                  v18 -= 32;
              }
              if ( v19 >= 0x61 )
              {
                if ( v19 > 0x7A )
                  LOWORD(v19) = NLS_UPCASE(v19);
                else
                  LOWORD(v19) = v19 - 32;
              }
              v20 = v18 - (unsigned __int16)v19;
              if ( v20 )
                goto LABEL_13;
            }
            --v14;
            if ( !--v16 )
              break;
          }
        }
        v20 = v16 - v14;
      }
      else
      {
        if ( !v12 )
        {
          v22 = RtlCompareUnicodeString(a4, &String2, 1u);
LABEL_31:
          v20 = v22;
          goto LABEL_13;
        }
        v20 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, wchar_t *, _QWORD, _QWORD, __int64))CmpCompareCompressedName)(
                      &String2,
                      a4->Buffer,
                      a4->Length,
                      0LL,
                      v23);
      }
LABEL_13:
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v23);
      if ( !v20 )
      {
        result = 0LL;
        *a7 = a2[v10];
        if ( a6 )
          *a6 = v10;
        return result;
      }
      v12 = v26;
      ++v10;
      ++v11;
      if ( v10 >= a3 )
      {
        *a7 = -1;
        if ( a6 )
          *a6 = a3;
        return 3221225524LL;
      }
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
