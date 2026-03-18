/*
 * XREFs of ?Free@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z @ 0x1A2979
 * Callers:
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF55A4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@@@YGXPAX@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAE?AW4AllocationStatus@2@PBX@Z @ 0x1A2751 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAE-AW4Allocati.c)
 *     ?Free@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAEXPAX@Z @ 0x1A2914 (-Free@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAEXPAX@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YGXW4PLATFORMABORTREASON@1@PAX11@Z @ 0x249680 (-PlatformAbort@NSInstrumentation@@YGXW4PLATFORMABORTREASON@1@PAX11@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YGXPAX0@Z @ 0x2496EE (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YGXPAX0@Z.c)
 */

void __thiscall NSInstrumentation::CTypeIsolation<20480,72>::Free(_DWORD *this, void *a2)
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
  int *v13; // [esp+Ch] [ebp-4h]
  _DWORD *v14; // [esp+18h] [ebp+8h]

  if ( a2 )
  {
    if ( !*((_BYTE *)this + 20) )
    {
      v4 = this[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0);
      for ( i = (_DWORD *)*this; ; i = (_DWORD *)*v14 )
      {
        v14 = i;
        if ( i == this )
        {
          ExReleasePushLockSharedEx(v4, 0);
          KeLeaveCriticalRegion();
          NSInstrumentation::PlatformAbort(3, a2, 0, v9);
          return;
        }
        v13 = (int *)i[4];
        v6 = NSInstrumentation::CSectionBitmapAllocator<20480,72>::CheckAllocationStatus(v13, (unsigned int)a2);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( !v7 )
          {
            NSInstrumentation::CSectionBitmapAllocator<20480,72>::Free(v13, a2);
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
    memset(a2, 0, 0x48u);
    NSInstrumentation::PlatformFreeToPagedLookasideList(v10, v11, v12);
  }
}
