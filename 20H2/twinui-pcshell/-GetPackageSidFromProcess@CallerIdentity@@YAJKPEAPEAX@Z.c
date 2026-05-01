/*
 * XREFs of ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x18046B1BC
 * Callers:
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x18015B088 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801503C4 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18046B248 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetPackageSidFromProcess(DWORD dwProcessId, _QWORD *a2, void **a3)
{
  CallerIdentity *v4; // rbx
  void **v5; // r8
  signed int PackageSidFromProcessHandle; // edi

  *a2 = 0LL;
  v4 = (CallerIdentity *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( v4 || (PackageSidFromProcessHandle = ResultFromKnownLastError(), PackageSidFromProcessHandle >= 0) )
    PackageSidFromProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(v4, a2, v5);
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  return (unsigned int)PackageSidFromProcessHandle;
}
