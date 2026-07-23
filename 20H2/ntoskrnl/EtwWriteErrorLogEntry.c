/*
 * XREFs of EtwWriteErrorLogEntry @ 0x14074E478
 * Callers:
 *     IopErrorLogThread @ 0x14074E910 (IopErrorLogThread.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall EtwWriteErrorLogEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8)
{
  __int16 v8; // r15
  int v9; // eax
  __int64 v11; // rsi
  unsigned __int16 v12; // r11
  unsigned __int16 v13; // r10
  char v14; // al
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // r8d
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // edi
  unsigned int v24; // r14d
  unsigned __int16 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // edi
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rsi
  _WORD *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // edi
  __int64 v34; // rax
  __int64 result; // rax
  unsigned __int16 v36; // [rsp+98h] [rbp-80h] BYREF
  __int16 v37; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v38; // [rsp+A0h] [rbp-78h] BYREF
  _OWORD v39[27]; // [rsp+A8h] [rbp-70h] BYREF
  int v40; // [rsp+258h] [rbp+140h] BYREF
  char v41; // [rsp+25Ch] [rbp+144h]
  char v42; // [rsp+25Dh] [rbp+145h]
  __int16 v43; // [rsp+25Eh] [rbp+146h]
  __int64 v44; // [rsp+260h] [rbp+148h]
  __int64 v45; // [rsp+268h] [rbp+150h] BYREF
  _QWORD v46[6]; // [rsp+270h] [rbp+158h]
  int v47; // [rsp+2A0h] [rbp+188h]
  int v48; // [rsp+2A4h] [rbp+18Ch]
  unsigned __int16 *v49; // [rsp+2A8h] [rbp+190h]
  __int64 v50; // [rsp+2B0h] [rbp+198h]
  __int64 v51; // [rsp+2B8h] [rbp+1A0h]
  int v52; // [rsp+2C0h] [rbp+1A8h]
  int v53; // [rsp+2C4h] [rbp+1ACh]

  v8 = IopErrorLogSession;
  v9 = *(_DWORD *)(a2 + 12) >> 30;
  v11 = a3;
  v12 = 0;
  v13 = 0;
  if ( v9 == 1 )
    v14 = 4;
  else
    v14 = (v9 == 2) + 2;
  v41 = v14;
  v15 = *(_WORD *)(a2 + 8);
  v46[1] = a2 + 12;
  v16 = -1LL;
  v43 = v15;
  v17 = -1LL;
  v46[2] = 4LL;
  v40 = 0;
  v42 = 0;
  v44 = 0LL;
  v45 = a4;
  v46[0] = 8LL;
  do
    ++v17;
  while ( *(_WORD *)(a5 + 2 * v17) );
  v46[5] = a5;
  v18 = (unsigned __int16)(v17 + 1);
  v37 = v18;
  v47 = 2 * v18;
  v46[4] = 2LL;
  v50 = 2LL;
  v19 = 5;
  v49 = &a7;
  v46[3] = &v37;
  v48 = 0;
  if ( a7 )
  {
    v19 = 6;
    v51 = a8;
    v52 = a7;
    v53 = 0;
  }
  v20 = *(unsigned __int16 *)(a2 + 4);
  v21 = *(unsigned __int16 *)(a2 + 2) + 40;
  if ( v21 > (unsigned int)v11 )
    v21 = v11;
  v38 = v21;
  if ( (_WORD)v20 && *(unsigned __int16 *)(a2 + 6) < v21 )
    *(_WORD *)(a2 + 6) = v21;
  v22 = 2LL * v19;
  v36 = 0;
  v23 = v19 + 1;
  v24 = v20;
  *(_WORD *)(a2 + 4) = v20 + 1;
  v25 = 0;
  v46[v22 - 1] = &v36;
  v46[v22] = 2LL;
  v26 = 2LL * v23;
  v46[2 * v23 - 1] = a6;
  do
    ++v16;
  while ( *(_WORD *)(a6 + 2 * v16) );
  HIDWORD(v46[2 * v23]) = 0;
  v27 = v23 + 1;
  LODWORD(v46[v26]) = 2 * (unsigned __int16)(v16 + 1);
  if ( v24 )
  {
    v28 = (*(unsigned __int16 *)(a2 + 6) + a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v29 = a2 + v11;
    do
    {
      v30 = (_WORD *)(v28 + 2LL * v13);
      if ( (unsigned __int64)v30 >= v29 )
        break;
      if ( !*v30 )
      {
        ++v25;
        v12 = v13 + 1;
        v36 = v25;
      }
      ++v13;
    }
    while ( v25 < v24 );
    v31 = 2LL * v27++;
    v46[v31 - 1] = v28;
    LODWORD(v46[v31]) = 2 * v12;
    HIDWORD(v46[v31]) = 0;
  }
  v32 = 2LL * v27;
  v36 = v25 + 1;
  v33 = v27 + 1;
  v46[v32 - 1] = &v38;
  v46[v32] = 4LL;
  v34 = 2LL * v33;
  LODWORD(v46[v34]) = v21;
  v46[v34 - 1] = a2;
  HIDWORD(v46[v34]) = 0;
  memset(v39, 0, 0x1A8uLL);
  *((_QWORD *)&v39[24] + 1) = EtwpHostSiloState;
  *(GUID *)((char *)&v39[2] + 8) = LegacyEventLogGuid;
  WORD3(v39[8]) = v8;
  LODWORD(v39[8]) = 1;
  BYTE4(v39[8]) = -1;
  v39[9] = _mm_load_si128((const __m128i *)&_xmm);
  DWORD2(v39[8]) = 64;
  result = EtwpEventWriteFull(
             (__int64)v39,
             1u,
             0,
             0,
             (unsigned __int16 *)&v40,
             0,
             4,
             0LL,
             0LL,
             v33 + 1,
             (__int64)&v45,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  if ( (int)result < 0 )
    --*(_WORD *)(a2 + 4);
  return result;
}
