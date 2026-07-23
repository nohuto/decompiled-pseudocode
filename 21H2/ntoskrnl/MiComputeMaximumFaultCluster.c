/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x1402B3F50
 * Callers:
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 * Callees:
 *     MiFaultListPagesRemaining @ 0x140235D44 (MiFaultListPagesRemaining.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     KiRspInIstStack @ 0x140518E38 (KiRspInIstStack.c)
 */

__int64 __fastcall MiComputeMaximumFaultCluster(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int64 **Address; // rax
  __int64 v12; // rdx

  v2 = a1[2];
  v4 = *a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 == (v2 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    if ( ((v2 & 1) == 0 || *(_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
      && (v2 & 1) == 0
      && v2
      && *(_WORD *)(v2 + 368) == 16
      && ((*(_DWORD *)(v2 + 376) & 0x200) != 0
       || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v2 + 384)) && !(unsigned int)KiRspInIstStack(2LL, v12)) )
    {
      v6 = *(_QWORD *)(v2 + 360);
      if ( KiDynamicTraceEnabled && v6 >= ControlPc && v6 < qword_140CFCBE0 )
        KeGetCurrentIrql();
    }
    return 1LL;
  }
  v7 = MiFaultListPagesRemaining(a1);
  if ( v7 == 1 )
    return 1LL;
  if ( !a2 || a2 > v7 )
    a2 = v7;
  v9 = 512LL - (((unsigned int)(v4 >> 9) >> 3) & 0x1FF);
  v10 = v9;
  if ( a2 <= v9 )
    v10 = a2;
  if ( v4 < 0xFFFF800000000000uLL )
  {
    Address = *(__int64 ***)(v8 + 88);
    if ( Address || (Address = MiLocateAddress(v4)) != 0LL )
      v9 = (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32))
         - (v4 >> 12)
         + 1;
    else
      v9 = 1LL;
  }
  if ( v10 <= v9 )
    return v10;
  return v9;
}
