/*
 * XREFs of AdtpWriteToEtw @ 0x1407B8BF8
 * Callers:
 *     SepRmCallLsa @ 0x14023FE60 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1403C09F4 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x1403C0A44 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1403C6CAC (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage @ 0x1403F9BD0 (Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140414300 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1407B8F48 (AdtpGetCategoryAndSubCategoryId.c)
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
  unsigned __int64 v16; // rax
  unsigned __int16 v17; // cx
  char *v18; // rax
  bool v19; // cc
  unsigned __int64 v20; // rax
  unsigned __int16 v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+52h] [rbp-AEh]
  __int16 v27; // [rsp+53h] [rbp-ADh]
  char v28; // [rsp+55h] [rbp-ABh]
  __int16 v29; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h]
  _BYTE v31[320]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v32; // [rsp+1A0h] [rbp+A0h] BYREF
  char v33; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v34[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v35[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v22[0] = 0;
  memset(v35, 0, sizeof(v35));
  memset(v31, 0, sizeof(v31));
  *a2 = 0;
  memset(v34, 0, sizeof(v34));
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = -1073741811;
LABEL_46:
    v17 = v22[0];
    goto LABEL_47;
  }
  v6 = *(_WORD *)(a1 + 18);
  v7 = 2;
  v5 = AdtpPackageParameters(a1, 0LL, 2, (__int64)v35, (__int64)v31, (__int64)&v32, v22, (__int64)v34);
  if ( v5 < 0 )
    goto LABEL_46;
  if ( *(_WORD *)(a1 + 16)
    && (v9 = *(unsigned __int16 *)(a1 + 16), v23 = 0, v24 = 0, (int)AdtpGetCategoryAndSubCategoryId(v9, &v23, &v24) >= 0) )
  {
    v10 = v24 + (((_WORD)v23 + 48) << 8);
  }
  else
  {
    v10 = -256;
  }
  v11 = *(_DWORD *)(a1 + 4);
  if ( v11 <= 0x1349 )
  {
    if ( v11 == 4937 )
      goto LABEL_17;
    if ( v11 <= 0x1237 )
    {
      if ( v11 == 4663 )
        goto LABEL_17;
      v12 = v11 - 4616;
      if ( !v12 )
        goto LABEL_17;
      v13 = v12 - 8;
      if ( !v13 )
        goto LABEL_18;
      v14 = v13 - 30;
      if ( !v14 )
        goto LABEL_17;
      v15 = v14 - 2;
      if ( !v15 || v15 == 5 )
        goto LABEL_17;
      goto LABEL_42;
    }
    if ( v11 == 4688 )
      goto LABEL_18;
    if ( v11 - 4697 <= 5 || v11 == 4719 || v11 == 4816 )
      goto LABEL_17;
    v19 = v11 - 4928 <= 5;
LABEL_41:
    if ( !v19 )
      goto LABEL_42;
LABEL_17:
    v7 = 1;
    goto LABEL_18;
  }
  if ( v11 <= 0x154C )
  {
    if ( v11 >= 0x154B )
      goto LABEL_17;
    if ( v11 - 5058 <= 1 )
      goto LABEL_17;
    v20 = v11 - 5125;
    if ( (unsigned int)v20 <= 0x20 )
    {
      v8 = 0x180008001LL;
      if ( _bittest64(&v8, v20) )
        goto LABEL_17;
    }
    v19 = v11 - 5376 <= 1;
    goto LABEL_41;
  }
  if ( v11 == 5632 )
    goto LABEL_17;
  if ( v11 != 5712 )
  {
    if ( v11 <= 0x187F )
    {
LABEL_42:
      v7 = 0;
      goto LABEL_18;
    }
    if ( v11 <= 0x1881 )
      goto LABEL_18;
    v19 = v11 <= 0x1883;
    goto LABEL_41;
  }
  v7 = (unsigned int)Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage() != 0;
LABEL_18:
  v25 = *(_WORD *)(a1 + 4);
  v16 = 0x8020000000000000uLL;
  v26 = v7;
  if ( v6 != 8 )
    v16 = 0x8010000000000000uLL;
  v27 = 10;
  v17 = v22[0];
  v29 = v10;
  v28 = 0;
  v30 = v16;
  if ( !v22[0] )
    goto LABEL_44;
  v18 = &v33;
  v8 = v22[0];
  do
  {
    v4 += *(_DWORD *)v18;
    v18 += 16;
    --v8;
  }
  while ( v8 );
  if ( v4 <= 0xDC00 )
  {
LABEL_44:
    v5 = EtwWriteKMSecurityEvent(&v25, v8, v22[0], (unsigned __int64)&v32 & -(__int64)(v22[0] != 0));
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_46;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_47:
  AdtpCleanupParameterAllocations(v34, &v32, v17);
  return (unsigned int)v5;
}
