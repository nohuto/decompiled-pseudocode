/*
 * XREFs of ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00070D8
 * Callers:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C000701C (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C000726C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00073B0 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacyTokenBuffer::Reset(CLegacyTokenBuffer *this)
{
  char *v2; // rdi
  char **v3; // rax
  char **v4; // rcx

  v2 = (char *)this + 16;
  while ( 1 )
  {
    v3 = (char **)*((_QWORD *)v2 + 1);
    if ( *v3 != v2 || (v4 = (char **)v3[1], *v4 != (char *)v3) )
      __fastfail(3u);
    *((_QWORD *)v2 + 1) = v4;
    *v4 = v2;
    if ( v3 == (char **)v2 )
      break;
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 521) = 0;
  *((_QWORD *)this + 262) = (char *)this + 36;
  *((_QWORD *)this + 261) = v2;
  *((_DWORD *)this + 526) = 2048;
  *((_BYTE *)this + 2108) = 0;
}
