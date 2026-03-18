/*
 * XREFs of _UmfdLoadFontFile@28 @ 0xDE9A6
 * Callers:
 *     <none>
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     _UmfdUnloadFontFileInternal@4 @ 0xCDEEE (_UmfdUnloadFontFileInternal@4.c)
 *     ?Insert@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z @ 0xDEA66 (-Insert@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z.c)
 *     ??0LoadFontFileRequest@@QAE@KPAKPAPAX0PAUtagDESIGNVECTOR@@KK@Z @ 0xDEAFE (--0LoadFontFileRequest@@QAE@KPAKPAPAX0PAUtagDESIGNVECTOR@@KK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int *__stdcall UmfdLoadFontFile(
        unsigned int a1,
        unsigned int *a2,
        void **a3,
        unsigned int *a4,
        struct tagDESIGNVECTOR *a5,
        unsigned int a6,
        unsigned int a7)
{
  int CurrentProcess; // eax
  unsigned int *v8; // esi
  PVOID v10; // [esp+4h] [ebp-DCh] BYREF
  int v11; // [esp+8h] [ebp-D8h] BYREF
  unsigned int v12[3]; // [esp+Ch] [ebp-D4h] BYREF
  _BYTE v13[176]; // [esp+18h] [ebp-C8h] BYREF
  unsigned int v14; // [esp+C8h] [ebp-18h]
  unsigned int v15; // [esp+CCh] [ebp-14h]
  PVOID pv; // [esp+D0h] [ebp-10h]

  CurrentProcess = PsGetCurrentProcess();
  PsGetProcessImageFileName(CurrentProcess);
  LoadFontFileRequest::LoadFontFileRequest((LoadFontFileRequest *)v13, a1, a2, a3, a4, a5, a6, a7);
  v8 = 0;
  if ( UmfdClientSendAndWaitForCompletion(2u, (int)v13) >= 0 && (v8 = (unsigned int *)pv, (v10 = pv) != 0) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v11, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
    if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned long,unsigned long>::Insert(&v10, &v10) )
    {
      UmfdUnloadFontFileInternal(v8);
      EngFreeMem(v8);
      v8 = 0;
    }
    if ( v11 )
    {
      ExReleasePushLockExclusiveEx(v11, 0);
      KeLeaveCriticalRegion();
    }
  }
  else if ( v14 )
  {
    v12[2] = 0;
    v12[1] = v15;
    v12[0] = v14;
    UmfdUnloadFontFileInternal(v12);
  }
  return v8;
}
