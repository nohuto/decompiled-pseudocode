/*
 * XREFs of ??$EraseIndexList@MV?$allocator@M@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@MV?$allocator@M@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801DDBBC
 * Callers:
 *     ?EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801E15CC (-EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV-$vector@HV-$allocator@H@std.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
        __int64 a1,
        __int64 *a2,
        char **a3)
{
  char *v3; // r11
  __int64 v4; // r10
  unsigned __int64 v6; // r9
  _DWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // xmm0_4

  v3 = *a3;
  v4 = 0LL;
  v6 = (unsigned __int64)(a3[1] - *a3 + 3) >> 2;
  if ( *a3 > a3[1] )
    v6 = 0LL;
  if ( v6 )
  {
    v7 = (_DWORD *)a2[1];
    do
    {
      v8 = *(int *)v3;
      --v7;
      v9 = *a2;
      v3 += 4;
      ++v4;
      a2[1] = (__int64)v7;
      result = (unsigned int)*v7;
      v11 = *(_DWORD *)(v9 + 4 * v8);
      *(_DWORD *)(v9 + 4 * v8) = result;
      *v7 = v11;
    }
    while ( v4 != v6 );
  }
  return result;
}
