/*
 * XREFs of ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QAE_NXZ @ 0xD431E
 * Callers:
 *     _UninitializeWin32PoolTracking@0 @ 0xD4276 (_UninitializeWin32PoolTracking@0.c)
 *     ?Win32kLeakTrackingLiveDumpCallback@@YGJPAXP6GJ0PBU_GUID@@0K@ZKKKKK0@Z @ 0x18354A (-Win32kLeakTrackingLiveDumpCallback@@YGJPAXP6GJ0PBU_GUID@@0K@ZKKKKK0@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall NSInstrumentation::CLeakTrackingAllocator::Empty(NSInstrumentation::CLeakTrackingAllocator *this)
{
  bool result; // al
  int v2; // ecx
  bool v3; // dl
  int v4; // ecx
  bool v5; // cl

  result = 1;
  v2 = *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 48);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 32) == 0;
  else
    v3 = 1;
  v4 = *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 52);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 24) == 0;
  else
    v5 = 1;
  if ( !v3 || !v5 )
    return 0;
  return result;
}
