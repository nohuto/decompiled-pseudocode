/*
 * XREFs of ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x18007C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x1800321A0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetPackageId(CImmersiveApp *this, int a2, unsigned __int16 **a3)
{
  unsigned int v6; // ebx

  *a3 = 0LL;
  v6 = -2147023728;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_QWORD *)this + 70) && ((*((_BYTE *)this + 496) & 1) != 0 || a2) )
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
           (__int64 *)this + 70,
           a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v6;
}
