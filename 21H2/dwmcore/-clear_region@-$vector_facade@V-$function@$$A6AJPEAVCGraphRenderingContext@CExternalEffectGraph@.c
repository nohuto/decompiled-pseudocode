/*
 * XREFs of ?clear_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180031750
 * Callers:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x180031618 (--1CExternalEffectGraph@@MEAA@XZ.c)
 * Callees:
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x1800328B8 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 *     ??$move@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B2E1C (--$move@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@.c)
 */

__int64 __fastcall detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v6 = *a1;
  v7 = (a1[1] - v6) >> 6;
  if ( a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_6;
  }
  v3 = v6 + (v7 << 6);
  if ( a3 != v7 )
  {
LABEL_6:
    v11 = 0LL;
    *(_QWORD *)&v10 = v6;
    v8 = a3 << 6;
    *((_QWORD *)&v10 + 1) = v7;
    v13 = 0LL;
    v12 = v10;
    ((void (__fastcall *)(__int128 *, unsigned __int64, __int64, __int128 *))std::move<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>)(
      &v10,
      v8 + v6,
      v3,
      &v12);
    goto LABEL_4;
  }
  v8 = a3 << 6;
LABEL_4:
  result = detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(v3 - v8, v3);
  a1[1] -= v8;
  return result;
}
