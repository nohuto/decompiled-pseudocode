/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x140778958
 * Callers:
 *     PiCMOpenClassKey @ 0x1406DEBF0 (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407644C8 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408AC4BC (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x14066D164 (_PnpCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x14066DA70 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  v11 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, a2, (__int64)&v11);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v5 )
      v8 = *(_QWORD *)(v5 + 224);
    else
      v8 = 0LL;
    v9 = SysCtxRegOpenKey(v8, v11, (__int64)&word_1407D36E0, 0, a4, a5);
    if ( v9 == -1073741444 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v9 < 0 )
    {
      return (unsigned int)v9;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
