/*
 * XREFs of _NtGdiStretchDIBitsInternal@64 @ 0x75558
 * Callers:
 *     <none>
 * Callees:
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     ?bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z @ 0x76FC6 (-bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiStretchDIBitsInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        int a11,
        int a12,
        int a13,
        size_t MaxCount,
        SIZE_T Size,
        int a16)
{
  int v16; // esi
  int v17; // ebx
  unsigned int v19; // [esp+0h] [ebp-34h]
  struct tagBITMAPINFO **v20; // [esp+4h] [ebp-30h]
  HANDLE SecureHandle; // [esp+10h] [ebp-24h]
  unsigned int v22; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v22 = 0;
  v16 = 1;
  SecureHandle = 0;
  v17 = (int)Address;
  if ( Address && a11 && MaxCount )
  {
    ms_exc.registration.TryLevel = 0;
    if ( !bCaptureBitmapInfo(MaxCount, (unsigned int)&v22, v19, v20) )
      goto LABEL_20;
    if ( Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)&Address[Size] > _MmUserProbeAddress || &Address[Size] < Address )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, Size, 2u);
    if ( !SecureHandle )
LABEL_20:
      v16 = 0;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v17 = 0;
  }
  if ( v16 )
  {
    v16 = GreStretchDIBitsInternal(a1, a3, a4, a5, a6, a7, a8, a9, v17, v22, a12, a13, MaxCount, Size, a16);
    if ( SecureHandle )
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v22 )
    FreeThreadBufferWithTag(v22);
  return v16;
}
