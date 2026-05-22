/*
 * XREFs of ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800B4CD0
 * Callers:
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800B4C88 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B53C0 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 */

void __fastcall KeyboardOverriderDispatcher::DrainMessageQueue(KeyboardOverriderDispatcher *this)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int128 *v4; // rdx
  __int128 *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _BYTE v21[376]; // [rsp+20h] [rbp-178h] BYREF

  while ( 1 )
  {
    v2 = *((_QWORD *)this + 7);
    if ( !v2 )
      break;
    v3 = (_QWORD *)*((_QWORD *)this + 3);
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(__int128 **)(v3[1] + 8 * (*((_QWORD *)this + 6) & (v3[2] - 1LL)));
    v5 = (__int128 *)v21;
    v6 = 2LL;
    do
    {
      v7 = *v4;
      v8 = v4[1];
      v4 += 8;
      *v5 = v7;
      v9 = *(v4 - 6);
      v5[1] = v8;
      v10 = *(v4 - 5);
      v5[2] = v9;
      v11 = *(v4 - 4);
      v5[3] = v10;
      v12 = *(v4 - 3);
      v5[4] = v11;
      v13 = *(v4 - 2);
      v5[5] = v12;
      v14 = *(v4 - 1);
      v5[6] = v13;
      v5 += 8;
      *(v5 - 1) = v14;
      --v6;
    }
    while ( v6 );
    v15 = v4[1];
    *v5 = *v4;
    v16 = v4[2];
    v5[1] = v15;
    v17 = v4[3];
    v5[2] = v16;
    v18 = v4[4];
    v5[3] = v17;
    v19 = v4[5];
    v5[4] = v18;
    v20 = v4[6];
    v5[5] = v19;
    v5[6] = v20;
    *((_QWORD *)this + 7) = v2 - 1;
    if ( v2 == 1 )
      *((_QWORD *)this + 6) &= v2 - 1;
    else
      ++*((_QWORD *)this + 6);
    KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
      this,
      (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v21);
  }
}
