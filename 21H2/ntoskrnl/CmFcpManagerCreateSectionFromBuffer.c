/*
 * XREFs of CmFcpManagerCreateSectionFromBuffer @ 0x14087E7C4
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     CmFcpMapSection @ 0x1407D261C (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x14087E6D0 (CmFcpManagerCreateSection.c)
 */

__int64 __fastcall CmFcpManagerCreateSectionFromBuffer(void *Src, LARGE_INTEGER Size, __int64 a3, void *a4, __int64 a5)
{
  int Section; // edi
  size_t QuadPart; // r8
  PVOID v9; // rbx
  __int64 v10; // xmm1_8
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  PVOID MappedBase[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h]

  v13 = 0LL;
  v15 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  *(_OWORD *)MappedBase = 0LL;
  Section = CmFcpManagerCreateSection(Size, a3, a4, DmaAdapter);
  if ( Section < 0 || (Section = CmFcpMapSection(DmaAdapter, MappedBase), Section < 0) )
  {
    v9 = MappedBase[1];
  }
  else
  {
    QuadPart = Size.QuadPart;
    v9 = MappedBase[1];
    memmove(MappedBase[1], Src, QuadPart);
    Section = 0;
    v10 = v13;
    *(_OWORD *)a5 = *(_OWORD *)DmaAdapter;
    *(_QWORD *)(a5 + 16) = v10;
    *(_OWORD *)DmaAdapter = 0LL;
  }
  if ( v9 )
    MmUnmapViewInSystemSpace(v9);
  if ( DmaAdapter[1] )
    HalPutDmaAdapter(DmaAdapter[1]);
  return (unsigned int)Section;
}
