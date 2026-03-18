/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0005F20
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00058E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0008350 (GreSetSolidBrushLight.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C008BAD0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A8AF8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C00313A0 (EngFreeUserMem.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  __int64 v2; // rbx
  int v3; // esi
  struct RBRUSH **v4; // rdi
  int v5; // eax

  v2 = (__int64)a1;
  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = &gpCachedEngbrush;
    }
    else
    {
      v3 = a1[2];
      v4 = &gpCachedDbrush;
      if ( v3 )
      {
        v5 = qword_1C02575E0 ? qword_1C02575E0() : -1073741637;
        if ( v5 >= 0 && qword_1C02575E8 )
          qword_1C02575E8(v2 + 16);
      }
    }
    if ( *v4 || v3 == 1 || (v2 = _InterlockedExchange64((volatile __int64 *)v4, v2)) != 0 )
      Win32FreePool(v2);
  }
}
