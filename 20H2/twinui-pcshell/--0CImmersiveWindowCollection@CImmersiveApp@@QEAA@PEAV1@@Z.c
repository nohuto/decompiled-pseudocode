/*
 * XREFs of ??0CImmersiveWindowCollection@CImmersiveApp@@QEAA@PEAV1@@Z @ 0x18003C434
 * Callers:
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x18003C1A0 (--0CImmersiveApp@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
LPRECT __fastcall CImmersiveApp::CImmersiveWindowCollection::CImmersiveWindowCollection(
        LPRECT lprcDst,
        struct CImmersiveApp *a2)
{
  LPRECT v4; // rbx

  v4 = lprcDst + 1;
  SetRectEmpty(lprcDst + 1);
  v4->left = 1;
  CopyRect(lprcDst, v4);
  *(_QWORD *)&lprcDst[2].top = 0LL;
  *(_QWORD *)&lprcDst[2].bottom = 0LL;
  *(_QWORD *)&lprcDst[3].top = 0LL;
  lprcDst[3].bottom = 0;
  *(_QWORD *)&lprcDst[4].left = 3LL;
  lprcDst[4].right = 0;
  lprcDst[2].left = -1;
  *(_QWORD *)&lprcDst[5].left = 0LL;
  *(_QWORD *)&lprcDst[5].right = 0LL;
  *(_QWORD *)&lprcDst[6].left = 0LL;
  lprcDst[6].right = 0;
  *(_QWORD *)&lprcDst[6].bottom = 3LL;
  *(_QWORD *)&lprcDst[7].top = 0LL;
  lprcDst[4].bottom = -1;
  *(_QWORD *)&lprcDst[8].left = 0LL;
  *(_QWORD *)&lprcDst[8].right = 0LL;
  *(_QWORD *)&lprcDst[9].right = 0LL;
  *(_QWORD *)&lprcDst[10].left = a2;
  *(_QWORD *)&lprcDst[10].right = 0LL;
  *(_QWORD *)&lprcDst[11].left = 0LL;
  *(_QWORD *)&lprcDst[11].right = 0LL;
  *(_QWORD *)&lprcDst[12].left = 0LL;
  LOWORD(lprcDst[12].right) = 0;
  BYTE2(lprcDst[12].right) = 0;
  *(_QWORD *)&lprcDst[12].bottom = 0LL;
  lprcDst[13].top = 0;
  if ( &lprcDst[13].right <= &lprcDst[15].right )
    memset_0(&lprcDst[13].right, 0, 8LL * (&lprcDst[15].right >= &lprcDst[13].right ? 4 : 0));
  *(_QWORD *)&lprcDst[15].right = 0LL;
  *(_QWORD *)&lprcDst[16].left = 0LL;
  *(_QWORD *)&lprcDst[16].right = 0LL;
  *(_QWORD *)&lprcDst[17].left = 0LL;
  *(_QWORD *)&lprcDst[17].right = 0LL;
  return lprcDst;
}
