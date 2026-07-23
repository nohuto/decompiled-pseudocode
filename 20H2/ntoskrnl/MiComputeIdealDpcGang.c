/*
 * XREFs of MiComputeIdealDpcGang @ 0x14055E5EC
 * Callers:
 *     MiInitializeDpcGang @ 0x14055EA80 (MiInitializeDpcGang.c)
 * Callees:
 *     MiGetClosestNodeWithProcessors @ 0x140337B1C (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x14033F590 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall MiComputeIdealDpcGang(__int64 a1, unsigned int a2)
{
  unsigned int ClosestNodeWithProcessors; // eax
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rdx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF
  USHORT Count; // [rsp+40h] [rbp+8h] BYREF

  Affinity = 0LL;
  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(a2);
  v4 = ClosestNodeWithProcessors < (unsigned __int16)KeNumberNodes ? ClosestNodeWithProcessors : 0;
  *(_DWORD *)(a1 + 192) = v4;
  KeQueryNodeActiveAffinity(v4, &Affinity, &Count);
  v5 = 0;
  v6 = 0;
  for ( *(_GROUP_AFFINITY *)(a1 + 200) = Affinity; v6 < (unsigned int)KeNumberProcessors_0; ++v6 )
  {
    v7 = KiProcessorBlock[v6];
    if ( *(unsigned __int8 *)(v7 + 208) == Affinity.Group )
    {
      v8 = *(_QWORD *)(v7 + 33880);
      if ( (v8 & Affinity.Mask) != 0 )
      {
        ++v5;
        Affinity.Mask &= ~v8;
        if ( !Affinity.Mask )
          break;
      }
    }
  }
  return v5;
}
