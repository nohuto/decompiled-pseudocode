/*
 * XREFs of _UninitializeWin32PoolTracking@0 @ 0xD4276
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SGXPAV12@@Z @ 0xD42C2 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SGXPAV12@@Z.c)
 *     ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QAE_NXZ @ 0xD431E (-Empty@CLeakTrackingAllocator@NSInstrumentation@@QAE_NXZ.c)
 *     ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QAEXXZ @ 0x249D67 (-FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QAEXXZ.c)
 */

int __thiscall UninitializeWin32PoolTracking(NSInstrumentation::CLeakTrackingAllocator *this)
{
  int v1; // edi
  int v2; // ebx
  PVOID PoolWithTag; // eax
  NSInstrumentation::CLeakTrackingAllocator *v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  void *v9; // ecx
  struct NSInstrumentation::CLeakTrackingAllocator *v10; // [esp+0h] [ebp-28h]
  PVOID v11; // [esp+Ch] [ebp-1Ch] BYREF
  int v12; // [esp+10h] [ebp-18h]
  PVOID P; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h] BYREF
  int v15; // [esp+1Ch] [ebp-Ch] BYREF
  int v16; // [esp+20h] [ebp-8h] BYREF
  int v17; // [esp+24h] [ebp-4h] BYREF

  v1 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  v2 = 0;
  if ( *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::Empty(this) )
    {
      v12 = *(_DWORD *)(v1 + 44);
      v2 = 1;
      v17 = 0;
      v16 = 0;
      v15 = 0;
      v14 = 0;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 4 * v12, 0x746C7355u);
      P = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)Win32ExtractSessionPoolTagInfo(_gSessionId, PoolWithTag, v12, &v14, &v17, &v16, &v15, v1, v12) >= 0 )
        {
          v6 = v17;
          v7 = v16;
          v8 = v15;
        }
        else
        {
          v6 = 0;
          v7 = 0;
          v8 = 0;
          v17 = 0;
          v16 = 0;
          v15 = 0;
        }
        v11 = P;
        v12 = 4 * v14;
        DbgkWerCaptureLiveKernelDump(
          L"win32k.sys",
          171,
          _gSessionId,
          v6,
          v7,
          v8,
          &v11,
          Win32kLeakTrackingLiveDumpCallback,
          0);
        ExFreePoolWithTag(P, 0x746C7355u);
      }
      NSInstrumentation::CLeakTrackingAllocator::FreeAll(v5);
    }
    NSInstrumentation::CLeakTrackingAllocator::Destroy(v10);
    *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) = 0;
  }
  if ( _gSessionId == _gServiceSessionId )
  {
    if ( gpxsGlobals )
    {
      v9 = (void *)*((_DWORD *)gpxsGlobals + 6);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
        *((_DWORD *)gpxsGlobals + 6) = 0;
      }
    }
  }
  return v2;
}
