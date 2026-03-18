/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C00029B0
 * Callers:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0002110 (NVMeHwStartIo.c)
 * Callees:
 *     ProcessCommandTrace @ 0x1C0002DA0 (ProcessCommandTrace.c)
 */

__int64 __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  bool v7; // zf
  __int64 v11; // rsi
  unsigned __int8 v12; // r13
  int v13; // eax
  __int64 v14; // rax
  unsigned __int16 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  _WORD *v18; // r11
  unsigned __int16 *v19; // r10
  _QWORD *v20; // r12
  unsigned __int16 *v21; // rax
  int v22; // r9d
  int v23; // edx
  unsigned __int16 v24; // dx
  unsigned __int16 v25; // cx
  __int64 v26; // r15
  _OWORD *v27; // rdx
  unsigned int v28; // eax
  int v29; // edx
  __int64 v30; // r9
  __int64 result; // rax
  unsigned __int16 v32; // cx
  __int16 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // r9
  signed __int32 v39[6]; // [rsp+8h] [rbp-59h] BYREF
  __int64 v40; // [rsp+28h] [rbp-39h]
  int *v41; // [rsp+30h] [rbp-31h]
  __int64 v42; // [rsp+38h] [rbp-29h]
  int v43; // [rsp+40h] [rbp-21h]
  _DWORD v44[2]; // [rsp+48h] [rbp-19h]
  __int64 v45; // [rsp+50h] [rbp-11h] BYREF
  __int64 v46; // [rsp+58h] [rbp-9h] BYREF
  __int64 v47; // [rsp+60h] [rbp-1h]
  __int128 v48; // [rsp+68h] [rbp+7h]
  __int64 v49; // [rsp+78h] [rbp+17h]
  __int64 v50; // [rsp+80h] [rbp+1Fh]
  __int64 v51; // [rsp+88h] [rbp+27h]
  __int64 v52; // [rsp+90h] [rbp+2Fh]
  char v53; // [rsp+C8h] [rbp+67h] BYREF
  unsigned int v54; // [rsp+D0h] [rbp+6Fh] BYREF
  int v55; // [rsp+D8h] [rbp+77h] BYREF
  unsigned __int16 v56; // [rsp+E0h] [rbp+7Fh]

  v56 = a4;
  v7 = *(_BYTE *)(a2 + 2) == 40;
  v51 = v5;
  v50 = v6;
  if ( v7 )
    v11 = *(_QWORD *)(a2 + 104);
  else
    v11 = *(_QWORD *)(a2 + 56);
  if ( (v11 & 0xFFF) != 0 )
    v11 = v11 - (v11 & 0xFFF) + 4096;
  v46 = 1LL;
  v47 = 0LL;
  v12 = 1;
  v48 = 0LL;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 808));
  v13 = *(_DWORD *)(a1 + 24);
  if ( (v13 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    v12 = 0;
    goto LABEL_35;
  }
  if ( (v13 & 0x100) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    v12 = 0;
    goto LABEL_35;
  }
  StorPortExtendedFunction(
    93LL,
    a1,
    1LL,
    a3 + 56,
    (unsigned int)&v46,
    v41,
    v42,
    v43,
    v44[0],
    v45,
    v46,
    v47,
    v48,
    *((_QWORD *)&v48 + 1),
    v49,
    v50,
    v51,
    v4);
  v14 = *(unsigned __int16 *)(a3 + 40);
  if ( (_WORD)v14 )
  {
    v15 = *(_WORD *)(a1 + 278);
    v16 = 136 * v14;
    v17 = *(_QWORD *)(a1 + 768);
    v18 = (_WORD *)(v16 + v17 - 92);
    v19 = (unsigned __int16 *)(v16 + v17 - 88);
    v20 = (_QWORD *)(v16 + v17 - 104);
    v21 = (unsigned __int16 *)(v16 + v17 - 90);
  }
  else
  {
    v15 = *(_WORD *)(a1 + 276);
    v18 = (_WORD *)(a1 + 332);
    v19 = (unsigned __int16 *)(a1 + 336);
    v20 = (_QWORD *)(a1 + 320);
    v21 = (unsigned __int16 *)(a1 + 334);
  }
  v22 = (unsigned __int16)*v18;
  v23 = *v21;
  if ( v23 == v22 + 1 || !(_WORD)v23 && v22 == v15 - 1 )
    goto LABEL_64;
  *v18 = v22 + 1;
  if ( (_WORD)v22 + 1 == v15 )
    *v18 = 0;
  v24 = *v19;
  if ( *v19 < v15 )
  {
    while ( 1 )
    {
      v25 = v24 + 1;
      if ( !*(_QWORD *)(*v20 + 16LL * v24) )
        break;
      ++v24;
      if ( v25 >= v15 )
        goto LABEL_47;
    }
    *v19 = v25;
    if ( v25 != v15 )
      goto LABEL_18;
    goto LABEL_40;
  }
LABEL_47:
  v24 = 0;
  if ( !*v19 )
  {
LABEL_50:
    if ( *v18 )
      v33 = *v18 - 1;
    else
      v33 = v15 - 1;
    *v18 = v33;
LABEL_64:
    StorPortNotification(4100LL, a1, &v46);
    v12 = 0;
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_35;
  }
  while ( 1 )
  {
    v32 = v24 + 1;
    if ( !*(_QWORD *)(*v20 + 16LL * v24) )
      break;
    ++v24;
    if ( v32 >= *v19 )
      goto LABEL_50;
  }
  *v19 = v32;
  if ( v32 == v15 )
LABEL_40:
    *v19 = 0;
LABEL_18:
  *(_WORD *)(v11 + 4248) = v22;
  v26 = 0LL;
  *(_WORD *)(v11 + 4246) = v24;
  v7 = *(_WORD *)(a3 + 40) == 0;
  v45 = 0LL;
  if ( !v7 )
    v26 = 344LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 776) - 344LL;
  *(_WORD *)(v11 + 4098) = v24;
  if ( *(_BYTE *)(a1 + 17) )
  {
    ProcessCommandTrace(a1, a2);
    v24 = *(_WORD *)(v11 + 4246);
  }
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * v24) = a2;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v11 + 4246) + 8) = *(_WORD *)(v11 + 4248);
  v27 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v11 + 4248));
  *v27 = *(_OWORD *)(v11 + 4096);
  v27[1] = *(_OWORD *)(v11 + 4112);
  v27[2] = *(_OWORD *)(v11 + 4128);
  v27[3] = *(_OWORD *)(v11 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v11 + 4248) + 8) = *(_WORD *)(v11 + 4246);
  if ( (*(_BYTE *)(a1 + 17) || (*(_DWORD *)(a1 + 108) & 2) != 0) && *(_DWORD *)(a2 + 12) != 251658240 && a2 != a1 + 832 )
  {
    v28 = 0;
    while ( a2 != 112LL * v28 + a1 + 944 )
    {
      if ( ++v28 >= 6 )
      {
        StorPortExtendedFunction(
          47LL,
          a1,
          0LL,
          &v45,
          v40,
          v41,
          v42,
          v43,
          v44[0],
          v45,
          v46,
          v47,
          v48,
          *((_QWORD *)&v48 + 1),
          v49,
          v50,
          v51,
          v52);
        *(_QWORD *)(v11 + 4160) = v45;
        break;
      }
    }
  }
  _InterlockedIncrement16((volatile signed __int16 *)(a3 + 128));
  v29 = 0;
  if ( (unsigned __int16)(*(_WORD *)(v11 + 4248) + 1) != v56 )
    v29 = (unsigned __int16)(*(_WORD *)(v11 + 4248) + 1);
  **(_DWORD **)(a3 + 16) = v29;
  _InterlockedOr(v39, 0);
  if ( *(_QWORD *)(v11 + 4160) )
  {
    StorPortExtendedFunction(
      47LL,
      a1,
      0LL,
      &v45,
      v40,
      v41,
      v42,
      v43,
      v44[0],
      v45,
      v46,
      v47,
      v48,
      *((_QWORD *)&v48 + 1),
      v49,
      v50,
      v51,
      v52);
    *(_QWORD *)(v11 + 4168) = v45;
  }
  StorPortNotification(4100LL, a1, &v46);
  if ( v26 && *(_BYTE *)(v26 + 200) )
  {
    v54 = 0;
    StorPortExtendedFunction(
      92LL,
      a1,
      &v54,
      v30,
      v40,
      v41,
      v42,
      v43,
      v44[0],
      v45,
      v46,
      v47,
      v48,
      *((_QWORD *)&v48 + 1),
      v49,
      v50,
      v51,
      v52);
    v34 = *(_QWORD *)(v26 + 208);
    if ( v34 )
    {
      v38 = -10LL * *(unsigned int *)(v26 + 204);
      v53 = 0;
      StorPortExtendedFunction(
        89LL,
        a1,
        *(_QWORD *)(v34 + 8LL * v54),
        v38,
        0,
        0LL,
        &v53,
        v43,
        v44[0],
        v45,
        v46,
        v47,
        v48,
        *((_QWORD *)&v48 + 1),
        v49,
        v50,
        v51,
        v52);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3812) & 0x10) != 0 )
      {
        v35 = *(_QWORD *)(a1 + 240);
        v36 = *(_QWORD *)(v35 + 48LL * v54 + 8);
        if ( v36 )
        {
          v44[0] = 0;
          LOWORD(v44[0]) = *(_WORD *)(v35 + 48LL * v54 + 16);
          _BitScanForward64(&v37, v36);
          *(_DWORD *)((char *)v44 + 2) = v37;
          StorPortNotification(4107LL, a1, v26 + 216);
        }
      }
      v41 = &v55;
      v40 = 0LL;
      v55 = 0;
      StorPortNotification(4098LL, a1, v26 + 216);
    }
  }
LABEL_35:
  result = v12;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 808));
  return result;
}
