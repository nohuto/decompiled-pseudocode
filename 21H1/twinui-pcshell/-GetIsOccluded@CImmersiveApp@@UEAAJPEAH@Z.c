/*
 * XREFs of ?GetIsOccluded@CImmersiveApp@@UEAAJPEAH@Z @ 0x180158830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEA_N@Z @ 0x1801588A0 (-GetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetIsOccluded(CImmersiveApp *this, int *a2)
{
  int IsOccluded; // ebx
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0;
  IsOccluded = CImmersiveApp::CImmersiveWindowCollection::GetIsOccluded((CImmersiveApp *)((char *)this + 208), &v6);
  if ( IsOccluded >= 0 )
    *a2 = v6;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)IsOccluded;
}
