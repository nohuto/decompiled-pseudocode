/*
 * XREFs of ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x18045D258
 * Callers:
 *     ?IsAppActive@Win32AppInfo@@QEAA_NXZ @ 0x18045D12C (-IsAppActive@Win32AppInfo@@QEAA_NXZ.c)
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x18045D940 (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Win32ProcessInfo::IsProcessActive(__int64 ***this)
{
  __int64 **v1; // r8
  __int64 *j; // rax
  __int64 **v3; // rcx
  __int64 *i; // rcx
  __int64 *v5; // rdx

  v1 = *this;
  j = **this;
  while ( j != (__int64 *)v1 )
  {
    if ( *(_DWORD *)j[5] != 1 )
      return 1;
    v3 = (__int64 **)j[2];
    if ( *((_BYTE *)v3 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v5 = *v3;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v5 + 25); v5 = (__int64 *)*v5 )
        j = v5;
    }
  }
  return 0;
}
