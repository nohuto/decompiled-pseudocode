/*
 * XREFs of ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180446388
 * Callers:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___ @ 0x180446FC8 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b2.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x1804470C4 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CoCreateInstance_0 @ 0x18008DEDF (CoCreateInstance_0.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1804462B4 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CallerIdentity::FindAllApplicationsByAppID(
        struct IUnknown *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  HRESULT Instance_0; // ebx
  struct IObjectArray **v6; // r9
  CallerIdentity *ppv; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)&ppv);
  if ( Instance_0 >= 0 )
    Instance_0 = CallerIdentity::FindAllApplicationsByAppID(ppv, this, a2, v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance_0;
}
