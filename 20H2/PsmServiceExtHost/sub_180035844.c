/*
 * XREFs of sub_180035844 @ 0x180035844
 * Callers:
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 * Callees:
 *     sub_180045600 @ 0x180045600 (sub_180045600.c)
 *     sub_180045BE4 @ 0x180045BE4 (sub_180045BE4.c)
 */

__int64 __fastcall sub_180035844(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // edi
  unsigned int v9; // ebx
  int v10; // eax

  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741584;
      v8 = 1;
    }
    else
    {
      v8 = 2;
    }
  }
  else
  {
    v8 = 4;
  }
  v9 = 0;
  if ( (unsigned __int8)sub_180045BE4() )
  {
    if ( (unsigned __int8)sub_180045600() )
    {
      if ( IsWellKnownSid((PSID)(*(_QWORD *)(a1 + 88) + 228LL), WinLocalAccountAndAdministratorSid|WinCreatorGroupSid) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL) + 160LL) + 88LL) )
          return (unsigned int)-1073741637;
        a4 = 0LL;
      }
      v10 = BeginAcquireStoreLicenseForPackageActivation2(a1 + 96, v8, a4);
      if ( v10 >= 0 )
        return 0;
      return (unsigned int)v10;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  return v9;
}
