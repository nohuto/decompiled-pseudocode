/*
 * XREFs of HandleBaseWindowDestruction @ 0x1C01B1630
 * Callers:
 *     DestroyBaseWindow @ 0x1C01438D0 (DestroyBaseWindow.c)
 * Callees:
 *     HandleInputDestDestruction @ 0x1C007166C (HandleInputDestDestruction.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C01893E8 (INPUTDEST_FROM_BASEWND.c)
 */

void __fastcall HandleBaseWindowDestruction(__int64 a1)
{
  _OWORD *v1; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _OWORD v8[7]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v9[30]; // [rsp+90h] [rbp-78h] BYREF

  v1 = INPUTDEST_FROM_BASEWND(v9, a1);
  v2 = v1[1];
  v8[0] = *v1;
  v3 = v1[2];
  v8[1] = v2;
  v4 = v1[3];
  v8[2] = v3;
  v5 = v1[4];
  v8[3] = v4;
  v6 = v1[5];
  v8[4] = v5;
  v7 = v1[6];
  v8[5] = v6;
  v8[6] = v7;
  HandleInputDestDestruction((struct tagINPUTDEST *)v8);
}
