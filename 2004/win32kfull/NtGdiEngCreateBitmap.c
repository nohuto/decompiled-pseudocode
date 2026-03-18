/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C014F780
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C014F93C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0289310 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, unsigned int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  __int64 v9; // rdx
  unsigned int v10; // rcx^4
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  FLONG v13; // esi
  __int64 v14; // rdx
  struct _EPROCESS *CurrentProcess; // rax
  char *v17; // rcx
  struct _EPROCESS *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  BOOL v21; // [rsp+30h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-50h]

  Bitmap = 0LL;
  SecureHandle = 0LL;
  v21 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl, 1) )
    return 0LL;
  v12 = v11 * v10;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1103);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v13 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v12 )
    {
      v17 = &Address[(unsigned int)v12];
      if ( (unsigned __int64)v17 > MmUserProbeAddress || v17 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v12, 4u);
    v21 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v18 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11),
            !(unsigned int)bIsProcessLocalSystem(v18)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed su"
              "rface without input buffer\n",
              1139);
          v21 = 0;
        }
      }
    }
    v13 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v13 |= 0x80u;
  }
  if ( v21 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000, v13, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      LOBYTE(v14) = 5;
      v19 = HmgShareLockCheck(Bitmap, v14);
      v20 = v19;
      if ( v19 )
      {
        *(_QWORD *)(v19 + 144) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      if ( v20 )
        DEC_SHARE_REF_CNT(v20);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
