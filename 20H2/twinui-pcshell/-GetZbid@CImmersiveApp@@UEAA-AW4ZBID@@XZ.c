/*
 * XREFs of ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x180079BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x180079BD0 (-GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA-AW4ZBID@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetZbid(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 472);
  result = 0LL;
  if ( (v1 & 1) != 0 || (v1 & 8) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationBand(a1 + 184);
  return result;
}
