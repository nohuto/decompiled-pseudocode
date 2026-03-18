/*
 * XREFs of ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B7D5C
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B7B60 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 36;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_OWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 236;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 60);
      *(_QWORD *)(v4 + 20) = *((_QWORD *)this + 33);
      v4[28] = (*((_BYTE *)this + 296) & 1) == 0;
      *((_DWORD *)this + 4) |= 0x800u;
      *((_BYTE *)this + 296) |= 1u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
