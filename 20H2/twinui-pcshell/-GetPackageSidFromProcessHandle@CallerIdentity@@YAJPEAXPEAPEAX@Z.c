/*
 * XREFs of ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18046B248
 * Callers:
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x18046B1BC (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18046A3D0 (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18046B2CC (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetPackageSidFromProcessHandle(CallerIdentity *this, _QWORD *a2, void **a3)
{
  signed int v4; // eax
  void **v5; // r8
  signed int PackageSidFromProcessToken; // ebx
  char *v7; // rcx
  HANDLE hObject; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  hObject = 0LL;
  v4 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(this, &hObject, a3);
  PackageSidFromProcessToken = v4;
  if ( v4 > 0 )
    PackageSidFromProcessToken = (unsigned __int16)v4 | 0x80070000;
  if ( PackageSidFromProcessToken >= 0 )
    PackageSidFromProcessToken = CallerIdentity::GetPackageSidFromProcessToken(hObject, a2, v5);
  v7 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)PackageSidFromProcessToken;
}
