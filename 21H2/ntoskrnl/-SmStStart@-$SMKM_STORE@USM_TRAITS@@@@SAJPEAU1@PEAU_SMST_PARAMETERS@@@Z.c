/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140293AF8
 * Callers:
 *     SmProcessCreateRequest @ 0x1406BF384 (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14028FD10 (SmAcquireReleaseCharges.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140292E5C (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmKmStoreHelperStart @ 0x140293F1C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140293FB4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmFpPreAllocate @ 0x1403C9134 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SmKmFileInfoDuplicate @ 0x14092B47C (SmKmFileInfoDuplicate.c)
 *     SmKmFileInfoInit @ 0x14092B6DC (SmKmFileInfoInit.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

int __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, __int64 *a2)
{
  unsigned int *v2; // r15
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  int v8; // eax
  char v9; // cl
  char v10; // dl
  int result; // eax
  PVOID PoolWithTag; // rax
  unsigned int v13; // eax
  unsigned int v14; // edi
  SIZE_T v15; // rsi
  PVOID v16; // rax
  int v17; // eax
  __int128 v18; // xmm0
  int v19; // [rsp+20h] [rbp-60h]
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-40h]
  int v22; // [rsp+44h] [rbp-3Ch]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  int v25; // [rsp+58h] [rbp-28h]
  int v26; // [rsp+5Ch] [rbp-24h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]

  v2 = (unsigned int *)*a2;
  v22 = 0;
  v26 = 0;
  v28 = 0LL;
  v5 = *v2;
  if ( (unsigned __int8)*v2 >= 2u )
    return -1073741811;
  if ( v2[5] )
    return -1073741811;
  if ( v2[3] - 1 > 0x3FFFF )
    return -1073741811;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return -1073741811;
  if ( (unsigned __int8)*v2 == 1 && (v5 & 0x100) != 0 )
    return -1073741637;
  v7 = v5 & 0xA0000;
  if ( (v5 & 0x40000) == 0 )
  {
    if ( v7 )
      return -1073741811;
  }
  if ( v7 == 655360 || (v5 & 0x100000) != 0 && (v5 & 0x40000) == 0 )
    return -1073741811;
  *(_QWORD *)(a1 + 6720) = a2[4];
  v8 = *((_DWORD *)a2 + 14);
  if ( !v8 )
    v8 = 7;
  *(_DWORD *)(a1 + 6728) = v8;
  *(_BYTE *)(a1 + 6020) = *(_BYTE *)v2;
  *(_BYTE *)(a1 + 6021) ^= (*(_BYTE *)(a1 + 6021) ^ (4 * (*v2 >> 18))) & 4;
  v9 = *(_BYTE *)(a1 + 6021) ^ (*(_BYTE *)(a1 + 6021) ^ (8 * (*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 6021) = v9;
  v10 = v9 ^ (v9 ^ (32 * (*v2 >> 19))) & 0x20;
  *(_BYTE *)(a1 + 6021) = v10;
  *(_DWORD *)(a1 + 6208) = v2[2];
  if ( *(_BYTE *)v2 )
  {
    SmKmFileInfoInit(a1 + 6216);
    *(_DWORD *)(a1 + 6212) = v2[3];
    v14 = v2[6];
    result = SmKmFileInfoDuplicate(a1 + 6216, *((_QWORD *)v2 + 6));
LABEL_42:
    if ( result < 0 )
      return result;
    goto LABEL_23;
  }
  if ( (v10 & 4) != 0 )
  {
    memset((void *)(a1 + 6232), 0, 0x80uLL);
    *(_WORD *)(a1 + 6240) = 0;
    *(_QWORD *)(a1 + 6256) = a1 + 6248;
    *(_QWORD *)(a1 + 6248) = a1 + 6248;
    *(_DWORD *)(a1 + 6244) = 0;
    *(_BYTE *)(a1 + 6242) = 6;
    *(_WORD *)(a1 + 6264) = 0;
    *(_DWORD *)(a1 + 6268) = 0;
    *(_BYTE *)(a1 + 6266) = 6;
    *(_QWORD *)(a1 + 6280) = a1 + 6272;
    *(_QWORD *)(a1 + 6272) = a1 + 6272;
    memset((void *)(a1 + 6360), 0, 0x80uLL);
    *(_BYTE *)(a1 + 6370) = 6;
    *(_WORD *)(a1 + 6368) = 0;
    *(_DWORD *)(a1 + 6372) = 0;
    *(_QWORD *)(a1 + 6384) = a1 + 6376;
    *(_QWORD *)(a1 + 6376) = a1 + 6376;
    *(_WORD *)(a1 + 6392) = 0;
    *(_DWORD *)(a1 + 6396) = 0;
    *(_BYTE *)(a1 + 6394) = 6;
    *(_QWORD *)(a1 + 6408) = a1 + 6400;
    *(_QWORD *)(a1 + 6400) = a1 + 6400;
    memset((void *)(a1 + 6488), 0, 0x50uLL);
    *(_BYTE *)(a1 + 6498) = 6;
    *(_QWORD *)(a1 + 6512) = a1 + 6504;
    *(_QWORD *)(a1 + 6504) = a1 + 6504;
    *(_WORD *)(a1 + 6496) = 0;
    *(_DWORD *)(a1 + 6500) = 0;
    *(_QWORD *)(a1 + 6536) = a1 + 6528;
    *(_QWORD *)(a1 + 6528) = a1 + 6528;
    *(_WORD *)(a1 + 6520) = 0;
    *(_DWORD *)(a1 + 6524) = 0;
    *(_BYTE *)(a1 + 6522) = 6;
    *(_QWORD *)(a1 + 6552) = a1 + 6544;
    *(_QWORD *)(a1 + 6544) = 0LL;
    *(_QWORD *)(a1 + 6560) = 0LL;
    *(_QWORD *)(a1 + 6584) = a2[5];
    result = SmKmStoreHelperStart(a1 + 6232, a2[6]);
    if ( result < 0 )
      return result;
    result = SmKmStoreHelperStart(a1 + 6360, a2[6]);
    if ( result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
      *(_QWORD *)(a1 + 6344) = &unk_140D243F8;
    *(_QWORD *)(a1 + 6480) = &dword_140D24410;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6C526D73u);
    *(_QWORD *)(a1 + 6224) = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, 0x50uLL);
    if ( !(unsigned int)SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 0) )
      return -1073741670;
    *(_BYTE *)(a1 + 6021) |= 0x10u;
  }
  v13 = v2[3];
  *(_DWORD *)(a1 + 6212) = v13;
  v14 = 0;
  v15 = 8 * v13;
  v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x67526D73u);
  if ( !v16 )
    return -1073741670;
  *(_QWORD *)(a1 + 6216) = v16;
  memset(v16, 0, (unsigned int)v15);
  if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
  {
    v19 = ((*(_DWORD *)(a1 + 6208) >> 8) ^ 0x100005) & 0xFFFF0 ^ 0x100005;
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 6608));
    goto LABEL_42;
  }
LABEL_23:
  v17 = *(_DWORD *)(a1 + 6212);
  v22 = 0;
  v26 = 0;
  v28 = 0LL;
  v18 = *(_OWORD *)v2;
  v21 = v14;
  v23 = a1;
  v20 = v18;
  HIDWORD(v20) = v17;
  v27 = a2[3];
  if ( *(_BYTE *)v2 )
    v28 = *((_QWORD *)v2 + 8);
  v24 = a2[1];
  v25 = *((_DWORD *)a2 + 4);
  LODWORD(v20) = v20 & 0xFFFFF7FF | (v25 == 0 ? 0x800 : 0);
  result = ST_STORE<SM_TRAITS>::StStart(a1, (__int64)&v20);
  if ( result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
      goto LABEL_30;
    result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
               a1,
               a2[6],
               SMKM_STORE<SM_TRAITS>::SmStReadThread,
               a1 + 6488,
               v19);
    if ( result >= 0 )
      result = 0;
    if ( result >= 0 )
    {
LABEL_30:
      result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                 a1,
                 a2[6],
                 SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                 a1 + 6200,
                 v19);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
