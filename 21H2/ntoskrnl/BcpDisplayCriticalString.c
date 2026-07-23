/*
 * XREFs of BcpDisplayCriticalString @ 0x1405C4B7C
 * Callers:
 *     BcpDisplayErrorInformation @ 0x1405C4EE8 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x1405C5170 (BcpDisplayProgress.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x1405C56AC (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5934 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x1405C4604 (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x1405C4800 (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x1405C5544 (BcpPrintSpaces.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x1405C5CBC (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalString(unsigned __int16 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  int v6; // r12d
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  int v10; // ebx
  __int64 v11; // rcx
  int StringAdvanceWidth; // r8d
  __int64 v13; // r9
  unsigned int v14; // ebx
  unsigned __int16 *v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 result; // rax
  unsigned __int64 v26; // [rsp+40h] [rbp-38h]
  int v27; // [rsp+50h] [rbp-28h]
  bool v28; // [rsp+54h] [rbp-24h]
  int v29; // [rsp+58h] [rbp-20h]
  int *v30; // [rsp+60h] [rbp-18h]
  int v32; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v33; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+60h] BYREF

  v32 = 0;
  v33 = 0;
  v34 = 0;
  v5 = 9LL * (int)a4;
  if ( BcpTextBoxLeftEdgeOverride )
    v6 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
  else
    v6 = dword_140C10EF0[18 * (int)a4 + 8] + dword_140C10EF0[18 * (int)a4 + 4];
  if ( BcpTextBoxRightEdgeOverride )
    v7 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
  else
    v7 = dword_140C10EF0[18 * (int)a4 + 8] + dword_140C10EF0[18 * (int)a4 + 6] + dword_140C10EF0[18 * (int)a4 + 4];
  v8 = BcpCursor;
  v9 = HIDWORD(BcpCursor);
  v10 = dword_140C4C628;
  v11 = *(_QWORD *)(qword_140C53F30 + 24);
  v28 = 0;
  *(_DWORD *)(v11 + 56) = a2;
  *(_DWORD *)(qword_140C53F30 + 8) = a2;
  v30 = (int *)(v11 + 40);
  StringAdvanceWidth = BgpFoGetStringAdvanceWidth((int)v11 + 40, (__int64)a1, &v34, a4);
  if ( StringAdvanceWidth >= 0 )
    v28 = v8 + v34 > v7;
  LODWORD(v13) = (_DWORD)v30;
  v14 = v10 - v9;
  v15 = a1;
  v16 = 0;
  v17 = 0;
  if ( (int)v14 <= 0 )
    v14 = 0;
  v34 = 0;
  v27 = *v30;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v28 && v16 <= v17 )
      {
        v18 = *((_QWORD *)v15 + 1);
        v19 = v17;
        v34 = v17;
        v29 = 0;
        if ( *(_WORD *)(v18 + 2LL * v17) != 32 )
        {
          while ( 1 )
          {
            v20 = *(unsigned __int16 *)(v18 + 2 * v19);
            if ( v20 <= 0xD )
            {
              v21 = 9217;
              if ( _bittest(&v21, v20) )
                break;
            }
            StringAdvanceWidth = BgpRasGetGlyphAdvanceWidth(v13, v20, (unsigned int)&v32, v13, (__int64)&BcpWorkspace);
            if ( StringAdvanceWidth < 0 )
              goto LABEL_40;
            v13 = v34 + 1;
            v29 += v32;
            ++v34;
            if ( v7 < v29 + v8 && v14 )
            {
              if ( v8 < v7 )
              {
                StringAdvanceWidth = BcpPrintSpaces(qword_140C53F30, v8, v7, v9, v27, (__int64)&v33);
                if ( StringAdvanceWidth < 0 )
                  goto LABEL_40;
                if ( v14 < v33 )
                  v14 = v33;
              }
              v8 = v6;
              v22 = v14 + dword_140C10EF0[2 * v5 + 10];
              v14 = 0;
              v9 += v22;
              break;
            }
            v19 = (unsigned int)v13;
            v18 = *((_QWORD *)a1 + 1);
            if ( *(_WORD *)(v18 + 2 * v13) == 32 )
              break;
            LODWORD(v13) = (_DWORD)v30;
          }
        }
      }
      StringAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                             (_DWORD)v30,
                             *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v17),
                             (unsigned int)&v32,
                             v13,
                             (__int64)&BcpWorkspace);
      if ( StringAdvanceWidth < 0 )
        goto LABEL_40;
      if ( v7 >= v8 + v32 )
        break;
      if ( v8 < v7 )
      {
        StringAdvanceWidth = BcpPrintSpaces(qword_140C53F30, v8, v7, v9, v27, (__int64)&v33);
        if ( StringAdvanceWidth < 0 )
          goto LABEL_40;
        if ( v14 < v33 )
          v14 = v33;
      }
      v23 = v17;
      v8 = v6;
      v24 = v14 + dword_140C10EF0[2 * v5 + 10];
      v14 = 0;
      v9 += v24;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v17) != 32 )
        goto LABEL_36;
LABEL_39:
      ++v17;
      v15 = a1;
      v16 = v34;
      LODWORD(v13) = (_DWORD)v30;
      if ( v17 >= *a1 >> 1 )
        goto LABEL_40;
    }
    v23 = v17;
LABEL_36:
    StringAdvanceWidth = BgpDisplayCharacterEx(
                           *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v23),
                           (__int64 *)qword_140C53F30,
                           v8,
                           v9,
                           v27,
                           -1,
                           &v32,
                           &v33,
                           v26);
    if ( StringAdvanceWidth < 0 )
      goto LABEL_40;
    v8 += v32;
    if ( v33 > v14 )
      v14 = v33;
    goto LABEL_39;
  }
LABEL_40:
  LODWORD(BcpCursor) = v8;
  dword_140C4C628 = v9 + v14;
  result = (unsigned int)StringAdvanceWidth;
  HIDWORD(BcpCursor) = v9;
  return result;
}
