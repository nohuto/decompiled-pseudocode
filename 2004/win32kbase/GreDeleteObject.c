/*
 * XREFs of GreDeleteObject @ 0x1C007EEA0
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0013054 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C001307C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0013354 (-UpdateUserScreen@@YAJXZ.c)
 *     UserSetDCVisRgn @ 0x1C0013EE0 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C0014070 (UserValidateCopyRgn.c)
 *     DestroyMonitor @ 0x1C0019D20 (DestroyMonitor.c)
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     DeleteMaybeSpecialRgn @ 0x1C007B8B0 (DeleteMaybeSpecialRgn.c)
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C007EFD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     bDeleteSurface @ 0x1C00C0E40 (bDeleteSurface.c)
 *     bDeletePalette @ 0x1C00C0ED0 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDeleteObject(HPALETTE a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+30h] [rbp-18h]

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 3;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          if ( v6 != 6 )
            return 0LL;
          return bDeleteBrush((HBRUSH)a1);
        }
        else
        {
          v11 = 0;
          if ( qword_1C0251158 )
            v12 = qword_1C0251158();
          else
            v12 = -1073741637;
          if ( v12 >= 0 )
          {
            if ( qword_1C0251160 )
              return (unsigned int)qword_1C0251160(a1, 0LL);
          }
          return v11;
        }
      }
      else
      {
        return bDeletePalette(a1);
      }
    }
    else
    {
      return bDeleteSurface(a1);
    }
  }
  else
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, (HRGN)a1, 0);
    v8 = v13[0];
    if ( !v13[0]
      || *(_DWORD *)(v13[0] + 32LL)
      || (v9 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v13), v8 = v13[0], v10 = 1, !v9) )
    {
      v10 = 0;
    }
    if ( !v14 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v13);
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    return v10;
  }
}
