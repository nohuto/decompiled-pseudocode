/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14030FEBC
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14030FE28 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14030FF60 (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140310C74 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403110E8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  _KPROCESS *v4; // rcx
  int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_KPROCESS **)(a1 + 6584);
  memset(v9, 0, sizeof(v9));
  KiStackAttachProcess(v4, 0LL, (__int64)v9);
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        v7 = -1073741811;
        goto LABEL_6;
      }
      v6 = SMKM_STORE<SM_TRAITS>::SmStInSwapStore(a1);
    }
    else
    {
      v6 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
    }
  }
  else
  {
    v6 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
  }
  v7 = v6;
LABEL_6:
  KiUnstackDetachProcess((__int64)v9, 0LL);
  return v7;
}
