/*
 * XREFs of _NtGdiCreateDIBitmapInternal@44 @ 0x74B78
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     ?bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z @ 0x76FC6 (-bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreCreateDIBitmapComp@44 @ 0x226A90 (_GreCreateDIBitmapComp@44.c)
 */

int __stdcall NtGdiCreateDIBitmapInternal(
        int a1,
        int a2,
        int a3,
        char a4,
        char *Address,
        char *a6,
        int a7,
        size_t MaxCount,
        SIZE_T Size,
        int a10,
        int a11)
{
  int v11; // esi
  char *v12; // ecx
  int DIBitmapReal; // eax
  unsigned int v15; // [esp+0h] [ebp-34h]
  struct tagBITMAPINFO **v16; // [esp+4h] [ebp-30h]
  HANDLE SecureHandle; // [esp+10h] [ebp-24h]
  unsigned int v18; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v18 = 0;
  v11 = 1;
  SecureHandle = 0;
  v12 = a6;
  if ( a6 && MaxCount )
  {
    ms_exc.registration.TryLevel = 0;
    if ( !bCaptureBitmapInfo(MaxCount, (unsigned int)&v18, v15, v16) )
      goto LABEL_15;
    v12 = Address;
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
LABEL_15:
        v11 = 0;
    }
    ms_exc.registration.TryLevel = -2;
  }
  if ( v11 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal(Address, v18, a7, MaxCount, Size, 0, 0, 0, 0, 0, 0);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a3, a4, Address, v18, a7, MaxCount, Size, v12, a11);
    v11 = DIBitmapReal;
  }
  if ( v18 )
    FreeThreadBufferWithTag(v18);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  return v11;
}
