/*
 * XREFs of _NtGdiDrawEscape@16 @ 0x21241D
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 */

int __stdcall NtGdiDrawEscape(HDC a1, int a2, signed int MaxCount, char *Src)
{
  int v4; // ebx
  HANDLE SecureHandle; // [esp+14h] [ebp-68h]
  char *v7; // [esp+1Ch] [ebp-60h]
  _BYTE v8[68]; // [esp+20h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v4 = 0;
  v7 = Src;
  SecureHandle = 0;
  if ( MaxCount < 0 )
    return -1;
  if ( Src )
  {
    if ( MaxCount > 64 || (int)((MaxCount + 3) & 0xFFFFFFFC) > 64 )
    {
      SecureHandle = MmSecureVirtualMemory(Src, MaxCount, 2u);
      if ( !SecureHandle )
        v4 = -1;
    }
    else
    {
      v7 = v8;
      ms_exc.registration.TryLevel = 0;
      if ( &Src[MaxCount] < Src || (unsigned int)&Src[MaxCount] > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v8, Src, MaxCount);
      ms_exc.registration.TryLevel = -2;
    }
    if ( v4 >= 0 )
      v4 = GreDrawEscape(a1, a2, MaxCount, (int)v7);
    if ( SecureHandle )
      MmUnsecureVirtualMemory(SecureHandle);
  }
  else if ( MaxCount )
  {
    return -1;
  }
  else
  {
    return GreDrawEscape(a1, a2, 0, 0);
  }
  return v4;
}
