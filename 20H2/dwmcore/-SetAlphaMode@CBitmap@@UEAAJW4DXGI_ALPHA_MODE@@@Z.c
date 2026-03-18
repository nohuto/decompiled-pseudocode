/*
 * XREFs of ?SetAlphaMode@CBitmap@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1800E9900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBitmap::SetAlphaMode(CBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 43) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\bitmaps\\Bitmap.h",
      (const char *)0x88982F04LL,
      v3);
    return 2291674884LL;
  }
  else
  {
    *((_DWORD *)this + 41) = a2;
    return 0LL;
  }
}
