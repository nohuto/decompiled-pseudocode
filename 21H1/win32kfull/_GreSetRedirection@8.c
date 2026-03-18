/*
 * XREFs of _GreSetRedirection@8 @ 0x20B6C
 * Callers:
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 * Callees:
 *     <none>
 */

int __fastcall GreSetRedirection(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // edx

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 5;
  v4 = HmgShareLockCheck(a1, a2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 76);
    v6 = *(_DWORD *)(v4 + 72);
    if ( v2 )
    {
      v7 = v5 | 0x80;
      v8 = v6 | 0x800;
    }
    else
    {
      v7 = v5 & 0xFFFFFF7F;
      v8 = v6 & 0xFFFFF7FF;
    }
    *(_DWORD *)(v4 + 72) = v8;
    *(_DWORD *)(v4 + 76) = v7;
    v3 = 1;
    DEC_SHARE_REF_CNT(v4);
  }
  return v3;
}
