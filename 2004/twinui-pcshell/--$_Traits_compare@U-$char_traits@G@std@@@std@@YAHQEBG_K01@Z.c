/*
 * XREFs of ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x18019C2C8
 * Callers:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801A0874 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023817C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Traits_compare<std::char_traits<unsigned short>>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // r10d
  __int64 v6; // rbx
  unsigned __int16 v7; // cx
  __int64 result; // rax

  v4 = a2;
  if ( a4 < a2 )
    v4 = a4;
  v5 = 0;
  if ( v4 )
  {
    v6 = a1 - (_QWORD)a3;
    while ( 1 )
    {
      v7 = *(unsigned __int16 *)((char *)a3 + v6);
      if ( v7 != *a3 )
        break;
      ++a3;
      if ( !--v4 )
        goto LABEL_7;
    }
    result = v7 < *a3 ? -1 : 1;
  }
  else
  {
LABEL_7:
    result = 0LL;
  }
  if ( !(_DWORD)result )
  {
    if ( a2 >= a4 )
    {
      LOBYTE(v5) = a2 > a4;
      return v5;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
