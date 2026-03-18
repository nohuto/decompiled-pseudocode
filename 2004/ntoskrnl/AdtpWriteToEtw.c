/*
 * XREFs of AdtpWriteToEtw @ 0x1407A4924
 * Callers:
 *     SepRmCallLsa @ 0x14034F640 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1403BD854 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x1403BD8A4 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403BD944 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1403C39AC (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1407A4C74 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int16 v6; // r12
  char v7; // si
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // cx
  char *v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int16 v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+52h] [rbp-AEh]
  __int16 v26; // [rsp+53h] [rbp-ADh]
  char v27; // [rsp+55h] [rbp-ABh]
  __int16 v28; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h]
  _BYTE v30[320]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v31; // [rsp+1A0h] [rbp+A0h] BYREF
  char v32; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v33[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v34[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v21[0] = 0;
  memset(v34, 0, sizeof(v34));
  memset(v30, 0, sizeof(v30));
  *a2 = 0;
  memset(v33, 0, sizeof(v33));
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = -1073741811;
LABEL_45:
    v16 = v21[0];
    goto LABEL_46;
  }
  v6 = *(_WORD *)(a1 + 18);
  v7 = 2;
  v5 = AdtpPackageParameters(a1, 0LL, 2, (__int64)v34, (__int64)v30, (__int64)&v31, v21, (__int64)v33);
  if ( v5 < 0 )
    goto LABEL_45;
  if ( *(_WORD *)(a1 + 16)
    && (v8 = *(unsigned __int16 *)(a1 + 16), v22 = 0, v23 = 0, (int)AdtpGetCategoryAndSubCategoryId(v8, &v22, &v23) >= 0) )
  {
    v9 = (unsigned __int16)(v22 + 48) << 8;
    LOWORD(v9) = v23 + (((_WORD)v22 + 48) << 8);
  }
  else
  {
    v9 = 65280LL;
  }
  v10 = *(_DWORD *)(a1 + 4);
  if ( v10 > 0x1349 )
  {
    if ( v10 > 0x1501 )
    {
      if ( v10 < 0x154B )
        goto LABEL_17;
      if ( v10 > 0x154C && v10 != 5632 )
      {
        if ( v10 <= 0x187F )
          goto LABEL_17;
        if ( v10 <= 0x1881 )
          goto LABEL_18;
        if ( v10 > 0x1883 )
          goto LABEL_17;
      }
    }
    else if ( v10 < 0x1500 && v10 - 5058 > 1 )
    {
      v18 = v10 - 5125;
      if ( (unsigned int)v18 > 0x20 )
        goto LABEL_17;
      v19 = 0x180008001LL;
      if ( !_bittest64(&v19, v18) )
        goto LABEL_17;
    }
  }
  else if ( v10 != 4937 )
  {
    if ( v10 <= 0x1237 )
    {
      if ( v10 != 4663 )
      {
        v11 = v10 - 4616;
        if ( v11 )
        {
          v12 = v11 - 8;
          if ( !v12 )
            goto LABEL_18;
          v13 = v12 - 30;
          if ( v13 )
          {
            v14 = v13 - 2;
            if ( v14 )
            {
              if ( v14 != 5 )
                goto LABEL_17;
            }
          }
        }
      }
      goto LABEL_42;
    }
    if ( v10 == 4688 )
      goto LABEL_18;
    if ( v10 - 4697 <= 5 || v10 == 4816 || v10 - 4928 <= 5 )
      goto LABEL_42;
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
LABEL_42:
  v7 = 1;
LABEL_18:
  v24 = *(_WORD *)(a1 + 4);
  v15 = 0x8020000000000000uLL;
  v25 = v7;
  if ( v6 != 8 )
    v15 = 0x8010000000000000uLL;
  v26 = 10;
  v16 = v21[0];
  v28 = v9;
  v27 = 0;
  v29 = v15;
  if ( !v21[0] )
    goto LABEL_43;
  v17 = &v32;
  v9 = v21[0];
  do
  {
    v4 += *(_DWORD *)v17;
    v17 += 16;
    --v9;
  }
  while ( v9 );
  if ( v4 <= 0xDC00 )
  {
LABEL_43:
    v5 = EtwWriteKMSecurityEvent((__int64)&v24, v9, v21[0], (unsigned __int64)&v31 & -(__int64)(v21[0] != 0));
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_45;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_46:
  AdtpCleanupParameterAllocations(v33, &v31, v16);
  return (unsigned int)v5;
}
