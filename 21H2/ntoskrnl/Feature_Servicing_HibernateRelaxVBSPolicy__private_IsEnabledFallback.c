/*
 * XREFs of Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback @ 0x1403F8300
 * Callers:
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReporting @ 0x1403F831C (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1403F1CF4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_HibernateRelaxVBSPolicy__private_descriptor);
}
