/*
 * XREFs of _NtGdiResetDC@20 @ 0x213E5F
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreResetDCInternal@20 @ 0x201023 (_GreResetDCInternal@20.c)
 */

int __stdcall NtGdiResetDC(HDC a1, struct _devicemodeW *a2, ULONG a3, struct _DRIVER_INFO_2W *a4, int a5)
{
  int v5; // esi
  BOOL v6; // eax
  _DWORD *v7; // ecx
  int v9; // [esp+10h] [ebp-28h] BYREF
  int v10; // [esp+14h] [ebp-24h]
  struct _devicemodeW *v11; // [esp+18h] [ebp-20h]
  int v12; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v5 = 0;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  ms_exc.registration.TryLevel = 0;
  v6 = 1;
  if ( a2 )
  {
    v11 = CaptureDEVMODEW(a2);
    if ( !v11 )
      v6 = 0;
  }
  v12 = v6;
  if ( v6 )
  {
    if ( !a4 || (v10 = (int)CaptureDriverInfo2W(a4)) != 0 )
      v5 = 1;
  }
  v12 = v5;
  ms_exc.registration.TryLevel = -2;
  if ( v5 )
  {
    v5 = GreResetDCInternal(a1, (int)v11, &v9, v10, a5);
    v12 = v5;
    if ( v5 )
    {
      ms_exc.registration.TryLevel = 1;
      v7 = (_DWORD *)a3;
      if ( a3 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = v9;
      ms_exc.registration.TryLevel = -2;
    }
  }
  if ( v11 )
    FreeThreadBufferWithTag(v11);
  vFreeDriverInfo2((struct _DRIVER_INFO_2W *)v10);
  return v5;
}
