/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402CDC78
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402CDBE4 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402CDD1C (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402D0B80 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402D0C30 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(_KPROCESS **)(a1 + 6584);
  memset(v13, 0, sizeof(v13));
  KiStackAttachProcess(v6, 0LL, (__int64)v13, a4);
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v11 = -1073741811;
        goto LABEL_6;
      }
      v10 = SMKM_STORE<SM_TRAITS>::SmStInSwapStore(a1);
    }
    else
    {
      v10 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
    }
  }
  else
  {
    v10 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
  }
  v11 = v10;
LABEL_6:
  KiUnstackDetachProcess((__int64)v13, 0LL, v7, v8);
  return v11;
}
