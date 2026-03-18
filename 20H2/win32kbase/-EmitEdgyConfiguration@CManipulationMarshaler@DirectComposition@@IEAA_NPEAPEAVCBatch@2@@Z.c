/*
 * XREFs of ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DE32C
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DE5A0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x94uLL, (void **)&v7) )
    {
      v4 = v7;
      *v7 = 148;
      v5 = v4 + 1;
      memset(v4 + 1, 0, 0x90uLL);
      *v5 = 260;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *(_DWORD *)(*((_QWORD *)this + 35) + 24LL);
      memmove(v5 + 4, (char *)this + 152, *((unsigned int *)this + 37));
      v5[3] = *((_DWORD *)this + 37);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
