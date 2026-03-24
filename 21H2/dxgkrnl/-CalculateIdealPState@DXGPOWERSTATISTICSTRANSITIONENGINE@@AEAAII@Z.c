/*
 * XREFs of ?CalculateIdealPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAII@Z @ 0x1C00477B0
 * Callers:
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C004783C (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::CalculateIdealPState(
        DXGPOWERSTATISTICSTRANSITIONENGINE *this,
        unsigned int a2)
{
  unsigned int *v2; // rdi
  unsigned __int64 v3; // r11
  unsigned int v4; // r10d
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8

  v2 = (unsigned int *)*((_QWORD *)this + 2);
  v3 = -1LL;
  v4 = *v2;
  LODWORD(v5) = *v2;
  v6 = a2 * (unsigned __int64)v2[*((unsigned int *)this + 14) + 1] / *(unsigned int *)(*(_QWORD *)this + 4228LL);
  if ( !*v2 )
    return 0LL;
  while ( 1 )
  {
    v7 = v5;
    v5 = (unsigned int)(v5 - 1);
    v8 = v2[v5 + 1];
    v9 = v8 - v6;
    if ( v8 <= v6 )
      v9 = v6 - v8;
    if ( v9 >= v3 )
      break;
    v3 = v9;
    if ( !(_DWORD)v5 )
      return 0LL;
  }
  if ( v7 >= v4 )
    return v4 - 1;
  return v7;
}
