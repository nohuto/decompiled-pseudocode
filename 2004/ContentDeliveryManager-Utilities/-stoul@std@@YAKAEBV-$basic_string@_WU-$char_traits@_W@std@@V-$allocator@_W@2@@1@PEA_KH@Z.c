/*
 * XREFs of ?stoul@std@@YAKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x1800A7F60
 * Callers:
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800A7FF0 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 * Callees:
 *     ?_Xinvalid_argument@std@@YAXPEBD@Z @ 0x1800B05F8 (-_Xinvalid_argument@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x1800B0650 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::stoul(wchar_t *String, wchar_t *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v3; // edi
  wchar_t *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v2 = String;
  if ( *((_QWORD *)String + 3) >= 8uLL )
    v2 = *(const wchar_t **)String;
  *_errno() = 0;
  v3 = wcstoul(v2, &EndPtr, 10);
  if ( v2 == EndPtr )
    std::_Xinvalid_argument("invalid stoul argument");
  if ( *_errno() == 34 )
    std::_Xout_of_range("stoul argument out of range");
  return v3;
}
