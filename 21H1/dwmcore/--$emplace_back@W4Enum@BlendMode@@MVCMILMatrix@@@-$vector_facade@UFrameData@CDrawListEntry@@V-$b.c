/*
 * XREFs of ??$emplace_back@W4Enum@BlendMode@@MVCMILMatrix@@@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXW4Enum@BlendMode@@MVCMILMatrix@@@Z @ 0x1801A57D0
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801A6480 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ??$emplace@W4Enum@BlendMode@@MVCMILMatrix@@@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@1@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@1@W4Enum@BlendMode@@MVCMILMatrix@@@Z @ 0x1801A5724 (--$emplace@W4Enum@BlendMode@@MVCMILMatrix@@@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::emplace_back<enum BlendMode::Enum,float,CMILMatrix>(
        _QWORD *a1,
        int a2,
        float a3,
        __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v10[4]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_OWORD *)a4;
  v5 = *(_OWORD *)(a4 + 16);
  v12 = a1[1];
  v6 = *(_DWORD *)(a4 + 64);
  v10[0] = v4;
  v7 = *(_OWORD *)(a4 + 32);
  v11 = v6;
  v10[1] = v5;
  v8 = *(_OWORD *)(a4 + 48);
  v10[2] = v7;
  v10[3] = v8;
  return detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::emplace<enum BlendMode::Enum,float,CMILMatrix>(
           a1,
           &v13,
           &v12,
           a2,
           SLODWORD(a3),
           v10);
}
