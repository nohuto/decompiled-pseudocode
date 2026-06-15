/*
 * XREFs of sub_180032160 @ 0x180032160
 * Callers:
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 *     sub_180031C0C @ 0x180031C0C (sub_180031C0C.c)
 *     sub_1800328D0 @ 0x1800328D0 (sub_1800328D0.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 */

__int64 __fastcall sub_180032160(HKEY hkey, LPCWSTR lpValue, _QWORD *a3)
{
  LSTATUS ValueW; // ecx
  __int64 result; // rax
  SIZE_T v8; // rdi
  _WORD *v9; // rax
  void *pvData; // rbx
  _WORD *i; // rcx
  LSTATUS v12; // eax
  unsigned int v13; // edi
  void *v14; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  pcbData = 0;
  ValueW = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, 0LL, &pcbData);
  if ( ValueW )
  {
    result = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      return (unsigned int)ValueW;
  }
  else
  {
    pcbData += 2;
    v8 = pcbData;
    v9 = CoTaskMemAlloc(v8 * 2);
    pvData = v9;
    if ( v9 )
    {
      for ( i = &v9[v8]; v9 != i; ++v9 )
        *v9 = 0;
      v12 = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, pvData, &pcbData);
      if ( v12 )
      {
        v13 = sub_18000A4C0(
                retaddr,
                639,
                (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                v12);
      }
      else
      {
        v14 = pvData;
        pvData = 0LL;
        v13 = 0;
        *a3 = v14;
      }
    }
    else
    {
      v13 = -2147024882;
      sub_180003AB0(
        retaddr,
        637,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        -2147024882);
    }
    if ( pvData )
      CoTaskMemFree(pvData);
    return v13;
  }
  return result;
}
