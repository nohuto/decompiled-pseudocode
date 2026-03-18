/*
 * XREFs of ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DF2B0
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DF430 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00A2A94 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C01DF550 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 *     ?NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ @ 0x1C01DF574 (-NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CGenericInkMarshaler *v4; // rcx
  unsigned int SegmentCount; // ebp
  unsigned __int64 v7; // rcx
  void *v8; // rax
  int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  unsigned int v12; // ebx
  char *v13; // r9
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  void *v18; // [rsp+50h] [rbp+18h] BYREF

  if ( !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this) )
    return 1;
  SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(v4);
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 17) + 28LL;
    v8 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v18 = v8;
    if ( (unsigned __int64)v8 < v7 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v18) )
        return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
      v8 = v18;
    }
    v9 = *((_DWORD *)this + 34);
    v10 = ((unsigned __int64)v8 - 28) / *((_QWORD *)this + 17);
    v11 = SegmentCount - *((_DWORD *)this + 37);
    if ( v11 >= (unsigned int)v10 )
      v11 = v10;
    v18 = 0LL;
    v12 = v11 * v9 + 28;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, v12, &v18) )
      break;
    v13 = (char *)v18;
    *(_DWORD *)v18 = v12;
    v14 = *((_DWORD *)this + 37);
    *(_OWORD *)(v13 + 4) = 0LL;
    *(_QWORD *)(v13 + 20) = 0LL;
    v15 = v11 + v14;
    *((_DWORD *)v13 + 1) = 159;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v13 + 3) = *((_DWORD *)this + 37);
    *((_DWORD *)v13 + 4) = v11;
    *((_DWORD *)v13 + 6) = *((_DWORD *)this + 39);
    v16 = *((_DWORD *)this + 36);
    v17 = v16;
    if ( v16 <= v15 )
      v17 = v15;
    *((_DWORD *)v13 + 5) = v17 - v16;
    memmove(
      v13 + 28,
      (const void *)(*((_QWORD *)this + 12)
                   + *((_QWORD *)this + 17) * *((_QWORD *)this + 16) * *((unsigned int *)this + 37)),
      *((_QWORD *)this + 17) * *((_QWORD *)this + 16) * v11);
    *((_BYTE *)this + 152) = 0;
    *((_DWORD *)this + 37) = v15;
    if ( v15 == SegmentCount )
    {
      *((_DWORD *)this + 4) |= 0x40u;
      return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
    }
  }
  return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
}
