/*
 * XREFs of CmpDoCompareKeyName @ 0x1405E69B0
 * Callers:
 *     CmpCompareInIndex @ 0x1405E61C0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405E6450 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14063F3EC (CmpFindSubKeyByHashWithStatus.c)
 *     CmpSelectLeaf @ 0x140758E70 (CmpSelectLeaf.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1405E66D0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall CmpDoCompareKeyName(__int64 a1, const UNICODE_STRING *a2, unsigned int a3)
{
  __int64 v5; // rax
  wchar_t *v6; // r11
  unsigned __int16 v7; // r10
  unsigned __int16 *Buffer; // rbx
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  LONG v12; // edi
  unsigned __int16 v14; // ax
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]

  v16 = -1;
  v17 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a3, &v16);
  if ( !v5 )
    return 2LL;
  v6 = (wchar_t *)(v5 + 76);
  if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
  {
    v7 = a2->Length >> 1;
    Buffer = a2->Buffer;
    v9 = *(_WORD *)(v5 + 72);
    if ( v7 )
    {
      while ( v9 )
      {
        v10 = *Buffer++;
        v11 = *(unsigned __int8 *)v6;
        v6 = (wchar_t *)((char *)v6 + 1);
        if ( v10 != (_WORD)v11 )
        {
          if ( v10 >= 0x61u )
          {
            if ( v10 > 0x7Au )
              v10 = NLS_UPCASE(v10);
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              LOWORD(v11) = NLS_UPCASE(v11);
            else
              LOWORD(v11) = v11 - 32;
          }
          v12 = v10 - (unsigned __int16)v11;
          if ( v12 )
            goto LABEL_11;
        }
        --v9;
        if ( !--v7 )
          break;
      }
    }
    v12 = v7 - v9;
  }
  else
  {
    v14 = *(_WORD *)(v5 + 72);
    *(_DWORD *)(&String2.MaximumLength + 1) = 0;
    String2.Buffer = v6;
    String2.Length = v14;
    String2.MaximumLength = v14;
    v12 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
LABEL_11:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v16);
  if ( v12 )
    return ((v12 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
