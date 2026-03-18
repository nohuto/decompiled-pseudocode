/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x18001CB68
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180055CD0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A6750 (-ensure_extra_capacity@-$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v6 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 1;
  v7 = (v6 >> 63) + v6;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7);
    __debugbreak();
    JUMPOUT(0x1800FC121LL);
  }
  v8 = *a4 + 76LL * a4[2];
  while ( v4 != a3 )
  {
    *(_OWORD *)v8 = *(_OWORD *)v4;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v4 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(v4 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(v4 + 48);
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(v4 + 64);
    *(_DWORD *)(v8 + 72) = *(_DWORD *)(v4 + 72);
    v8 += 76LL;
    v4 += 76LL;
  }
  result = a1;
  a4[2] = (v8 - *a4) / 76;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
