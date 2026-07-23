/*
 * XREFs of ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140290850
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1402906D4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402907EC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1402908B0 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout(_QWORD *Parameter)
{
  unsigned int Issue; // edi

  *((_DWORD *)Parameter + 6) = 0;
  Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(*Parameter, Parameter[1], Parameter[2]);
  ST_STORE<SM_TRAITS>::StReleaseReadContext(*Parameter, Parameter[2]);
  if ( Issue != -1073741550 )
  {
    SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(*Parameter, Parameter[1], Issue);
    *((_DWORD *)Parameter + 6) = 1;
  }
}
