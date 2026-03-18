/*
 * XREFs of _NtGdiSetLinkedUFIs@12 @ 0x1D985F
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QAEHPAU_UNIVERSAL_FONT_ID@@I@Z @ 0x211326 (-bSetLinkedUFIs@XDCOBJ@@QAEHPAU_UNIVERSAL_FONT_ID@@I@Z.c)
 */

int __stdcall NtGdiSetLinkedUFIs(HDC a1, _BYTE *Src, unsigned int a3)
{
  unsigned int v3; // ecx
  _BYTE *v4; // esi
  unsigned int v6; // edx
  int v7; // ebx
  _DWORD v8[3]; // [esp+10h] [ebp-5Ch] BYREF
  HDC v9; // [esp+1Ch] [ebp-50h]
  unsigned int v10; // [esp+20h] [ebp-4Ch]
  int v11; // [esp+24h] [ebp-48h]
  _BYTE *v12; // [esp+28h] [ebp-44h]
  _BYTE *v13; // [esp+2Ch] [ebp-40h]
  _BYTE v14[36]; // [esp+30h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v9 = a1;
  v3 = (unsigned int)Src;
  v13 = Src;
  v10 = a3;
  v11 = 1;
  v4 = 0;
  v12 = 0;
  if ( !Src && a3 )
    return 0;
  if ( a3 <= 4 )
  {
    v4 = v14;
    v12 = v14;
  }
  else
  {
    if ( a3 <= 0x4E2000 )
    {
      v4 = PALLOCMEM2(8 * a3, 1684629063, 0);
      v12 = v4;
      v3 = (unsigned int)v13;
    }
    if ( !v4 )
      return 0;
  }
  ms_exc.registration.TryLevel = 0;
  if ( v3 )
  {
    v6 = 8 * a3;
    if ( 8 * a3 )
    {
      if ( (v3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (_BYTE *)_MmUserProbeAddress;
      if ( v6 + v3 > _MmUserProbeAddress || v6 + v3 < v3 )
        *v13 = 0;
    }
    memcpy(v4, (const void *)v3, 8 * a3);
  }
  ms_exc.registration.TryLevel = -2;
  v8[1] = 0;
  v8[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v8, v9);
  if ( v8[0] )
  {
    v7 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)v8, (struct _UNIVERSAL_FONT_ID *)v4, a3);
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  else
  {
    v7 = v11;
  }
  if ( v4 != v14 )
    Win32FreePool(v4);
  return v7;
}
