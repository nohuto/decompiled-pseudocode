/*
 * XREFs of ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x180084FA4
 * Callers:
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x180084DC8 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180084FC0 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCButtonHoldHelper::ResetState(MPCButtonHoldHelper *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    *((_WORD *)this + 4) = 0;
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
}
