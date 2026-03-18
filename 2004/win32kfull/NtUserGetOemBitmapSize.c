/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C0101BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  unsigned int DpiForSystem; // eax
  __int64 OemBitmapInfoForDpi; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v14; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 >= 0x5D )
  {
    UserSetLastError(87LL, v4, v6);
  }
  else
  {
    DpiForSystem = GetDpiForSystem(v5);
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v10 = (unsigned int)*(__int16 *)(OemBitmapInfoForDpi + 4);
    v11 = (unsigned int)*(__int16 *)(OemBitmapInfoForDpi + 6);
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v14) = *(__int16 *)(OemBitmapInfoForDpi + 6);
    LODWORD(v14) = *(__int16 *)(OemBitmapInfoForDpi + 4);
    *a2 = v14;
    if ( (_DWORD)v10 && (_DWORD)v11 )
      v7 = 1;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v10);
  return v7;
}
