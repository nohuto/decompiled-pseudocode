/*
 * XREFs of AdtpWriteToEtw @ 0x1407B3A68
 * Callers:
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1403BFD74 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x1403BFDC4 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403BFE64 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1403C611C (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     Feature_Servicing_AddInitProcessProperty__private_IsEnabled @ 0x1403F7748 (Feature_Servicing_AddInitProcessProperty__private_IsEnabled.c)
 *     memset @ 0x140411300 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1407B3DC4 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int16 v6; // r12
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int16 v10; // di
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // cx
  char *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int16 v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27; // [rsp+52h] [rbp-AEh]
  __int16 v28; // [rsp+53h] [rbp-ADh]
  char v29; // [rsp+55h] [rbp-ABh]
  __int16 v30; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  _BYTE v32[320]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v33; // [rsp+1A0h] [rbp+A0h] BYREF
  char v34; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v35[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v36[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v23[0] = 0;
  memset(v36, 0, sizeof(v36));
  memset(v32, 0, sizeof(v32));
  *a2 = 0;
  memset(v35, 0, sizeof(v35));
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = -1073741811;
LABEL_48:
    v18 = v23[0];
    goto LABEL_49;
  }
  v6 = *(_WORD *)(a1 + 18);
  v7 = 2;
  v5 = AdtpPackageParameters(a1, 0LL, 2, (__int64)v36, (__int64)v32, (__int64)&v33, v23, (__int64)v35);
  if ( v5 < 0 )
    goto LABEL_48;
  if ( *(_WORD *)(a1 + 16)
    && (v9 = *(unsigned __int16 *)(a1 + 16), v24 = 0, v25 = 0, (int)AdtpGetCategoryAndSubCategoryId(v9, &v24, &v25) >= 0) )
  {
    v10 = v25 + (((_WORD)v24 + 48) << 8);
  }
  else
  {
    v10 = -256;
  }
  v11 = *(_DWORD *)(a1 + 4);
  if ( v11 <= 0x1345 )
  {
    if ( v11 < 0x1340 )
    {
      if ( v11 > 0x1237 )
      {
        if ( v11 == 4688 )
          goto LABEL_24;
        if ( v11 <= 0x1258 )
          goto LABEL_23;
        if ( v11 > 0x125E )
        {
          if ( v11 == 4719 )
          {
            v7 = (unsigned int)Feature_Servicing_AddInitProcessProperty__private_IsEnabled() != 0;
            goto LABEL_24;
          }
          v16 = v11 == 4816;
          goto LABEL_22;
        }
      }
      else if ( v11 != 4663 )
      {
        v12 = v11 - 4616;
        if ( v12 )
        {
          v13 = v12 - 8;
          if ( !v13 )
            goto LABEL_24;
          v14 = v13 - 30;
          if ( v14 )
          {
            v15 = v14 - 2;
            if ( v15 )
            {
              v16 = v15 == 5;
LABEL_22:
              if ( !v16 )
              {
LABEL_23:
                v7 = 0;
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_45:
    v7 = 1;
    goto LABEL_24;
  }
  if ( v11 <= 0x1501 )
  {
    if ( v11 < 0x1500 && v11 != 4937 && v11 - 5058 > 1 )
    {
      v20 = v11 - 5125;
      if ( (unsigned int)v20 > 0x20 )
        goto LABEL_23;
      v21 = 0x180008001LL;
      if ( !_bittest64(&v21, v20) )
        goto LABEL_23;
    }
    goto LABEL_45;
  }
  if ( v11 < 0x154B )
    goto LABEL_23;
  if ( v11 <= 0x154C || v11 == 5632 )
    goto LABEL_45;
  if ( v11 <= 0x187F )
    goto LABEL_23;
  if ( v11 > 0x1881 )
  {
    if ( v11 > 0x1883 )
      goto LABEL_23;
    goto LABEL_45;
  }
LABEL_24:
  v26 = *(_WORD *)(a1 + 4);
  v17 = 0x8020000000000000uLL;
  v27 = v7;
  if ( v6 != 8 )
    v17 = 0x8010000000000000uLL;
  v28 = 10;
  v18 = v23[0];
  v30 = v10;
  v29 = 0;
  v31 = v17;
  if ( !v23[0] )
    goto LABEL_46;
  v19 = &v34;
  v8 = v23[0];
  do
  {
    v4 += *(_DWORD *)v19;
    v19 += 16;
    --v8;
  }
  while ( v8 );
  if ( v4 <= 0xDC00 )
  {
LABEL_46:
    v5 = EtwWriteKMSecurityEvent(&v26, v8, v23[0], (unsigned __int64)&v33 & -(__int64)(v23[0] != 0));
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_48;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_49:
  AdtpCleanupParameterAllocations(v35, &v33, v18);
  return (unsigned int)v5;
}
