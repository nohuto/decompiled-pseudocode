/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C00353FC
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0035278 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00354AC (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00354FC (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00357BC (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0035970 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0036374 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00363A0 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C003672C (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01F9B6C (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 CitpStart(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rax
  const char *v1; // rdx
  struct _CIT_IMPACT_CONTEXT *v2; // rdi
  int v3; // ebx
  __int16 v4; // ax

  if ( byte_1C0250471 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v0 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPool(896LL, 1231254357LL);
    v2 = v0;
    if ( v0 )
    {
      CitpContextInitialize(v0);
      v3 = CitpContextTrackingDataStart(v2);
      if ( v3 >= 0 )
      {
        v4 = MEMORY[0xFFFFF780000002C4];
        if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
          v4 = -1;
        v3 = 0;
        *((_WORD *)v2 + 58) = v4;
      }
      if ( v3 >= 0 )
      {
        xmmword_1C02504A0 = v2;
        v2 = 0LL;
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
          CitpPostUpdateUseInfoLoad(xmmword_1C02504A0);
          CitpDPDataLoad(xmmword_1C02504A0);
          CitpUpdateBootStats(xmmword_1C02504A0);
        }
        v3 = 0;
      }
      if ( v2 )
      {
        CitpContextCleanup(v2);
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
