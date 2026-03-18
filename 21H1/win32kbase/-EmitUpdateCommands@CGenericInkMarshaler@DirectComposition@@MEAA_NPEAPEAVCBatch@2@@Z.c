/*
 * XREFs of ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E53B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef8826___ @ 0x1C01E4F90 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef882.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cb47ebec638499e6e26b2d9b266e2e6d___ @ 0x1C01E5024 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_cb47ebec638499e6e26b2d9b266e2e6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0d___ @ 0x1C01E50C4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E5230 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // di
  unsigned int v5; // ebp
  unsigned int *v6; // rcx
  int v7; // eax
  unsigned int *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
  {
    v5 = *((_DWORD *)this + 20) + 12;
    v9 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v5, (void **)&v9) )
      return v2;
    v6 = v9;
    *v9 = v5;
    *(_QWORD *)(v6 + 1) = 0LL;
    v6[1] = 157;
    v6[2] = *((_DWORD *)this + 6);
    memmove(v6 + 3, *((const void **)this + 7), *((_QWORD *)this + 10) * *((_QWORD *)this + 11));
    *((_DWORD *)this + 4) |= 0x20u;
  }
  if ( DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(this, a2) )
  {
    v7 = *((_DWORD *)this + 4);
    v9 = (unsigned int *)this;
    if ( (v7 & 0x80u) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0d___(
              (__int64)this,
              a2,
              (__int64)&v9) )
        return v2;
      *((_DWORD *)this + 4) |= 0x80u;
      v7 = *((_DWORD *)this + 4);
    }
    v9 = (unsigned int *)this;
    if ( (v7 & 0x100) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef8826___(
              (__int64)this,
              a2,
              (__int64 *)&v9) )
        return v2;
      *((_DWORD *)this + 4) |= 0x100u;
      v7 = *((_DWORD *)this + 4);
    }
    v9 = (unsigned int *)this;
    if ( (v7 & 0x200) != 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cb47ebec638499e6e26b2d9b266e2e6d___(
           (__int64)this,
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      return 1;
    }
  }
  return v2;
}
