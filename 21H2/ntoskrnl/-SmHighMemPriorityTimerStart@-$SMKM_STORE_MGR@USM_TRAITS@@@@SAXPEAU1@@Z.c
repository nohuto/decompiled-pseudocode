/*
 * XREFs of ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405994F8
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140288EC4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  result = *(unsigned int *)(a1 + 1832);
  if ( !(_DWORD)result )
  {
    result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 1832), 1);
    if ( !(_DWORD)result )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      return KeSetTimer2(a1 + 1664, -3000000000LL, 3000000000LL, (__int64)v2);
    }
  }
  return result;
}
