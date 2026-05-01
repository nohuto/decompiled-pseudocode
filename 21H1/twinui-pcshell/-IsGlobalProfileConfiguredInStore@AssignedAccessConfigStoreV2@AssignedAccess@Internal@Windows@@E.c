/*
 * XREFs of ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180455D30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8ef4991a5d062220c31ccf3f285c5be2_::operator() @ 0x1800CA080 (_lambda_8ef4991a5d062220c31ccf3f285c5be2_--operator().c)
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::IsGlobalProfileConfiguredInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2 *this)
{
  char v1; // bl
  _BYTE *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v3[0] = this;
  v1 = 0;
  v3[1] = &v4;
  v4 = 0;
  if ( (int)lambda_8ef4991a5d062220c31ccf3f285c5be2_::operator()(v3) >= 0 )
    return v4 != 0;
  return v1;
}
