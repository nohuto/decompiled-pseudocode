/*
 * XREFs of xxxSpeedHitTest @ 0x1C00B0B54
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C00B0A10 (EditionMouseSpeedHitTest.c)
 *     EditionSpeedHitTest @ 0x1C0217CF0 (EditionSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C021843C (xxxPointerSpeedHitTest.c)
 * Callees:
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C00B0C94 (-CanHitTestInDwm@@YA_NXZ.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B0CEC (xxxDCompSpeedHitTest.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010DB5C (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01270A0 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C021582C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxSpeedHitTest(int a1, __int64 a2, int a3, const struct _SUBPIXELS *a4, __int64 a5, _OWORD *a6)
{
  unsigned __int8 v9; // bl
  __int64 v11; // rdi
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  struct tagWND *v20; // rax
  struct tagWND *v21; // rax
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  __int128 v27; // xmm5
  __int128 v28; // xmm6
  _OWORD v29[8]; // [rsp+48h] [rbp-49h] BYREF

  v9 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  memset(v29, 0, 0x70uLL);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    LODWORD(v29[0]) = 4;
    *(_QWORD *)&v29[5] = v11;
    HIDWORD(v29[5]) = 2;
    HIDWORD(v29[6]) = *(_DWORD *)(*(_QWORD *)(v12 + 416) + 1088LL);
  }
  v13 = v29[1];
  *a6 = v29[0];
  v14 = v29[2];
  a6[1] = v13;
  v15 = v29[3];
  a6[2] = v14;
  v16 = v29[4];
  a6[3] = v15;
  v17 = v29[5];
  a6[4] = v16;
  v18 = v29[6];
  a6[5] = v17;
  a6[6] = v18;
  if ( CanHitTestInDwm() )
  {
    return (unsigned __int8)xxxDCompSpeedHitTest(a2, a3, (int)a4, a1, 0LL, a5, (__int64)a6);
  }
  else if ( !a1 )
  {
    v20 = TopLevelSpeedHitTest(grpdeskRitInput, (struct tagPOINT *)(a2 + 20), a4);
    if ( v20 )
    {
      v21 = ClassicChildTreeSpeedHitTest(v20, *(struct tagPOINT *)(a2 + 20));
      if ( v21 )
      {
        v22 = (_OWORD *)INPUTDEST_FROM_PWND(v29, v21);
        v9 = 1;
        v23 = v22[1];
        v24 = v22[2];
        v25 = v22[3];
        v26 = v22[4];
        v27 = v22[5];
        v28 = v22[6];
        *a6 = *v22;
        a6[1] = v23;
        a6[2] = v24;
        a6[3] = v25;
        a6[4] = v26;
        a6[5] = v27;
        a6[6] = v28;
      }
    }
  }
  return v9;
}
