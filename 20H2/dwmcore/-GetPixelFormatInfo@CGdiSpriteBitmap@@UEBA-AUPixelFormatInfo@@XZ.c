/*
 * XREFs of ?GetPixelFormatInfo@CGdiSpriteBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801C1658
 * Callers:
 *     ?GetPixelFormatInfo@CGdiSpriteBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F08A0 (-GetPixelFormatInfo@CGdiSpriteBitmap@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v3 = *(_QWORD *)(a1 - 56);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL));
    (**v4)(v4, a2);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 - 440);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 432);
  }
  return a2;
}
