/*
 * XREFs of AdtpWriteToEtwEx @ 0x1405C2394
 * Callers:
 *     SeAuditPlugAndPlay @ 0x14091DFD8 (SeAuditPlugAndPlay.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1403C09F4 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x1403C0A44 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1403C6CAC (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1407B8F48 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtwEx(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int16 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // cx
  char *v11; // rax
  unsigned __int16 v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v16; // [rsp+50h] [rbp-B0h] BYREF
  char v17; // [rsp+52h] [rbp-AEh]
  __int16 v18; // [rsp+53h] [rbp-ADh]
  char v19; // [rsp+55h] [rbp-ABh]
  __int16 v20; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v21; // [rsp+58h] [rbp-A8h]
  _BYTE v22[320]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v23; // [rsp+1A0h] [rbp+A0h] BYREF
  char v24; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v25[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v26[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v13[0] = 0;
  memset(v26, 0, sizeof(v26));
  memset(v22, 0, sizeof(v22));
  *a2 = 0;
  memset(v25, 0, sizeof(v25));
  AdtpNormalizeAuditInfoHelper(0LL, a1);
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v5 = -1073741811;
LABEL_17:
    v10 = v13[0];
    goto LABEL_18;
  }
  v6 = *(_WORD *)(a1 + 22);
  v5 = AdtpPackageParameters(0LL, a1, 2, (__int64)v26, (__int64)v22, (__int64)&v23, v13, (__int64)v25);
  if ( v5 < 0 )
    goto LABEL_17;
  if ( *(_WORD *)(a1 + 20)
    && (v7 = *(unsigned __int16 *)(a1 + 20), v14 = 0, v15 = 0, (int)AdtpGetCategoryAndSubCategoryId(v7, &v14, &v15) >= 0) )
  {
    v8 = (unsigned __int16)(v14 + 48) << 8;
    LOWORD(v8) = v15 + (((_WORD)v14 + 48) << 8);
  }
  else
  {
    v8 = 65280LL;
  }
  v16 = *(_WORD *)(a1 + 4);
  v17 = *(_BYTE *)(a1 + 8);
  v9 = 0x8020000000000000uLL;
  if ( v6 != 8 )
    v9 = 0x8010000000000000uLL;
  v18 = 10;
  v10 = v13[0];
  v20 = v8;
  v19 = 0;
  v21 = v9;
  if ( !v13[0] )
    goto LABEL_15;
  v11 = &v24;
  v8 = v13[0];
  do
  {
    v4 += *(_DWORD *)v11;
    v11 += 16;
    --v8;
  }
  while ( v8 );
  if ( v4 <= 0xDC00 )
  {
LABEL_15:
    v5 = EtwWriteKMSecurityEvent(&v16, v8, v13[0], (unsigned __int64)&v23 & -(__int64)(v13[0] != 0));
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_17;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_18:
  AdtpCleanupParameterAllocations(v25, &v23, v10);
  return (unsigned int)v5;
}
