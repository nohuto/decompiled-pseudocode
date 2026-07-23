/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x14037F72C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403625A4 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x140362384 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     LdrResGetRCConfig @ 0x14077989C (LdrResGetRCConfig.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5)
{
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  int RCConfig; // eax
  _DWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  if ( (a5 & 0x1000) != 0 )
  {
    RCConfig = LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v14, 4096, 1);
    if ( RCConfig >= 0 )
    {
      if ( (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v13, 4096, 0) < 0 )
        return 0;
      v8 = v14;
      v9 = v13;
LABEL_4:
      v10 = *(_QWORD *)(v8 + 11) - *(_QWORD *)(v9 + 11);
      if ( !v10 )
        v10 = *(_QWORD *)(v8 + 13) - *(_QWORD *)(v9 + 13);
      return !v10 && ((a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v9 + (unsigned int)v9[29])));
    }
    if ( RCConfig != -1073741686 )
      return 0;
  }
  else
  {
    v8 = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( v8 )
    {
      v9 = LdrpGetRcConfig(a2, v7, 0, 0);
      if ( !v9 )
        return 0;
      goto LABEL_4;
    }
  }
  return (a5 & 0x1000000) != 0;
}
