/*
 * XREFs of CmpDoCompareKeyName @ 0x1406DDD60
 * Callers:
 *     CmpCompareInIndex @ 0x1406DD450 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406DD740 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpSelectLeaf @ 0x14076BDCC (CmpSelectLeaf.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1407ACC90 (CmpFindSubKeyByHashWithStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406DDE80 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140875F88 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpDoCompareKeyName(__int64 a1, const UNICODE_STRING *a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 (__fastcall *v5)(__int64, _QWORD, int *); // rax
  __int64 v8; // rax
  unsigned __int16 v10; // cx
  __int64 v11; // r10
  LONG v12; // eax
  int v13; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-8h]
  int v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+44h] [rbp+Ch]

  v16 = -1;
  v17 = 0;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8);
  String2 = 0LL;
  v8 = v5(a1, a4, &v16);
  if ( !v8 )
    return 2LL;
  v10 = *(_WORD *)(v8 + 72);
  v11 = v8 + 76;
  if ( (*(_BYTE *)(v8 + 2) & 0x20) != 0 )
  {
    if ( a3 )
      v12 = CmpCompareTwoCompressedNames(*((_QWORD *)a3 + 1), *a3, v11);
    else
      v12 = CmpCompareCompressedName(
              a2,
              v11,
              *(unsigned __int16 *)(v8 + 72),
              0LL,
              *(_QWORD *)&String2.Length,
              String2.Buffer,
              v15);
  }
  else
  {
    String2.Buffer = (wchar_t *)(v8 + 76);
    String2.Length = v10;
    String2.MaximumLength = v10;
    if ( a3 )
    {
      v13 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, _QWORD, _QWORD, _QWORD))CmpCompareCompressedName)(
                    &String2,
                    *((_QWORD *)a3 + 1),
                    *a3,
                    0LL);
      goto LABEL_11;
    }
    v12 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
  v13 = v12;
LABEL_11:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v16);
  if ( v13 )
    return ((v13 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
