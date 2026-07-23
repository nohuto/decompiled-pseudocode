/*
 * XREFs of LdrpGetMUILangConfigNode @ 0x1800EEC28
 * Callers:
 *     RtlpTraverseParents @ 0x18005884C (RtlpTraverseParents.c)
 * Callees:
 *     RtlpCompareConfigNodeWithSpec @ 0x1800F0084 (RtlpCompareConfigNodeWithSpec.c)
 *     RtlpMuiRegGetLanginfoTypeNSpec @ 0x1800F0B14 (RtlpMuiRegGetLanginfoTypeNSpec.c)
 */

__int64 __fastcall LdrpGetMUILangConfigNode(__int64 a1, __int64 a2, __int64 a3, __int16 *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r11
  int v9; // ebp
  __int16 v10; // di
  __int16 v11; // cx
  __int64 v12; // r15
  unsigned int v13[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 v14; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  *a4 = -1;
  if ( (int)RtlpMuiRegGetLanginfoTypeNSpec(a1, v13, &v14) < 0 )
    return 3221225701LL;
  v9 = *(unsigned __int16 *)(v7 + 4);
  v10 = 0;
  v11 = -1;
  if ( *(_WORD *)(v7 + 4) )
  {
    v12 = *(_QWORD *)(v7 + 8);
    while ( !(unsigned __int8)RtlpCompareConfigNodeWithSpec(a2, v13[0], v14, v12 + 12LL * v10) )
    {
      if ( ++v10 >= v9 )
      {
        v11 = -1;
        goto LABEL_12;
      }
    }
    *a4 = v10;
    v11 = v10;
  }
LABEL_12:
  if ( v11 == -1 )
    return (unsigned int)-1073741811;
  return v4;
}
