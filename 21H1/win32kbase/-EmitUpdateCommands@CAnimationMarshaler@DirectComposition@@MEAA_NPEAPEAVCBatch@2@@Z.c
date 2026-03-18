/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C0370
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C0470 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C04C4 (-EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C04EC (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C055C (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C05E4 (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C0658 (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C06F4 (-EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CAnimationMarshaler *v2; // rsi
  char v5; // r14
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  void *v12; // [rsp+40h] [rbp+20h] BYREF

  v2 = (DirectComposition::CAnimationMarshaler *)((char *)this - 16);
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return 0;
    v7 = (char *)v12;
    *(_DWORD *)v12 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 4;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 54);
    *((_DWORD *)this + 4) &= ~0x20000u;
  }
  if ( !DirectComposition::CAnimationMarshaler::EmitBeginTime(v2, (struct DirectComposition::CBatch **)a2) )
    return 0;
  if ( *((_QWORD *)this + 17) )
  {
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      v12 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v12) )
      {
        v8 = (char *)v12;
        *(_DWORD *)v12 = 28;
        *(_OWORD *)(v8 + 4) = 0LL;
        *(_QWORD *)(v8 + 20) = 0LL;
        *((_DWORD *)v8 + 1) = 11;
        *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
        *(_OWORD *)(v8 + 12) = *(_OWORD *)*((_QWORD *)this + 17);
        *((_DWORD *)this + 4) |= 0x200u;
      }
    }
    if ( *((_QWORD *)this + 17) && (*((_DWORD *)this + 4) & 0x200) == 0 )
      return 0;
  }
  if ( *((_QWORD *)this + 16) && (*((_DWORD *)this + 4) & 0x400) == 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return 0;
    v9 = (char *)v12;
    *(_DWORD *)v12 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 7;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v9 + 3) = *(_DWORD *)(*((_QWORD *)this + 16) + 24LL);
    *((_DWORD *)this + 4) |= 0x400u;
  }
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPrimitives(v2, (struct DirectComposition::CBatch **)a2) )
    return 0;
  v5 = 1;
  if ( !*((_DWORD *)this + 37) || (*((_DWORD *)this + 4) & 0x800) != 0 )
    goto LABEL_7;
  v12 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v12) )
    return 0;
  v10 = (char *)v12;
  *(_DWORD *)v12 = 60;
  *(_OWORD *)(v10 + 4) = 0LL;
  *(_OWORD *)(v10 + 20) = 0LL;
  *(_OWORD *)(v10 + 36) = 0LL;
  *(_QWORD *)(v10 + 52) = 0LL;
  *((_DWORD *)v10 + 1) = 5;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v10 + 3) = *((_DWORD *)this + 37);
  *(_QWORD *)(v10 + 20) = *((_QWORD *)this + 19);
  v11 = *((_QWORD *)this + 20);
  if ( v11 )
    LODWORD(v11) = *(_DWORD *)(v11 + 40);
  *((_DWORD *)v10 + 7) = v11;
  *((_DWORD *)v10 + 8) = *((_DWORD *)this + 42);
  v10[36] = *((_BYTE *)this + 192) & 1;
  *(_QWORD *)(v10 + 44) = *((_QWORD *)this + 22);
  *(_QWORD *)(v10 + 52) = *((_QWORD *)this + 23);
  *((_DWORD *)this + 4) |= 0x800u;
LABEL_7:
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPaused(v2, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetSeek(v2, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetInstance(v2, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitClearTimeEvents(v2, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(v2, (struct DirectComposition::CBatch **)a2) )
  {
    return 0;
  }
  return v5;
}
