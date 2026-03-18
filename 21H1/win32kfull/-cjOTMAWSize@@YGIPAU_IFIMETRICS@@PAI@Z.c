/*
 * XREFs of ?cjOTMAWSize@@YGIPAU_IFIMETRICS@@PAI@Z @ 0x87B80
 * Callers:
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall cjOTMAWSize(_DWORD *a1, _DWORD *a2)
{
  const WCHAR *v4; // ecx
  const WCHAR *v5; // esi
  ULONG v7; // esi
  bool v8; // sf
  ULONG v9; // eax
  const WCHAR *v10; // ecx
  const WCHAR *v11; // esi
  ULONG v13; // esi
  NTSTATUS v14; // eax
  const unsigned __int16 *v15; // edx
  ULONG v16; // esi
  _WORD *v17; // esi
  _WORD *v18; // edx
  ULONG v20; // esi
  NTSTATUS v21; // eax
  bool v23; // [esp+Ch] [ebp-14h]
  bool v24; // [esp+14h] [ebp-Ch]
  bool v25; // [esp+14h] [ebp-Ch]
  ULONG v26; // [esp+18h] [ebp-8h]
  ULONG v27; // [esp+18h] [ebp-8h]
  ULONG v28; // [esp+18h] [ebp-8h]
  ULONG BytesInMultiByteString; // [esp+1Ch] [ebp-4h] BYREF

  BytesInMultiByteString = 0;
  *a2 = 224;
  v4 = (const WCHAR *)((char *)a1 + a1[2]);
  v5 = v4;
  while ( *v5++ )
    ;
  v7 = 2 * (v5 - (v4 + 1));
  v8 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v4, v7) < 0;
  v9 = BytesInMultiByteString;
  *a2 += v7;
  v23 = !v8;
  v10 = (const WCHAR *)((char *)a1 + a1[4]);
  v26 = v9 + 216;
  v11 = v10;
  while ( *v11++ )
    ;
  v13 = 2 * (v11 - (v10 + 1));
  v14 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v10, v13);
  *a2 += v13;
  v15 = (const unsigned __int16 *)((char *)a1 + a1[3]);
  v24 = v14 >= 0;
  v27 = BytesInMultiByteString + v26;
  v16 = 2 * wcslen(v15);
  v25 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v15, v16) >= 0 && v23 && v24;
  *a2 += v16;
  v17 = (_WORD *)((char *)a1 + a1[5]);
  v28 = BytesInMultiByteString + v27;
  v18 = v17 + 1;
  while ( *v17++ )
    ;
  v20 = 2 * (v17 - v18);
  v21 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, (PCWCH)((char *)a1 + a1[5]), v20);
  *a2 += v20;
  return v25 && v21 >= 0 ? BytesInMultiByteString + v28 : 0;
}
