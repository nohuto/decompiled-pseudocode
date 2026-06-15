/*
 * XREFs of ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140055CC4
 * Callers:
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x140055E5C (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14001F3D0 (_alloca_probe.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140054EA0 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x1400550A0 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140056084 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140056860 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 */

__int64 __fastcall ATL::CRegParser::RegisterBuffer(ATL::CRegObject **this, unsigned __int16 *a2, int a3)
{
  __int64 result; // rax
  int Token; // ebx
  _WORD *v7; // rbp
  unsigned int v8; // esi
  __int64 v9; // rbx
  LPCWSTR *v10; // r14
  HKEY v11; // rsi
  ATL::CRegObject *v12; // r14
  LPVOID pv; // [rsp+30h] [rbp-2058h] BYREF
  WCHAR String1[4096]; // [rsp+40h] [rbp-2048h] BYREF

  pv = 0LL;
  result = ATL::CRegParser::PreProcessBuffer(this, a2, (unsigned __int16 **)&pv);
  Token = result;
  if ( (int)result >= 0 )
  {
    v7 = pv;
    *this = (ATL::CRegObject *)pv;
    if ( *v7 )
    {
      do
      {
        Token = ATL::CRegParser::NextToken((ATL::CRegParser *)this, String1);
        if ( Token < 0 )
          break;
        v8 = 0;
        v9 = 0LL;
        v10 = (LPCWSTR *)&`ATL::CRegParser::HKeyFromString'::`2'::map;
        while ( lstrcmpiW(String1, *v10) )
        {
          ++v8;
          ++v9;
          v10 += 2;
          if ( v8 >= 0xE )
          {
            v11 = 0LL;
            goto LABEL_9;
          }
        }
        v11 = (HKEY)*(&`ATL::CRegParser::HKeyFromString'::`2'::map + 2 * v9 + 1);
LABEL_9:
        if ( !v11 )
          goto LABEL_18;
        Token = ATL::CRegParser::NextToken((ATL::CRegParser *)this, String1);
        if ( Token < 0 )
          break;
        if ( String1[0] != 123 )
        {
LABEL_18:
          Token = -2147352567;
          break;
        }
        if ( a3 )
        {
          v12 = *this;
          Token = ATL::CRegParser::RegisterSubkeys((ATL::CRegParser *)this, String1, v11, a3, 0);
          if ( Token < 0 )
          {
            *this = v12;
            ATL::CRegParser::RegisterSubkeys((ATL::CRegParser *)this, String1, v11, 0, 0);
            break;
          }
        }
        else
        {
          Token = ATL::CRegParser::RegisterSubkeys((ATL::CRegParser *)this, String1, v11, 0, 0);
          if ( Token < 0 )
            break;
        }
        ATL::CRegParser::SkipWhiteSpace((ATL::CRegParser *)this);
      }
      while ( *(_WORD *)*this );
    }
    CoTaskMemFree(v7);
    return (unsigned int)Token;
  }
  return result;
}
