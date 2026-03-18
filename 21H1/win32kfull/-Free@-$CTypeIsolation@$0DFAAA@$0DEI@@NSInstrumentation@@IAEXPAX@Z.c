/*
 * XREFs of ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?vRestartbRealizeFont@@YGXPAVRFONT@@@Z @ 0x209DBD (-vRestartbRealizeFont@@YGXPAVRFONT@@@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEXPAX@Z @ 0xD1144 (-Free@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEXPAX@Z.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0xD11D0 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAE-AW4Alloca.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YGXW4PLATFORMABORTREASON@1@PAX11@Z @ 0x249680 (-PlatformAbort@NSInstrumentation@@YGXW4PLATFORMABORTREASON@1@PAX11@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YGXPAX0@Z @ 0x2496EE (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YGXPAX0@Z.c)
 */

void __thiscall NSInstrumentation::CTypeIsolation<217088,840>::Free(_DWORD *this, void *a2)
{
  int v4; // esi
  _DWORD *i; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  NSInstrumentation *v10; // [esp+0h] [ebp-10h]
  void *v11; // [esp+4h] [ebp-Ch]
  void *v12; // [esp+8h] [ebp-8h]
  _DWORD *v13; // [esp+18h] [ebp+8h]

  if ( a2 )
  {
    if ( !*((_BYTE *)this + 20) )
    {
      v4 = this[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0);
      for ( i = (_DWORD *)*this; ; i = (_DWORD *)*v13 )
      {
        v13 = i;
        if ( i == this )
        {
          ExReleasePushLockSharedEx(v4, 0);
          KeLeaveCriticalRegion();
          NSInstrumentation::PlatformAbort(3, a2, 0, v9);
          return;
        }
        v6 = NSInstrumentation::CSectionBitmapAllocator<217088,840>::CheckAllocationStatus(a2);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( !v7 )
          {
            NSInstrumentation::CSectionBitmapAllocator<217088,840>::Free(a2);
            ExReleasePushLockSharedEx(v4, 0);
            KeLeaveCriticalRegion();
            return;
          }
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              NSInstrumentation::PlatformAbort(2, a2, 0, 0);
          }
          else
          {
            NSInstrumentation::PlatformAbort(1, a2, 0, 0);
          }
        }
      }
    }
    memset(a2, 0, 0x348u);
    NSInstrumentation::PlatformFreeToPagedLookasideList(v10, v11, v12);
  }
}
