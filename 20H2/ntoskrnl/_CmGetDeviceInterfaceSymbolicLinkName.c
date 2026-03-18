/*
 * XREFs of _CmGetDeviceInterfaceSymbolicLinkName @ 0x140744000
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x140743E74 (IopBuildGlobalSymbolicLinkString.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140266DA8 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x1403D35A0 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x14066BCDC (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmGetDeviceInterfaceSymbolicLinkName(
        __int64 a1,
        const WCHAR *a2,
        wchar_t *a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // rdi
  NTSTATUS result; // eax
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  size_t v11; // rax
  unsigned int v12; // ecx

  v5 = a4;
  result = CmValidateDeviceInterfaceName(a1, a2);
  if ( result >= 0 )
  {
    v9 = a2 + 4;
    v10 = wcschr(v9, 0x5Cu);
    if ( v10 )
    {
      v11 = v10 - v9;
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
    }
    if ( v11 <= 0x27 )
    {
      return -1073741773;
    }
    else
    {
      v12 = v11 + 1;
      if ( v11 + 1 > 0xFFFFFFFF )
      {
        return -1073741675;
      }
      else
      {
        if ( a5 )
          *a5 = v12;
        if ( v12 > (unsigned int)v5 )
          return -1073741789;
        else
          return RtlStringCchCopyNExW(a3, v5, v9, v11, 0LL, 0LL, 0x800u);
      }
    }
  }
  return result;
}
