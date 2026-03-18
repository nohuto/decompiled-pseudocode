/*
 * XREFs of _NtGdiSetDIBitsToDeviceInternal@64 @ 0x75458
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     ?bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z @ 0x76FC6 (-bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

LONG __stdcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        ULONG a2,
        LONG a3,
        int a4,
        int a5,
        ULONG a6,
        int a7,
        LONG a8,
        LONG a9,
        char *Address,
        int a11,
        char a12,
        SIZE_T Size,
        size_t MaxCount,
        int a15,
        int a16)
{
  LONG v16; // esi
  unsigned int v18; // [esp+0h] [ebp-34h]
  struct tagBITMAPINFO **v19; // [esp+4h] [ebp-30h]
  HANDLE SecureHandle; // [esp+10h] [ebp-24h]
  unsigned int v21; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]
  unsigned int v23; // [esp+68h] [ebp+34h]

  v16 = 1;
  SecureHandle = 0;
  v21 = 0;
  v23 = a12 & 3;
  ms_exc.registration.TryLevel = 0;
  if ( !bCaptureBitmapInfo(MaxCount, (unsigned int)&v21, v18, v19) )
    goto LABEL_17;
  if ( Address )
  {
    if ( Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)&Address[Size] > _MmUserProbeAddress || &Address[Size] < Address )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, Size, 2u);
    if ( !SecureHandle )
LABEL_17:
      v16 = 0;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v16 == 1 )
    v16 = GreSetDIBitsToDeviceInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, Address, v21, v23, Size, MaxCount, a15, a16);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v21 )
    FreeThreadBufferWithTag(v21);
  return v16;
}
