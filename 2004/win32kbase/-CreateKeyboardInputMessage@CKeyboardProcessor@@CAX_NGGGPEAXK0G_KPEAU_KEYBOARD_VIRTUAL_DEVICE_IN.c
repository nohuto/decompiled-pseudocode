/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C006B1D0
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C0069680 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019F2C0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

void __fastcall CKeyboardProcessor::CreateKeyboardInputMessage(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int16 a8,
        __int16 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10,
        struct _MIT_KEYBOARD_INPUT_MESSAGE *a11)
{
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  __int128 *v18; // rax
  __int128 v19; // xmm0
  __int16 v20; // ax
  __int16 v21; // dx
  __int64 v22; // r15
  int v23; // r8d
  unsigned __int16 v24; // r9
  unsigned __int8 *v25; // rcx
  __int16 v26; // cx
  __int64 v27; // rcx
  __int16 *v28; // rax
  _BYTE *v29; // rdx
  int v30; // r9d
  __int16 v31; // ax
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  unsigned __int8 *v45; // rcx
  unsigned __int8 v46; // r9
  char *v47; // rcx
  _QWORD *v48; // rax
  int v51; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v52; // [rsp+38h] [rbp-C8h] BYREF
  void *v53; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v54[22]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v55; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v56; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1D0h] [rbp+D0h] BYREF
  BOOL *v58; // [rsp+1F0h] [rbp+F0h]
  __int64 v59; // [rsp+1F8h] [rbp+F8h]
  void **v60; // [rsp+200h] [rbp+100h]
  __int64 v61; // [rsp+208h] [rbp+108h]
  int *v62; // [rsp+210h] [rbp+110h]
  __int64 v63; // [rsp+218h] [rbp+118h]

  memset(v54, 0, sizeof(v54));
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    a2 = -7907;
  v17 = 0;
  if ( (unsigned int)dword_1C0246A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x4000LL, v15, v16) )
  {
    v51 = a1;
    v53 = a5;
    v63 = 4LL;
    v61 = 8LL;
    v59 = 4LL;
    v52 = (a3 & 0x8000) == 0;
    v62 = &v51;
    v60 = &v53;
    v58 = &v52;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0246A70, (unsigned __int8 *)dword_1C0219E12, 0LL, 0LL, 5u, &v57);
  }
  if ( a5 )
  {
    LOBYTE(v14) = 19;
    v48 = (_QWORD *)HMValidateHandleNoSecure(a5, v14);
    if ( v48 )
      *(_QWORD *)&v54[0] = *v48;
  }
  if ( a10 )
  {
    v18 = &v55;
    v55 = *(_OWORD *)a10;
  }
  else
  {
    v18 = &v56;
    v56 = 0LL;
  }
  v19 = *v18;
  v20 = WORD6(v54[20]);
  v54[21] = v19;
  if ( a1 )
    v20 = a9;
  WORD6(v54[20]) = v20;
  DWORD2(v54[20]) = a7;
  if ( a6 )
    *((_QWORD *)&v54[19] + 1) = a6;
  else
    *((_QWORD *)&v54[19] + 1) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(LARGE_INTEGER *)&v54[20] = KeQueryPerformanceCounter(0LL);
  WORD4(v54[0]) = a4;
  v21 = (a3 & 0x8000) != 0;
  if ( (a8 & 0x100) != 0 )
  {
    v21 |= 0x100u;
  }
  else if ( (a8 & 0x200) != 0 )
  {
    v21 |= 0x200u;
  }
  if ( (a8 & 0x80u) != 0 )
    v21 |= 0x80u;
  v22 = 2LL;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      v23 = (unsigned __int8)a3;
      if ( (unsigned int)(unsigned __int8)a3 - 16 <= 2 )
        v23 = 2 * (unsigned __int8)a3 + 128;
      v24 = 0;
      if ( *(_BYTE *)(gpKbdTbl + 56) )
      {
        while ( *(unsigned __int8 *)(*(_QWORD *)(gpKbdTbl + 48) + 2LL * v24) != v23 )
        {
          if ( ++v24 >= *(unsigned __int8 *)(gpKbdTbl + 56) )
            goto LABEL_22;
        }
        v26 = (unsigned __int8)v24;
      }
      else
      {
LABEL_22:
        v25 = *(unsigned __int8 **)(gpKbdTbl + 64);
        if ( v25 )
        {
          while ( *((_WORD *)v25 + 1) )
          {
            if ( v25[2] == v23 )
            {
              v26 = *v25 | 0xE000;
              goto LABEL_27;
            }
            v25 += 4;
          }
        }
        v45 = *(unsigned __int8 **)(gpKbdTbl + 72);
        if ( v45 )
        {
          while ( *((_WORD *)v45 + 1) )
          {
            if ( v45[2] == v23 )
            {
              v26 = *v45 | 0xE100;
              goto LABEL_27;
            }
            v45 += 4;
            if ( !v45 )
              break;
          }
        }
        v46 = aVkNumpad[0];
        v47 = aVkNumpad;
        if ( aVkNumpad[0] )
        {
          while ( v46 != v23 )
          {
            v46 = *++v47;
            if ( !*v47 )
              goto LABEL_48;
          }
          v26 = (_WORD)v47 - (unsigned __int16)aVkNumpad + 71;
        }
        else
        {
LABEL_48:
          v26 = 0;
        }
      }
