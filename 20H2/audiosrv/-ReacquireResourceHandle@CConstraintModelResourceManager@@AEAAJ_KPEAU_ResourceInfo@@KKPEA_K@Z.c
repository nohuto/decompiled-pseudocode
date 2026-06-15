/*
 * XREFs of ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x1800F468C
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F2C68 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x1800F42A0 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180066B10 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F25D0 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::ReacquireResourceHandle(
        CConstraintModelResourceManager *this,
        __int64 a2,
        struct _ResourceInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  DWORD v10; // eax
  signed int v11; // ebx
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]
  LPCRITICAL_SECTION v16; // [rsp+40h] [rbp-18h] BYREF
  char v17; // [rsp+48h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v16,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v10 = WaitForSingleObject(*((HANDLE *)this + 14), 0x3E8u);
  if ( v10 == 258 )
  {
    v11 = -2147023436;
  }
  else
  {
    if ( v10 != -1 )
      goto LABEL_7;
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    if ( v11 >= 0 )
    {
LABEL_7:
      v11 = RmReleaseResources(a2);
      if ( v11 >= 0 )
        v11 = CConstraintModelResourceManager::AcquireResourceHandle(this, a3, a4, a5, 0, a6);
      ReleaseMutex(*((HANDLE *)this + 14));
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v17 )
    LeaveCriticalSection(v16);
  return (unsigned int)v11;
}
