/*
 * XREFs of ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0039D28
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0039A40 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00A2A94 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchpadConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch **a2)
{
  int i; // ecx
  unsigned int v5; // eax
  bool v6; // zf
  void *v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  char *v11; // rdx
  _QWORD *v12; // r9
  unsigned int j; // r8d
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_DWORD *)this + 3); ; i = *((_DWORD *)this + 3) )
  {
    v5 = *((_DWORD *)this + 14);
    if ( (i & 8) == 0 )
    {
      v6 = v5 == *((_DWORD *)this + 12);
      if ( v5 >= *((_DWORD *)this + 12) )
        break;
    }
    v8 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v16 = v8;
    if ( (unsigned __int64)v8 < 0x24 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v16) )
        return *((_DWORD *)this + 14) == *((_DWORD *)this + 12);
      v8 = v16;
    }
    v9 = (unsigned int)(*((_DWORD *)this + 12) - *((_DWORD *)this + 14));
    v10 = ((unsigned __int64)v8 - 24) / 0xC;
    if ( v9 >= v10 )
      LODWORD(v9) = v10;
    v16 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * (v9 + 2)), &v16);
    v11 = (char *)v16;
    *(_DWORD *)v16 = 12 * (v9 + 2);
    v12 = v11 + 24;
    *(_OWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 5) = 0;
    *((_DWORD *)v11 + 1) = 204;
    *((_DWORD *)v11 + 2) = *(_DWORD *)(*(_QWORD *)this + 24LL);
    *((_DWORD *)v11 + 3) = v9;
    *((_DWORD *)v11 + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)v11 + 5) = 2;
    if ( *((_DWORD *)this + 12) )
    {
      for ( j = 0; j < (unsigned int)v9; *((_DWORD *)v12 - 1) = *(_DWORD *)(v15 + 8) )
      {
        v14 = j + *((_DWORD *)this + 14);
        ++j;
        v15 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v14);
        *v12 = *(_QWORD *)v15;
        v12 = (_QWORD *)((char *)v12 + 12);
      }
    }
    *((_DWORD *)this + 3) &= ~8u;
    *((_DWORD *)this + 14) += v9;
  }
  return v6;
}
