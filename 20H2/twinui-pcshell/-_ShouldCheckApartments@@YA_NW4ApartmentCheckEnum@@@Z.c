/*
 * XREFs of ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x18007A068
 * Callers:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18014D2F4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

char __fastcall _ShouldCheckApartments(int a1)
{
  char v2; // bl
  int v3; // ecx
  int v5; // ecx
  int v6; // eax
  WCHAR Filename[264]; // [rsp+30h] [rbp-228h] BYREF

  v2 = 1;
  if ( a1 != 2 )
  {
    v3 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( !`_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
      {
        v5 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v5;
      }
      else
      {
        v5 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
      if ( v5 != 1 )
        return 0;
      if ( a1 != 1 )
        return v2;
      v6 = IsAppCompatModeEnabled(16LL);
      v3 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v6 )
        v3 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v3;
    }
    if ( v3 != 1 )
      return 0;
  }
  return v2;
}
