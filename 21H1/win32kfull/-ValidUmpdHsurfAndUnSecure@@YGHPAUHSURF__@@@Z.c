/*
 * XREFs of ?ValidUmpdHsurfAndUnSecure@@YGHPAUHSURF__@@@Z @ 0x2167C8
 * Callers:
 *     _NtGdiEngDeleteSurface@4 @ 0x2181A3 (_NtGdiEngDeleteSurface@4.c)
 * Callees:
 *     <none>
 */

int __thiscall ValidUmpdHsurfAndUnSecure(void *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi

  v1 = HmgShareLockCheck(this, 5);
  v2 = v1;
  if ( v1 && (*(_DWORD *)(v1 + 72) & 0x40000) != 0 )
  {
    if ( *(_DWORD *)(v1 + 96) )
    {
      MmUnsecureVirtualMemory(*(HANDLE *)(v1 + 96));
      *(_DWORD *)(v2 + 96) = 0;
    }
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  return v3;
}
