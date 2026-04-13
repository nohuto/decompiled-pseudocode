/*
 * XREFs of __DllMainCRTStartup @ 0x1800CF514
 * Callers:
 *     _DllMainCRTStartup @ 0x1800CF4D0 (_DllMainCRTStartup.c)
 * Callees:
 *     DllMain @ 0x180025FFC (DllMain.c)
 *     _CRT_INIT @ 0x1800CF28C (_CRT_INIT.c)
 *     _XcptFilter_0 @ 0x1800CFF39 (_XcptFilter_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _DllMainCRTStartup(HINSTANCE hinstDLL, __int64 fdwReason, void *a3)
{
  DWORD v3; // edi
  unsigned int v5; // ebx
  int v6; // eax

  v3 = fdwReason;
  v5 = 1;
  if ( (unsigned int)fdwReason <= 1 )
    _native_dllmain_reason = fdwReason;
  if ( (_DWORD)fdwReason || dword_18019C704 )
  {
    if ( (unsigned int)(fdwReason - 1) > 1 )
      goto LABEL_13;
    if ( pRawDllMain )
    {
      v6 = dword_18019C708;
      if ( (_DWORD)fdwReason == 1 )
        v6 = 1;
      dword_18019C708 = v6;
      v5 = pRawDllMain(hinstDLL, fdwReason, a3);
    }
    if ( v5 )
    {
      v5 = CRT_INIT((__int64)hinstDLL, v3, (__int64)a3);
      if ( v5 )
      {
LABEL_13:
        v5 = DllMain(hinstDLL, v3, a3);
        if ( v3 == 1 && !v5 )
        {
          DllMain(hinstDLL, 0, 0LL);
          CRT_INIT((__int64)hinstDLL, 0, 0LL);
          if ( pRawDllMain )
            pRawDllMain(hinstDLL, 0LL, 0LL);
        }
        if ( !v3 || v3 == 3 )
        {
          v5 = CRT_INIT((__int64)hinstDLL, v3, (__int64)a3);
          if ( pRawDllMain )
          {
            if ( dword_18019C708 )
              v5 = pRawDllMain(hinstDLL, v3, a3);
          }
        }
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v3 <= 1 )
    _native_dllmain_reason = -1;
  return v5;
}
