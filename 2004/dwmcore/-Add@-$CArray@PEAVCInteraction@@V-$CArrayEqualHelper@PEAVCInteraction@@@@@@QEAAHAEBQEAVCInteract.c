/*
 * XREFs of ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801C72E8
 * Callers:
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801C8680 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800B4870 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  int v5; // ebp
  int v6; // ebx
  char *v7; // rax
  char *v8; // rdx

  v2 = dword_180349458;
  v4 = 1;
  v5 = dword_180349458 + 1;
  if ( dword_180349458 + 1 <= 0 )
    return 0;
  if ( dword_180349458 == dword_18034945C )
  {
    if ( dword_180349458 <= 0x3FFFFFFF && (unsigned __int64)dword_180349458 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v6 = 2;
      if ( dword_18034945C >= 2 )
        v6 = dword_180349458 + (dword_180349458 >> 1);
      v7 = (char *)(dword_180349458
                  ? DefaultHeap::Realloc(CInteraction::s_DefaultStateLockedInteractions, 8LL * v6)
                  : DefaultHeap::AllocClear(8LL * v6));
      if ( v7 )
      {
        dword_18034945C = v6;
        CInteraction::s_DefaultStateLockedInteractions = v7;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v7 = (char *)CInteraction::s_DefaultStateLockedInteractions;
LABEL_14:
  v8 = &v7[8 * v2];
  dword_180349458 = v5;
  if ( v8 )
    *(_QWORD *)v8 = *a2;
  return v4;
}
