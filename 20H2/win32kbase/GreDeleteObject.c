/*
 * XREFs of GreDeleteObject @ 0x1C0039BA0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     UserSetDCVisRgn @ 0x1C001F800 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C001F990 (UserValidateCopyRgn.c)
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0020514 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C002053C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0037F60 (DeleteMaybeSpecialRgn.c)
 *     DestroyMonitor @ 0x1C00B4360 (DestroyMonitor.c)
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001A650 (bDeleteSurface.c)
 *     bDeletePalette @ 0x1C001A6A0 (bDeletePalette.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0039CD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0040510 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0040820 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // ebx
  int v13; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 3;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 3;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 != 6 )
            return 0LL;
          return bDeleteBrush(a1, 0);
        }
        else
        {
          v12 = 0;
          if ( qword_1C024F158 )
            v13 = qword_1C024F158();
          else
            v13 = -1073741637;
          if ( v13 >= 0 )
          {
            if ( qword_1C024F160 )
              return (unsigned int)qword_1C024F160(a1, 0LL);
          }
          return v12;
        }
      }
      else
      {
        return bDeletePalette((HPALETTE)a1, 0);
      }
    }
    else
    {
      return bDeleteSurface((__int64)a1, a2);
    }
  }
  else
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, (HRGN)a1, 0);
    v9 = v14[0];
    if ( !v14[0]
      || *(_DWORD *)(v14[0] + 32LL)
      || (v10 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v14), v9 = v14[0], v11 = 1, !v10) )
    {
      v11 = 0;
    }
    if ( !v15 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v14);
    if ( v9 )
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
    return v11;
  }
}
