/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C00B1910
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rcx
  int v6; // ecx
  _DWORD *v7; // rax
  unsigned int v8; // esi
  __int64 result; // rax
  _DWORD *v10; // rsi
  __int64 v11; // rax

  v4 = 0;
  v5 = *(unsigned int *)a1;
  if ( !(_DWORD)v5 )
  {
    v10 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v5, a2, a3);
      WdLogEvent5_WdAssertion(v11);
    }
    if ( gDrvDpiWin8Style )
      v4 = gdmLogPixels;
    *v10 = v4;
    return 0LL;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( gProtocolType )
      {
        v7 = (_DWORD *)*((_QWORD *)a1 + 1);
        if ( gProtocolType == -1 )
          *v7 = 0xFFFF;
        else
          *v7 = 2;
      }
      else
      {
        **((_DWORD **)a1 + 1) = 0;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v6 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) == 1 )
    {
      **((_BYTE **)a1 + 1) = gbTtmEnabled;
      return 0LL;
    }
    return 3221225485LL;
  }
  v8 = -1073741637;
  if ( qword_1C02510C0 )
    result = qword_1C02510C0();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    if ( qword_1C02510C8 )
      return (unsigned int)qword_1C02510C8(a1);
    return v8;
  }
  return result;
}
