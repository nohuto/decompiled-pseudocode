/*
 * XREFs of CmpCheckLexicographicalOrder @ 0x1406E2570
 * Callers:
 *     CmpCheckRegistry2 @ 0x1406DF7A0 (CmpCheckRegistry2.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406DDE80 (CmpCompareCompressedName.c)
 */

__int64 __fastcall CmpCheckLexicographicalOrder(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD, int *); // rax
  __int64 v6; // r13
  _WORD *v7; // rax
  _WORD *v8; // r14
  unsigned __int8 *v9; // r11
  __int16 v10; // dx
  unsigned __int8 *v11; // rbx
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // r9
  unsigned int v14; // edi
  unsigned int v15; // esi
  int v16; // ecx
  unsigned int v17; // ebx
  unsigned __int16 v19; // r8
  UNICODE_STRING String2; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+80h] [rbp+20h] BYREF
  int v23; // [rsp+84h] [rbp+24h]
  int v24; // [rsp+98h] [rbp+38h] BYREF
  int v25; // [rsp+9Ch] [rbp+3Ch]

  v23 = 0;
  v25 = 0;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8);
  v22 = -1;
  v24 = -1;
  String1 = 0LL;
  String2 = 0LL;
  v6 = v3(a1, a3, &v22);
  v7 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v24);
  v8 = v7;
  if ( !v6 || !v7 )
  {
    v17 = -1073741670;
    goto LABEL_15;
  }
  v9 = (unsigned __int8 *)(v7 + 38);
  v10 = v7[1] & 0x20;
  v11 = (unsigned __int8 *)(v6 + 76);
  if ( (*(_BYTE *)(v6 + 2) & 0x20) == 0 )
  {
    String2.Buffer = (wchar_t *)(v6 + 76);
    if ( v10 )
    {
      v19 = v7[36];
      String2.Length = *(_WORD *)(v6 + 72);
      String2.MaximumLength = String2.Length;
      if ( (int)CmpCompareCompressedName((__int64)&String2, v9, v19, 0) <= 0 )
      {
        v17 = -1073741492;
        goto LABEL_15;
      }
    }
    else
    {
      String1.Length = v7[36];
      String1.MaximumLength = String1.Length;
      String2.Length = *(_WORD *)(v6 + 72);
      String2.MaximumLength = String2.Length;
      String1.Buffer = v7 + 38;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
      {
        v17 = -1073741492;
        goto LABEL_15;
      }
    }
LABEL_14:
    v17 = 0;
    goto LABEL_15;
  }
  v12 = v7[36];
  v13 = *(_WORD *)(v6 + 72);
  if ( !v10 )
  {
    String1.Buffer = v7 + 38;
    String1.Length = v12;
    String1.MaximumLength = v12;
    if ( (int)CmpCompareCompressedName((__int64)&String1, (unsigned __int8 *)(v6 + 76), v13, 0) >= 0 )
    {
      v17 = -1073741492;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v12 )
  {
    while ( v13 )
    {
      v14 = *v9++;
      v15 = *v11++;
      if ( (_WORD)v14 != (_WORD)v15 )
      {
        if ( v14 >= 0x61 )
        {
          if ( v14 > 0x7A )
            LOWORD(v14) = NLS_UPCASE(v14);
          else
            LOWORD(v14) = v14 - 32;
        }
        if ( v15 >= 0x61 )
        {
          if ( v15 > 0x7A )
            LOWORD(v15) = NLS_UPCASE(v15);
          else
            LOWORD(v15) = v15 - 32;
        }
        v16 = (unsigned __int16)v14 - (unsigned __int16)v15;
        if ( (unsigned __int16)v14 != (unsigned __int16)v15 )
          goto LABEL_13;
      }
      --v13;
      if ( !--v12 )
        break;
    }
  }
  v16 = v12 - v13;
LABEL_13:
  if ( v16 < 0 )
    goto LABEL_14;
  v17 = -1073741492;
LABEL_15:
  if ( v6 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v22);
  if ( v8 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
  return v17;
}
