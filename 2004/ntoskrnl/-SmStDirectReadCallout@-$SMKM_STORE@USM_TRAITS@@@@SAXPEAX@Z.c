/*
 * XREFs of ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403054A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140305500 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14030552C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x140305584 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout(_QWORD *a1)
{
  unsigned int Issue; // edi
  __int64 result; // rax

  *((_DWORD *)a1 + 6) = 0;
  Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(*a1, a1[1], a1[2]);
  result = ST_STORE<SM_TRAITS>::StReleaseReadContext(*a1, a1[2]);
  if ( Issue != -1073741550 )
  {
    result = SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(*a1, a1[1], Issue);
    *((_DWORD *)a1 + 6) = 1;
  }
  return result;
}
