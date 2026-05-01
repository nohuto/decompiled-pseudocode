/*
 * XREFs of ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1803962D4
 * Callers:
 *     ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x180396660 (-SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x180396168 (-LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEX.c)
 *     ?LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z @ 0x1803963D8 (-LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z.c)
 */

__int64 __fastcall MultitaskingViewUtils::LoadDWriteTextFormat(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        _QWORD *a9)
{
  unsigned int DWriteTextFormat; // ebx
  __int64 v14; // rdx
  unsigned int v16; // [rsp+28h] [rbp-B0h]
  _DWORD v17[7]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v18[68]; // [rsp+5Ch] [rbp-7Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  *a9 = 0LL;
  memset_0(v17, 0, 0x5CuLL);
  if ( !MultitaskingViewUtils::LoadFont((MultitaskingViewUtils *)v17, (struct tagLOGFONTW *)a2, a3, a4, a5, v16) )
  {
    DWriteTextFormat = -2147418113;
    v14 = 77LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\util.h",
      (const char *)DWriteTextFormat);
    return DWriteTextFormat;
  }
  DWriteTextFormat = DWriteUtil::LoadDWriteTextFormat(a1, (__int64)v18, v17[4], (float)-v17[0], a6, a7, a8, a9);
  if ( (DWriteTextFormat & 0x80000000) != 0 )
  {
    v14 = 86LL;
    goto LABEL_5;
  }
  return DWriteTextFormat;
}