LABEL_27:
      a2 = v26;
      if ( ausNumPadCvt[0] )
      {
        v27 = 0LL;
        v28 = ausNumPadCvt;
        while ( *(_BYTE *)v28 != (_BYTE)a3 )
        {
          v28 = &ausNumPadCvt[++v27];
          if ( !*v28 )
            goto LABEL_31;
        }
        v21 |= 2u;
      }
    }
LABEL_31:
    v21 |= 0x40u;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v21 |= 0x20u;
  }
  WORD6(v54[0]) = (unsigned __int8)a3;
  WORD5(v54[0]) = a2;
  HIWORD(v54[16]) = (a3 >> 7) & 2 | v21;
  v29 = (char *)v54 + 14;
  do
  {
    v30 = *((unsigned __int8 *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v17 >> 2));
    if ( _bittest(&v30, (unsigned __int8)(2 * (v17 & 3))) )
      *v29 |= 0x80u;
    if ( _bittest(&v30, (unsigned __int8)(2 * (v17 & 3) + 1)) )
      *v29 |= 1u;
    ++v17;
    ++v29;
  }
  while ( v17 < 256 );
  v31 = WORD2(v54[17]);
  if ( (_BYTE)a3 == 0xE7 )
    v31 = a2;
  WORD2(v54[17]) = v31;
  v32 = v54;
  do
  {
    v33 = v32[1];
    *(_OWORD *)a11 = *v32;
    v34 = v32[2];
    *((_OWORD *)a11 + 1) = v33;
    v35 = v32[3];
    *((_OWORD *)a11 + 2) = v34;
    v36 = v32[4];
    *((_OWORD *)a11 + 3) = v35;
    v37 = v32[5];
    *((_OWORD *)a11 + 4) = v36;
    v38 = v32[6];
    *((_OWORD *)a11 + 5) = v37;
    v39 = v32[7];
    v32 += 8;
    *((_OWORD *)a11 + 6) = v38;
    a11 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a11 + 128);
    *((_OWORD *)a11 - 1) = v39;
    --v22;
  }
  while ( v22 );
  v40 = v32[1];
  *(_OWORD *)a11 = *v32;
  v41 = v32[2];
  *((_OWORD *)a11 + 1) = v40;
  v42 = v32[3];
  *((_OWORD *)a11 + 2) = v41;
  v43 = v32[4];
  *((_OWORD *)a11 + 3) = v42;
  v44 = v32[5];
  *((_OWORD *)a11 + 4) = v43;
  *((_OWORD *)a11 + 5) = v44;
}
