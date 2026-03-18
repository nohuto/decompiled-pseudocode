/*
 * XREFs of PsLocateSystemDlls @ 0x140781030
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x1403AB100 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x1407810B8 (PspLocateSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  _QWORD *v0; // rdi
  __int64 v1; // rsi
  int i; // ebx
  int SystemDll; // eax

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = &PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags() & 4;
    for ( i = 0; i < 6; ++i )
    {
      if ( *v0 )
      {
        SystemDll = PspLocateSystemDll(*v0, (*(_DWORD *)(*v0 + 16LL) & 0x10) != 0 ? (unsigned int)v1 : 0);
        if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 16LL) & 1) != 0 )
          KeBugCheckEx(0x6Bu, SystemDll, 2uLL, i, 0LL);
      }
      ++v0;
    }
  }
  return 0LL;
}
