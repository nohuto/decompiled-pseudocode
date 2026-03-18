/*
 * XREFs of NtGdiResetDC @ 0x1C014CF20
 * Callers:
 *     <none>
 * Callees:
 *     GreResetDCInternal @ 0x1C014D06C (GreResetDCInternal.c)
 */

__int64 __fastcall NtGdiResetDC(HDC a1, struct _devicemodeW *a2, _DWORD *a3, struct _DRIVER_INFO_2W *a4, __int64 a5)
{
  struct _devicemodeW *v8; // rdi
  struct _DRIVER_INFO_2W *v9; // rsi
  struct _devicemodeW *v10; // rax
  unsigned int v11; // ebx

  v8 = 0LL;
  v9 = 0LL;
  if ( a2 && (v10 = CaptureDEVMODEW(a2), (v8 = v10) == 0LL) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 1;
    LODWORD(v10) = 1;
  }
  if ( !(_DWORD)v10 || a4 && (v9 = CaptureDriverInfo2W(a4)) == 0LL )
    v11 = 0;
  if ( v11 )
  {
    v11 = GreResetDCInternal(a1, a5);
    if ( v11 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = 0;
    }
  }
  if ( v8 )
    FreeThreadBufferWithTag(v8);
  vFreeDriverInfo2(v9);
  return v11;
}
