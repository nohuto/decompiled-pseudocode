/*
 * XREFs of RtlpCompareConfigNodeWithSpec @ 0x1800F0084
 * Callers:
 *     LdrpGetMUILangConfigNode @ 0x1800EEC28 (LdrpGetMUILangConfigNode.c)
 * Callees:
 *     RtlpMuiRegGetLanginfoTypeNSpec @ 0x1800F0B14 (RtlpMuiRegGetLanginfoTypeNSpec.c)
 */

char __fastcall RtlpCompareConfigNodeWithSpec(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  char v4; // r11
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r8
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 || !a4 )
    return 0;
  v7 = *a4;
  v8 = (unsigned __int16)a4[1] >> 14;
  v11[0] = v8;
  v12 = v7;
  if ( v8 == 2 )
  {
    if ( (v7 & 0x8000u) == 0LL )
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( (int)v7 < *(unsigned __int16 *)(v9 + 6)
        && (int)RtlpMuiRegGetLanginfoTypeNSpec(*(_QWORD *)(v9 + 16) + 28 * v7, v11, &v12) >= 0 )
      {
        v8 = v11[0];
        LOWORD(v7) = v12;
        goto LABEL_8;
      }
    }
    return 0;
  }
LABEL_8:
  if ( a2 == v8 && a3 == (_WORD)v7 )
    return 1;
  return v4;
}
