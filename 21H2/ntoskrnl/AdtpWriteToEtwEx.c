/*
 * XREFs of AdtpWriteToEtwEx @ 0x1405C2164
 * Callers:
 *     SeAuditPlugAndPlay @ 0x14091DE78 (SeAuditPlugAndPlay.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1403C05C4 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x1403C0614 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403C06B4 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1403C6B0C (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1407B8A28 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtwEx(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // r9
  int v6; // edi
  __int16 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // cx
  char *v12; // rax
  unsigned __int16 v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+52h] [rbp-AEh]
  __int16 v19; // [rsp+53h] [rbp-ADh]
  char v20; // [rsp+55h] [rbp-ABh]
  __int16 v21; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h]
  _BYTE v23[320]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v25; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v26[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v27[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v14[0] = 0;
  memset(v27, 0, sizeof(v27));
  memset(v23, 0, sizeof(v23));
  *a2 = 0;
  memset(v26, 0, sizeof(v26));
  AdtpNormalizeAuditInfoHelper(0LL, a1);
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v6 = -1073741811;
LABEL_17:
    v11 = v14[0];
    goto LABEL_18;
  }
  v7 = *(_WORD *)(a1 + 22);
  v6 = AdtpPackageParameters(0LL, a1, 2, (__int64)v27, (__int64)v23, (__int64)v24, v14, (__int64)v26);
  if ( v6 < 0 )
    goto LABEL_17;
  if ( *(_WORD *)(a1 + 20)
    && (v8 = *(unsigned __int16 *)(a1 + 20), v15 = 0, v16 = 0, (int)AdtpGetCategoryAndSubCategoryId(v8, &v15, &v16) >= 0) )
  {
    v9 = (unsigned __int16)(v15 + 48) << 8;
    LOWORD(v9) = v16 + (((_WORD)v15 + 48) << 8);
  }
  else
  {
    v9 = 65280LL;
  }
  v17 = *(_WORD *)(a1 + 4);
  v18 = *(_BYTE *)(a1 + 8);
  v10 = 0x8020000000000000uLL;
  if ( v7 != 8 )
    v10 = 0x8010000000000000uLL;
  v19 = 10;
  v11 = v14[0];
  v21 = v9;
  v20 = 0;
  v22 = v10;
  if ( !v14[0] )
    goto LABEL_15;
  v12 = &v25;
  v9 = v14[0];
  do
  {
    v4 += *(_DWORD *)v12;
    v12 += 16;
    --v9;
  }
  while ( v9 );
  if ( v4 <= 0xDC00 )
  {
LABEL_15:
    v6 = EtwWriteKMSecurityEvent(&v17, v9, v14[0], (unsigned __int64)v24 & -(__int64)(v14[0] != 0));
    if ( v6 == -1073741058 )
      *a2 = 1;
    goto LABEL_17;
  }
  *a2 = 1;
  v6 = -2147483643;
LABEL_18:
  AdtpCleanupParameterAllocations(v26, (__int64)v24, v11, v5);
  return (unsigned int)v6;
}
