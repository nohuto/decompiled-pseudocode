/*
 * XREFs of NVMeLogTelemetry @ 0x1C000DD98
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1C000E0A8 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0018C60 (NVMeLogTelemetryWaitForCmdComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0005240 (memmove.c)
 *     memset @ 0x1C0005500 (memset.c)
 */

__int64 __fastcall NVMeLogTelemetry(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        _BYTE *a10,
        __int64 a11,
        _BYTE *a12,
        __int64 a13,
        _BYTE *a14,
        __int64 a15,
        _BYTE *a16,
        __int64 a17,
        _BYTE *a18,
        __int64 a19,
        _BYTE *a20,
        __int64 a21,
        _BYTE *a22,
        __int64 a23,
        _BYTE *a24,
        __int64 a25)
{
  unsigned int v26; // ecx
  _BYTE *v27; // rax
  unsigned int v28; // ebx
  size_t v29; // r8
  unsigned int v30; // ecx
  _BYTE *v31; // rax
  size_t v32; // r8
  unsigned int v33; // ecx
  _BYTE *v34; // rax
  size_t v35; // r8
  unsigned int v36; // ecx
  _BYTE *v37; // rax
  size_t v38; // r8
  unsigned int v39; // ecx
  _BYTE *v40; // rax
  size_t v41; // r8
  unsigned int v42; // ecx
  _BYTE *v43; // rax
  size_t v44; // r8
  unsigned int v45; // ecx
  _BYTE *v46; // rax
  size_t v47; // r8
  unsigned int v48; // ecx
  _BYTE *v49; // rax
  size_t v50; // r8
  unsigned int v51; // eax
  _BYTE *v52; // rcx
  __int64 v54; // [rsp+28h] [rbp-D8h]
  __int64 v55; // [rsp+30h] [rbp-D0h]
  _QWORD v58[48]; // [rsp+60h] [rbp-A0h] BYREF

  LODWORD(v55) = a3;
  memset(v58, 0, sizeof(v58));
  v26 = 0;
  HIDWORD(v58[0]) = a4;
  LODWORD(v58[0]) = 1;
  v27 = Src;
  v28 = 32;
  do
  {
    if ( !*v27 )
      break;
    ++v26;
    ++v27;
  }
  while ( v26 < 0x20 );
  v29 = 32LL;
  if ( v26 < 0x20 )
    v29 = v26;
  memmove(&v58[1], Src, v29);
  v58[5] = 1LL;
  if ( a10 )
  {
    v30 = 0;
    v31 = a10;
    do
    {
      if ( !*v31 )
        break;
      ++v30;
      ++v31;
    }
    while ( v30 < 0x20 );
    v32 = 32LL;
    if ( v30 < 0x20 )
      v32 = v30;
    memmove(&v58[8], a10, v32);
    v58[12] = a11;
  }
  if ( a12 )
  {
    v33 = 0;
    v34 = a12;
    do
    {
      if ( !*v34 )
        break;
      ++v33;
      ++v34;
    }
    while ( v33 < 0x20 );
    v35 = 32LL;
    if ( v33 < 0x20 )
      v35 = v33;
    memmove(&v58[13], a12, v35);
    v58[17] = a13;
  }
  if ( a14 )
  {
    v36 = 0;
    v37 = a14;
    do
    {
      if ( !*v37 )
        break;
      ++v36;
      ++v37;
    }
    while ( v36 < 0x20 );
    v38 = 32LL;
    if ( v36 < 0x20 )
      v38 = v36;
    memmove(&v58[18], a14, v38);
    v58[22] = a15;
  }
  if ( a16 )
  {
    v39 = 0;
    v40 = a16;
    do
    {
      if ( !*v40 )
        break;
      ++v39;
      ++v40;
    }
    while ( v39 < 0x20 );
    v41 = 32LL;
    if ( v39 < 0x20 )
      v41 = v39;
    memmove(&v58[23], a16, v41);
    v58[27] = a17;
  }
  if ( a18 )
  {
    v42 = 0;
    v43 = a18;
    do
    {
      if ( !*v43 )
        break;
      ++v42;
      ++v43;
    }
    while ( v42 < 0x20 );
    v44 = 32LL;
    if ( v42 < 0x20 )
      v44 = v42;
    memmove(&v58[28], a18, v44);
    v58[32] = a19;
  }
  if ( a20 )
  {
    v45 = 0;
    v46 = a20;
    do
    {
      if ( !*v46 )
        break;
      ++v45;
      ++v46;
    }
    while ( v45 < 0x20 );
    v47 = 32LL;
    if ( v45 < 0x20 )
      v47 = v45;
    memmove(&v58[33], a20, v47);
    v58[37] = a21;
  }
  if ( a22 )
  {
    v48 = 0;
    v49 = a22;
    do
    {
      if ( !*v49 )
        break;
      ++v48;
      ++v49;
    }
    while ( v48 < 0x20 );
    v50 = 32LL;
    if ( v48 < 0x20 )
      v50 = v48;
    memmove(&v58[38], a22, v50);
    v58[42] = a23;
  }
  if ( a24 )
  {
    v51 = 0;
    v52 = a24;
    do
    {
      if ( !*v52 )
        break;
      ++v51;
      ++v52;
    }
    while ( v51 < 0x20 );
    if ( v51 < 0x20 )
      v28 = v51;
    memmove(&v58[43], a24, v28);
    v58[47] = a25;
  }
  return StorPortExtendedFunction(
           96LL,
           a1,
           a2,
           v58,
           v55,
           v54,
           v55,
           (_DWORD)a20,
           (_DWORD)a22,
           a24,
           a2,
           a1,
           v58[0],
           v58[1],
           v58[2],
           v58[3],
           v58[4],
           v58[5]);
}
