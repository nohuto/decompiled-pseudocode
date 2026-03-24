/*
 * XREFs of AdtpWriteToEtw @ 0x1407B86D8
 * Callers:
 *     SepRmCallLsa @ 0x1402C19C0 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1403C05C4 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x1403C0614 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1403C06B4 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1403C6B0C (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage @ 0x1403F99F0 (Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140414200 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1407B8A28 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // r9
  int v6; // edi
  __int16 v7; // r12
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // di
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // cx
  char *v19; // rax
  bool v20; // cc
  unsigned __int64 v21; // rax
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
  char v33[8]; // [rsp+1A0h] [rbp+A0h] BYREF
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
    v6 = -1073741811;
LABEL_46:
    v18 = v23[0];
    goto LABEL_47;
  }
  v7 = *(_WORD *)(a1 + 18);
  v8 = 2;
  v6 = AdtpPackageParameters(a1, 0LL, 2, (__int64)v36, (__int64)v32, (__int64)v33, v23, (__int64)v35);
  if ( v6 < 0 )
    goto LABEL_46;
  if ( *(_WORD *)(a1 + 16)
    && (v10 = *(unsigned __int16 *)(a1 + 16),
        v24 = 0,
        v25 = 0,
        (int)AdtpGetCategoryAndSubCategoryId(v10, &v24, &v25) >= 0) )
  {
    v11 = v25 + (((_WORD)v24 + 48) << 8);
  }
  else
  {
    v11 = -256;
  }
  v12 = *(_DWORD *)(a1 + 4);
  if ( v12 <= 0x1349 )
  {
    if ( v12 == 4937 )
      goto LABEL_17;
    if ( v12 <= 0x1237 )
    {
      if ( v12 == 4663 )
        goto LABEL_17;
      v13 = v12 - 4616;
      if ( !v13 )
        goto LABEL_17;
      v14 = v13 - 8;
      if ( !v14 )
        goto LABEL_18;
      v15 = v14 - 30;
      if ( !v15 )
        goto LABEL_17;
      v16 = v15 - 2;
      if ( !v16 || v16 == 5 )
        goto LABEL_17;
      goto LABEL_42;
    }
    if ( v12 == 4688 )
      goto LABEL_18;
    if ( v12 - 4697 <= 5 || v12 == 4719 || v12 == 4816 )
      goto LABEL_17;
    v20 = v12 - 4928 <= 5;
LABEL_41:
    if ( !v20 )
      goto LABEL_42;
LABEL_17:
    v8 = 1;
    goto LABEL_18;
  }
  if ( v12 <= 0x154C )
  {
    if ( v12 >= 0x154B )
      goto LABEL_17;
    if ( v12 - 5058 <= 1 )
      goto LABEL_17;
    v21 = v12 - 5125;
    if ( (unsigned int)v21 <= 0x20 )
    {
      v9 = 0x180008001LL;
      if ( _bittest64(&v9, v21) )
        goto LABEL_17;
    }
    v20 = v12 - 5376 <= 1;
    goto LABEL_41;
  }
  if ( v12 == 5632 )
    goto LABEL_17;
  if ( v12 != 5712 )
  {
    if ( v12 <= 0x187F )
    {
LABEL_42:
      v8 = 0;
      goto LABEL_18;
    }
    if ( v12 <= 0x1881 )
      goto LABEL_18;
    v20 = v12 <= 0x1883;
    goto LABEL_41;
  }
  v8 = (unsigned int)Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage() != 0;
LABEL_18:
  v26 = *(_WORD *)(a1 + 4);
  v17 = 0x8020000000000000uLL;
  v27 = v8;
  if ( v7 != 8 )
    v17 = 0x8010000000000000uLL;
  v28 = 10;
  v18 = v23[0];
  v30 = v11;
  v29 = 0;
  v31 = v17;
  if ( !v23[0] )
    goto LABEL_44;
  v19 = &v34;
  v9 = v23[0];
  do
  {
    v4 += *(_DWORD *)v19;
    v19 += 16;
    --v9;
  }
  while ( v9 );
  if ( v4 <= 0xDC00 )
  {
LABEL_44:
    v6 = EtwWriteKMSecurityEvent(&v26, v9, v23[0], (unsigned __int64)v33 & -(__int64)(v23[0] != 0));
    if ( v6 == -1073741058 )
      *a2 = 1;
    goto LABEL_46;
  }
  *a2 = 1;
  v6 = -2147483643;
LABEL_47:
  AdtpCleanupParameterAllocations(v35, (__int64)v33, v18, v5);
  return (unsigned int)v6;
}
