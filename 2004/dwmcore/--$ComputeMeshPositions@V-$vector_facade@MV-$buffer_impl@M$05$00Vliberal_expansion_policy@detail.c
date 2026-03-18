/*
 * XREFs of ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x1800D2434
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x1800824F8 (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 */

float *__fastcall CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        float **a1,
        __int64 *a2,
        __int64 *a3,
        float *a4,
        float a5)
{
  __int64 v8; // rcx

  CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (__int64)a1,
    a1,
    a2,
    *a4,
    a4[2],
    a5);
  return CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
           v8,
           a1 + 23,
           a3,
           a4[1],
           a4[3],
           a5);
}
