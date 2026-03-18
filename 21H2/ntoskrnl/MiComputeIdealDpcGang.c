/*
 * XREFs of MiComputeIdealDpcGang @ 0x1405BFFD0
 * Callers:
 *     MiInitializeDpcGang @ 0x1405C04D4 (MiInitializeDpcGang.c)
 * Callees:
 *     MiGetClosestNodeWithProcessors @ 0x14026367C (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall MiComputeIdealDpcGang(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  unsigned int ClosestNodeWithProcessors; // eax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // r9
  int i; // r10d
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF
  USHORT Count; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  Affinity = 0LL;
  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(a2);
  v7 = ClosestNodeWithProcessors < (unsigned __int16)KeNumberNodes ? ClosestNodeWithProcessors : 0;
  *(_DWORD *)(a1 + 192) = v7;
  KeQueryNodeActiveAffinity(v7, &Affinity, &Count);
  v8 = 0;
  *(struct _GROUP_AFFINITY *)(a1 + 200) = Affinity;
  v9 = 0LL;
  for ( i = *(_DWORD *)((~a3 & 4 | 0x40LL) + *(_QWORD *)(120 * v4 + qword_140C506E0 + 112));
        (unsigned int)v9 < (unsigned int)KeNumberProcessors_0;
        v9 = (unsigned int)(v9 + 1) )
  {
    v11 = KiProcessorBlock[v9];
    if ( *(unsigned __int8 *)(v11 + 208) == Affinity.Group )
    {
      v12 = *(_QWORD *)(v11 + 34912);
      if ( (v12 & Affinity.Mask) != 0 )
      {
        ++v8;
        if ( i )
        {
          if ( v8 == i )
            break;
        }
        Affinity.Mask &= ~v12;
        if ( !Affinity.Mask )
          break;
      }
    }
  }
  return v8;
}
