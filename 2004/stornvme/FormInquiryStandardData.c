/*
 * XREFs of FormInquiryStandardData @ 0x1C0010CF8
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0005240 (memmove.c)
 *     NVMeCopyFirmwareRevision @ 0x1C0012C14 (NVMeCopyFirmwareRevision.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  bool v3; // zf
  __int64 v6; // rax
  unsigned int *v7; // r12
  void *v8; // r15
  char v9; // r13
  unsigned __int8 v10; // cl
  unsigned int v11; // r14d
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r10d
  unsigned int v20; // edx
  char v22; // [rsp+30h] [rbp-39h]
  unsigned __int8 v23; // [rsp+38h] [rbp-31h]
  __int128 Src; // [rsp+40h] [rbp-29h] BYREF
  __int128 v25; // [rsp+50h] [rbp-19h]
  __int128 v26; // [rsp+60h] [rbp-9h] BYREF
  __int64 v27; // [rsp+70h] [rbp+7h]
  int v28; // [rsp+78h] [rbp+Fh]

  v2 = *(_QWORD *)(a1 + 1608);
  v3 = *(_BYTE *)(a2 + 2) == 40;
  v27 = 0LL;
  v28 = 0;
  Src = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( v3 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = (unsigned int *)(a2 + 60);
    v8 = *(void **)(a2 + 64);
    v9 = *(_BYTE *)(v6 + a2 + 8);
    v10 = *(_BYTE *)(v6 + a2 + 10);
    v22 = *(_BYTE *)(v6 + a2 + 9);
  }
  else
  {
    v7 = (unsigned int *)(a2 + 16);
    v8 = *(void **)(a2 + 24);
    v9 = *(_BYTE *)(a2 + 5);
    v10 = *(_BYTE *)(a2 + 7);
    v22 = *(_BYTE *)(a2 + 6);
  }
  v11 = 0;
  BYTE1(Src) &= ~0x80u;
  BYTE3(Src) = BYTE3(Src) & 0xE0 | 0x12;
  v23 = v10;
  BYTE2(Src) = 6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v10 + 1720) + 66LL) )
    BYTE5(Src) |= 1u;
  v12 = *(_OWORD *)(v2 + 24);
  BYTE7(Src) |= 2u;
  BYTE4(Src) = 55;
  LODWORD(v26) = 538976288;
  v25 = v12;
  *((_QWORD *)&Src + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v2, &v26, 4LL);
  if ( (*(_BYTE *)(v2 + 256) & 1) != 0 )
    HIWORD(v28) = -16129;
  v16 = 60;
  if ( *v7 < 0x3C )
    v16 = *v7;
  if ( v16 && v8 )
  {
    memmove(v8, &Src, v16);
    *v7 = v16;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v15) = 36;
    LOBYTE(v14) = 5;
    LOBYTE(v13) = 48;
    NVMeSetSenseData(a2, v13, v14, v15);
    v11 = -1056964602;
  }
  v19 = *(unsigned __int16 *)(a1 + 278);
  LOBYTE(v18) = v23;
  LOBYTE(v17) = v22;
  v20 = v19 * (unsigned int)*(unsigned __int16 *)(a1 + 280) % *(_DWORD *)(a1 + 188);
  LOBYTE(v20) = v9;
  StorPortSetDeviceQueueDepth(
    a1,
    v20,
    v17,
    v18,
    v19 * (unsigned int)*(unsigned __int16 *)(a1 + 280) / *(_DWORD *)(a1 + 188));
  return v11;
}
