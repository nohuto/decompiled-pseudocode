/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x180058CAC
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x180058928 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 *     _wcsicmp @ 0x18008E370 (_wcsicmp.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800CFD24 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5, int a6)
{
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rax
  int RCConfig; // eax
  __int64 v14; // rax
  bool v15; // bl
  _DWORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v17; // [rsp+38h] [rbp-10h] BYREF

  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) != 0 )
  {
    RCConfig = LdrResGetRCConfig(a1, 0LL, &v17, 4096, 1);
    if ( RCConfig >= 0 )
    {
      if ( (int)LdrResGetRCConfig(a2, 0LL, &v16, 4096, 0) < 0 )
        return 0;
      v10 = v16;
      goto LABEL_5;
    }
    if ( RCConfig != -1073741686 )
      return 0;
  }
  else
  {
    v17 = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( v17 )
    {
      v16 = LdrpGetRcConfig(a2, v9, 0, 0);
      v10 = v16;
      if ( !v16 )
        return 0;
LABEL_5:
      if ( a6 == 2 )
      {
        v14 = *(_QWORD *)(v17 + 7) - *(_QWORD *)(v10 + 7);
        if ( *(_QWORD *)(v17 + 7) == *(_QWORD *)(v10 + 7) )
          v14 = *(_QWORD *)(v17 + 9) - *(_QWORD *)(v10 + 9);
        v15 = v14 == 0;
        if ( a3 )
        {
          if ( !v14 )
            return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v10 + (unsigned int)v10[29]));
          LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3);
          v10 = v16;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v17 + 11) - *(_QWORD *)(v10 + 11);
        if ( !v11 )
          v11 = *(_QWORD *)(v17 + 13) - *(_QWORD *)(v10 + 13);
        if ( !v11 )
          return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v10 + (unsigned int)v10[29]));
        v15 = 0;
      }
      if ( !v15 )
        return 0;
      return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v10 + (unsigned int)v10[29]));
    }
  }
  return (a5 & 0x1000000) != 0;
}
