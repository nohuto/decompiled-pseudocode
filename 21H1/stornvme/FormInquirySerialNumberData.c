/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0010AE8
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     SerialNumberFromNvmeId @ 0x1C0015C7C (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  char v5; // dl
  unsigned __int8 v7; // cl
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r15
  __int64 v12; // rax
  bool v13; // zf
  bool v14; // r11
  unsigned __int8 v15; // al
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 result; // rax
  unsigned int v21; // r10d
  _OWORD *v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx

  v3 = *(_QWORD *)(a1 + 1608);
  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(_BYTE *)(a2 + 7);
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 8LL * v7 + 1720);
  v10 = (_QWORD *)(v9 + 68);
  v11 = (_QWORD *)(v9 + 84);
  v12 = *(_QWORD *)(v9 + 68);
  if ( !v12 )
    v12 = v10[1];
  v13 = v12 == 0;
  v14 = *v11 != 0LL;
  if ( v12 )
  {
    v15 = 40;
    v16 = 40LL;
  }
  else if ( *v11 )
  {
    v15 = 20;
    v16 = 20LL;
  }
  else
  {
    v16 = 30LL;
    v15 = 30;
  }
  v17 = v15 + 4;
  if ( v5 == 40 )
  {
    v18 = *(_QWORD *)(a2 + 64);
    v19 = 60LL;
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 24);
    v19 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v19) < v17 )
  {
    LOBYTE(v16) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(v18) = 6;
    NVMeSetSenseData(a2, v18, a3, v16);
    return 3238002694LL;
  }
  v21 = 0;
  *(_WORD *)v18 = 0x8000;
  *(_BYTE *)(v18 + 3) = v15;
  v22 = (_OWORD *)(v18 + 4);
  if ( !v13 )
  {
    v23 = 16LL;
LABEL_20:
    v21 = SerialNumberFromNvmeId(v10, v23, v22, v16);
    goto LABEL_22;
  }
  if ( v14 )
  {
    v23 = 8LL;
    v10 = v11;
    goto LABEL_20;
  }
  *v22 = *(_OWORD *)(v3 + 4);
  *(_DWORD *)(v18 + 20) = *(_DWORD *)(v3 + 20);
  *(_BYTE *)(v18 + 24) = 95;
  v24 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v8 + 1720) + 18LL);
  *(_BYTE *)(v18 + 28) = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v8 + 1720) + 18LL) & 0xF];
  *(_BYTE *)(v18 + 27) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v24 >> 4];
  *(_BYTE *)(v18 + 26) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v24 >> 8) & 0xF];
  *(_BYTE *)(v18 + 25) = `HexFromUchar'::`2'::hexDigits[v24 >> 12];
  v25 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v8 + 1720) + 16LL);
  *(_BYTE *)(v18 + 32) = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v8 + 1720) + 16LL) & 0xF];
  *(_BYTE *)(v18 + 31) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v25 >> 4];
  *(_BYTE *)(v18 + 30) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v25 >> 8) & 0xF];
  *(_BYTE *)(v18 + 29) = `HexFromUchar'::`2'::hexDigits[v25 >> 12];
  *(_BYTE *)(v18 + 33) = 46;
LABEL_22:
  if ( v21 )
    return v21;
  *(_DWORD *)(a2 + v19) = v17;
  result = 0LL;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
