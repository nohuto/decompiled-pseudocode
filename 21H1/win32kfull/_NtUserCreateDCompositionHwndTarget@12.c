/*
 * XREFs of _NtUserCreateDCompositionHwndTarget@12 @ 0xB28BA
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     _NtUserDestroyDCompositionHwndTarget@8 @ 0x81FC0 (_NtUserDestroyDCompositionHwndTarget@8.c)
 *     ?AttachWindowCompositionTarget@@YGJPAUHWND__@@HPAUCompositionObject@@@Z @ 0xB2988 (-AttachWindowCompositionTarget@@YGJPAUHWND__@@HPAUCompositionObject@@@Z.c)
 *     ?TestWindowForCompositionTarget@@YGJPAUHWND__@@H@Z @ 0xB2B2C (-TestWindowForCompositionTarget@@YGJPAUHWND__@@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserCreateDCompositionHwndTarget(int a1, int a2, ULONG a3)
{
  int v3; // esi
  _DWORD *v4; // ecx
  HWND v6; // [esp+0h] [ebp-3Ch]
  int v7; // [esp+0h] [ebp-3Ch]
  int v8; // [esp+4h] [ebp-38h]
  struct CompositionObject *v9; // [esp+4h] [ebp-38h]
  int v10; // [esp+18h] [ebp-24h]
  HANDLE Handle; // [esp+1Ch] [ebp-20h] BYREF
  HWND v12; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  Handle = (HANDLE)-1;
  v10 = 0;
  KeEnterCriticalRegion();
  v3 = TestWindowForCompositionTarget(v6, v8);
  if ( v3 < 0 )
    goto LABEL_10;
  v12 = 0;
  v3 = CreateSharedSystemVisualObject(&v12);
  if ( v3 < 0 )
    goto LABEL_10;
  v3 = AttachWindowCompositionTarget(v12, v7, v9);
  if ( v3 >= 0 )
  {
    v10 = 1;
    v3 = CompositionObject::CreateHandle((CompositionObject *)v12, 1u, 0, 0, &Handle);
  }
  CompositionObject::Release((CompositionObject *)v12);
  if ( v3 < 0 )
  {
LABEL_10:
    if ( v10 )
      NtUserDestroyDCompositionHwndTarget(a1, a2);
    if ( Handle != (HANDLE)-1 )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v3, 0);
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v4 = (_DWORD *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v4 = (_DWORD *)_MmUserProbeAddress;
    *v4 = Handle;
    ms_exc.registration.TryLevel = -2;
  }
  KeLeaveCriticalRegion();
  return v3 >= 0;
}
