/*
 * XREFs of _RtlNewInstanceSecurityObject@40 @ 0x4B336270
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlNewInstanceSecurityObject(
        char a1,
        char a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        _DWORD *a7,
        int a8,
        void *a9,
        int a10)
{
  int result; // eax
  _BYTE v11[4]; // [esp+1Ch] [ebp-44h] BYREF
  _BYTE v12[48]; // [esp+20h] [ebp-40h] BYREF
  int v13; // [esp+50h] [ebp-10h]
  int v14; // [esp+54h] [ebp-Ch]

  result = ZwQueryInformationToken((int)a9, 10, (int)v12, 56, (int)v11);
  if ( result >= 0 )
  {
    *a4 = v13;
    a4[1] = v14;
    if ( *a4 != *a3 || a4[1] != a3[1] || a1 || a2 )
    {
      return RtlpNewSecurityObject(a5, a6, a7, 0, 0, a8, 0, a9, a10, 0);
    }
    else
    {
      *a7 = 0;
      return 0;
    }
  }
  return result;
}
