/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C009CD0C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C009CB88 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009CDBC (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009CE0C (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009D0CC (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009D280 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C009DC84 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009DCB0 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009E03C (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01F823C (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 CitpStart(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rax
  const char *v1; // rdx
  __int64 v2; // rdi
  int v3; // ebx
  __int16 v4; // ax

  if ( byte_1C024E471 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v0 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPool(896LL, 0x49637355u);
    v2 = (__int64)v0;
    if ( v0 )
    {
      CitpContextInitialize(v0);
      v3 = CitpContextTrackingDataStart((struct _CIT_IMPACT_CONTEXT *)v2);
      if ( v3 >= 0 )
      {
        v4 = MEMORY[0xFFFFF780000002C4];
        if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
          v4 = -1;
        v3 = 0;
        *(_WORD *)(v2 + 116) = v4;
      }
      if ( v3 >= 0 )
      {
        xmmword_1C024E4A0 = (struct _CIT_IMPACT_CONTEXT *)v2;
        v2 = 0LL;
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
          CitpPostUpdateUseInfoLoad(xmmword_1C024E4A0);
          CitpDPDataLoad(xmmword_1C024E4A0);
          CitpUpdateBootStats(xmmword_1C024E4A0);
        }
        v3 = 0;
      }
      if ( v2 )
      {
        CitpContextCleanup((struct _CIT_IMPACT_CONTEXT *)v2);
        Win32FreePool(v2);
      }
    }
    else
    {
      v3 = -1073741670;
      CitpLogFailureWorker(-1073741670, v1, 0xC8u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
