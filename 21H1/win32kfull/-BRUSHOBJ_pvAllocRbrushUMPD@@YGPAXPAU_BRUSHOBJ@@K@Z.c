/*
 * XREFs of ?BRUSHOBJ_pvAllocRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@K@Z @ 0x1CC645
 * Callers:
 *     _NtGdiBRUSHOBJ_pvAllocRbrush@8 @ 0x217087 (_NtGdiBRUSHOBJ_pvAllocRbrush@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void *__fastcall BRUSHOBJ_pvAllocRbrushUMPD(int a1, unsigned int a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // esi
  _DWORD *v5; // eax
  int v6; // [esp+10h] [ebp-24h]

  v2 = (_DWORD *)(a1 + 4);
  v6 = a1 + 4;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    v3 = a2 + 16;
    if ( a2 + 16 < a2 )
      return 0;
    v5 = EngAllocUserMem(a2 + 16, 0x706D7547u);
    if ( v5 )
    {
      v5[1] = v3;
      v5[2] = 0;
      v5[3] = 1;
      *v2 = v5 + 4;
    }
  }
  return *(void **)v6;
}
