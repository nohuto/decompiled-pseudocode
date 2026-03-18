/*
 * XREFs of ?EmitInjections@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E6634
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E67F0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitInjections(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // r8
  char *v5; // rdx
  _OWORD **v6; // rax
  _OWORD *v7; // rcx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 34) )
    return 1;
  v12 = 0LL;
  while ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x8CuLL, &v12) )
  {
    v5 = (char *)v12;
    *(_DWORD *)v12 = 140;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 1) = 258;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = (_OWORD **)*((_QWORD *)this + 16);
    v7 = *v6;
    *(_OWORD *)(v5 + 12) = **v6;
    *(_OWORD *)(v5 + 28) = v7[1];
    *(_OWORD *)(v5 + 44) = v7[2];
    *(_OWORD *)(v5 + 60) = v7[3];
    *(_OWORD *)(v5 + 76) = v7[4];
    *(_OWORD *)(v5 + 92) = v7[5];
    *(_OWORD *)(v5 + 108) = v7[6];
    *(_OWORD *)(v5 + 124) = v7[7];
    Win32FreePool(**((_QWORD **)this + 16), (__int64)v5, v4);
    v8 = (*((_DWORD *)this + 34))-- == 1;
    v9 = 0LL;
    if ( !v8 )
    {
      do
      {
        v10 = (unsigned int)(v9 + 1);
        *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v9) = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v10);
        v9 = v10;
      }
      while ( (unsigned int)v10 < *((_DWORD *)this + 34) );
    }
    if ( !*((_DWORD *)this + 34) )
      return 1;
  }
  return 0;
}
