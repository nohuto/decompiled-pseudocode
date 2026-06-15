/*
 * XREFs of sub_18013BAA8 @ 0x18013BAA8
 * Callers:
 *     sub_18013AF20 @ 0x18013AF20 (sub_18013AF20.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     wcscmp @ 0x18007441B (wcscmp.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_180138CA4 @ 0x180138CA4 (sub_180138CA4.c)
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013B948 @ 0x18013B948 (sub_18013B948.c)
 */

__int64 __fastcall sub_18013BAA8(unsigned int *a1, __int64 a2, __int64 *a3)
{
  int v6; // r14d
  int v7; // ebx
  int v8; // r15d
  LPVOID v9; // rax
  __int64 v10; // rax
  GUID pclsid; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t String1[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-A0h] BYREF
  OLECHAR sz[40]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v16[416]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[528]; // [rsp+270h] [rbp+170h] BYREF

  memset(v16, 0, 0x192uLL);
  memset(v17, 0, 0x20AuLL);
  v6 = 4;
  pclsid = (GUID)xmmword_18015B730;
  v7 = sub_18013B948(a1, a2, (__int64)L"HWID", (__int64)v16, 0xC9u);
  if ( v7 >= 0 )
  {
    v7 = sub_18013B948(a1, a2, (__int64)L"TopologyName", (__int64)v17, 0x105u);
    if ( v7 >= 0 )
    {
      v7 = sub_18013B948(a1, a2, (__int64)L"PinId", (__int64)v14, 0xBu);
      if ( v7 >= 0 )
      {
        v8 = o_wcstoul(v14, String1, 10LL);
        if ( **(_WORD **)String1 || *(_BYTE **)String1 == v14 )
          v7 = -2147024809;
        if ( v7 >= 0 )
        {
          v7 = sub_18013B948(a1, a2, (__int64)L"Mode", (__int64)sz, 0x28u);
          if ( v7 >= 0 )
          {
            v7 = CLSIDFromString(sz, &pclsid);
            if ( v7 >= 0 )
            {
              v7 = sub_18013B948(a1, a2, (__int64)L"ConnectorType", (__int64)String1, 9u);
              if ( v7 >= 0 )
              {
                if ( !wcscmp(String1, L"Host") )
                {
                  v6 = 0;
                }
                else if ( !wcscmp(String1, L"Offload") )
                {
                  v6 = 1;
                }
                else if ( !wcscmp(String1, L"Loopback") )
                {
                  v6 = 2;
                }
                else
                {
                  v7 = -2147024809;
                  sub_1800F3AD4((__int64)L"Invalid connector type %s", String1);
                }
                if ( v7 >= 0 )
                {
                  v7 = sub_18013A830(a1, a2, (__int64)L"Stream");
                  if ( v7 >= 0 )
                  {
                    v9 = sub_180055F40(0x3C8uLL);
                    *(_QWORD *)String1 = v9;
                    if ( v9 )
                    {
                      *(GUID *)String1 = pclsid;
                      v10 = sub_180138CA4((__int64)v9, (__int64)v16, (__int64)v17, v8, String1, v6);
                    }
                    else
                    {
                      v10 = 0LL;
                    }
                    *a3 = v10;
                    if ( !v10 )
                      return (unsigned int)-2147024882;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
