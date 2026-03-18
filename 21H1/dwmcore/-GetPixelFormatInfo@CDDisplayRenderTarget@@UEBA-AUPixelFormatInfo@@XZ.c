/*
 * XREFs of ?GetPixelFormatInfo@CDDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180172E4C
 * Callers:
 *     ?GetPixelFormatInfo@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800EC520 (-GetPixelFormatInfo@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // xmm0_8
  int v4; // eax

  v2 = *(_QWORD *)(a1 - 18488);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 240);
    v4 = *(_DWORD *)(v2 + 248);
  }
  else
  {
    v3 = *(_QWORD *)(a1 - 18568);
    v4 = *(_DWORD *)(a1 - 18560);
  }
  *(_QWORD *)a2 = v3;
  *(_DWORD *)(a2 + 8) = v4;
  return a2;
}
