/*
 * XREFs of Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReporting @ 0x1403F831C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140997724 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback @ 0x1403F8300 (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReporting()
{
  if ( (Feature_Servicing_HibernateRelaxVBSPolicy__private_featureState & 2) != 0 )
    return Feature_Servicing_HibernateRelaxVBSPolicy__private_featureState & 1;
  else
    return Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HibernateRelaxVBSPolicy__private_featureState,
             0);
}
