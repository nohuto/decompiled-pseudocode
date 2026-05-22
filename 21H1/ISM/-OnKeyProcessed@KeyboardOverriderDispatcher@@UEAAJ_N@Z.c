/*
 * XREFs of ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800B5640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800AF6C8 (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B5880 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800B5934 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::OnKeyProcessed(KeyboardOverriderDispatcher *this, char a2)
{
  _QWORD *v2; // rax
  __int64 v5; // rsi
  _OWORD *v6; // rdx
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  bool v22; // zf
  _OWORD *v23; // rax
  unsigned __int16 *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  _QWORD *v38; // rax
  __int64 v39; // rdi
  unsigned __int16 v41[184]; // [rsp+20h] [rbp-188h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v2 )
    v2 = (_QWORD *)*v2;
  v5 = 2LL;
  v6 = *(_OWORD **)(v2[1] + 8 * (*((_QWORD *)this + 6) & (v2[2] - 1LL)));
  v7 = v41;
  v8 = 2LL;
  do
  {
    v9 = v6[1];
    *(_OWORD *)v7 = *v6;
    v10 = v6[2];
    *((_OWORD *)v7 + 1) = v9;
    v11 = v6[3];
    *((_OWORD *)v7 + 2) = v10;
    v12 = v6[4];
    *((_OWORD *)v7 + 3) = v11;
    v13 = v6[5];
    *((_OWORD *)v7 + 4) = v12;
    v14 = v6[6];
    *((_OWORD *)v7 + 5) = v13;
    v15 = v6[7];
    v6 += 8;
    *((_OWORD *)v7 + 6) = v14;
    v7 += 64;
    *((_OWORD *)v7 - 1) = v15;
    --v8;
  }
  while ( v8 );
  v16 = v6[1];
  *(_OWORD *)v7 = *v6;
  v17 = v6[2];
  *((_OWORD *)v7 + 1) = v16;
  v18 = v6[3];
  *((_OWORD *)v7 + 2) = v17;
  v19 = v6[4];
  *((_OWORD *)v7 + 3) = v18;
  v20 = v6[5];
  *((_OWORD *)v7 + 4) = v19;
  v21 = v6[6];
  v22 = (*((_QWORD *)this + 7))-- == 1LL;
  *((_OWORD *)v7 + 5) = v20;
  *((_OWORD *)v7 + 6) = v21;
  if ( v22 )
    *((_QWORD *)this + 6) = 0LL;
  else
    ++*((_QWORD *)this + 6);
  if ( !a2 )
    KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
      this,
      (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v41);
  *((_BYTE *)this + 728) = 0;
  *((_BYTE *)this + 432) = a2;
  if ( a2 )
  {
    v23 = (_OWORD *)((char *)this + 64);
    v24 = v41;
    do
    {
      v25 = *((_OWORD *)v24 + 1);
      *v23 = *(_OWORD *)v24;
      v26 = *((_OWORD *)v24 + 2);
      v23[1] = v25;
      v27 = *((_OWORD *)v24 + 3);
      v23[2] = v26;
      v28 = *((_OWORD *)v24 + 4);
      v23[3] = v27;
      v29 = *((_OWORD *)v24 + 5);
      v23[4] = v28;
      v30 = *((_OWORD *)v24 + 6);
      v23[5] = v29;
      v31 = *((_OWORD *)v24 + 7);
      v24 += 64;
      v23[6] = v30;
      v23 += 8;
      *(v23 - 1) = v31;
      --v5;
    }
    while ( v5 );
    v32 = *((_OWORD *)v24 + 1);
    *v23 = *(_OWORD *)v24;
    v33 = *((_OWORD *)v24 + 2);
    v23[1] = v32;
    v34 = *((_OWORD *)v24 + 3);
    v23[2] = v33;
    v35 = *((_OWORD *)v24 + 4);
    v23[3] = v34;
    v36 = *((_OWORD *)v24 + 5);
    v23[4] = v35;
    v37 = *((_OWORD *)v24 + 6);
    v23[5] = v36;
    v23[6] = v37;
  }
  while ( *((_QWORD *)this + 7) )
  {
    v38 = (_QWORD *)*((_QWORD *)this + 3);
    if ( v38 )
      v38 = (_QWORD *)*v38;
    v39 = *(_QWORD *)(v38[1] + 8 * (*((_QWORD *)this + 6) & (v38[2] - 1LL)));
    if ( (*(_BYTE *)(v39 + 270) & 0x80) == 0 )
    {
      Win32kInterop::CreateKeyboardInputInfo(v41, v39);
      KeyboardOverriderDispatcher::SendMessageToNarrator(
        this,
        (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)v39,
        (const struct KeyboardInputInfo *)v41);
      return 0LL;
    }
    KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
      this,
      (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v39);
    v22 = (*((_QWORD *)this + 7))-- == 1LL;
    if ( v22 )
      *((_QWORD *)this + 6) = 0LL;
    else
      ++*((_QWORD *)this + 6);
  }
  return 0LL;
}
