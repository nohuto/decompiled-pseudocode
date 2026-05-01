/*
 * XREFs of ?RemoveItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z @ 0x1803B8398
 * Callers:
 *     ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1803A7FA0 (-RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803934FC (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 */

__int64 __fastcall GridLayout::RemoveItem(__int64 a1, struct IUnknown **a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  _QWORD *i; // rbx
  unsigned __int64 v6; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v4 = v2 + 56LL * *(_QWORD *)(a1 + 56);
  if ( v2 == v4 )
    return 2147943568LL;
  for ( i = (_QWORD *)(v2 + 24); ; i += 7 )
  {
    if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                i,
                (__int64)a2,
                a2,
                &v9) >= 0 )
    {
      v6 = v9;
      if ( v9 < i[1] )
        break;
    }
    v2 += 56LL;
    if ( v2 == v4 )
      return 2147943568LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*i + 8 * v9));
  v8 = i[1];
  if ( v6 != v8 - 1 )
  {
    memmove_0((void *)(*i + 8 * v6), (const void *)(*i + 8 * v6 + 8), 8 * (v8 - v6) - 8);
    v8 = i[1];
  }
  i[1] = v8 - 1;
  return 0LL;
}
