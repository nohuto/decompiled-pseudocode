/*
 * XREFs of _NtGdiEngCreateBitmap@24 @ 0x217CD3
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YGHUtagSIZE@@_N@Z @ 0x21680C (-ValidUmpdSizl@@YGHUtagSIZE@@_N@Z.c)
 */

HBITMAP __stdcall NtGdiEngCreateBitmap(SIZEL sizl, unsigned int lWidth, unsigned int a3, FLONG fl, PVOID Address)
{
  HANDLE v5; // edi
  BOOL v6; // ebx
  struct _KPROCESS *CurrentProcess; // eax
  int v8; // edx
  struct _KPROCESS *v9; // eax
  PKTHREAD CurrentThread; // eax
  HBITMAP Bitmap; // ebx
  int v12; // eax
  int v13; // esi
  bool v15; // [esp+0h] [ebp-38h]
  ULONG *v16; // [esp+0h] [ebp-38h]
  FLONG fla; // [esp+50h] [ebp+18h]

  v5 = 0;
  v6 = 1;
  if ( !ValidUmpdSizl(1, sizl, v15) || ULongLongToULong(lWidth * (unsigned __int64)(unsigned int)sizl.cy, v16) < 0 )
    return 0;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(), !bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (fl & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1103);
        fl &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    fla = fl & 0xFFFFFFF7;
    v5 = MmSecureVirtualMemory(Address, 0, 4u);
    v6 = v5 != 0;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel || (v9 = (struct _KPROCESS *)PsGetCurrentProcess(), !bIsProcessLocalSystem(v9)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            _DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed su"
              "rface without input buffer\n",
              1139);
          v6 = 0;
        }
      }
    }
    fla = fl | 8;
    CurrentThread = KeGetCurrentThread();
    if ( *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 36) )
      fla |= 0x80u;
  }
  if ( v6 )
    Bitmap = EngCreateBitmap(sizl, lWidth, a3 | 0x8000, fla, Address);
  else
    Bitmap = 0;
  if ( v5 )
  {
    if ( Bitmap )
    {
      LOBYTE(v8) = 5;
      v12 = HmgShareLockCheck(Bitmap, v8);
      v13 = v12;
      if ( v12 )
      {
        *(_DWORD *)(v12 + 96) = v5;
      }
      else
      {
        MmUnsecureVirtualMemory(v5);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0;
      }
      if ( v13 )
        DEC_SHARE_REF_CNT(v13);
    }
    else
    {
      MmUnsecureVirtualMemory(v5);
    }
  }
  return Bitmap;
}
