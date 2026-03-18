/*
 * XREFs of ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EDB9C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02EC588 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EDC94 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C02EA4C0 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02ED360 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EE370 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EE580 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(BTL_TOPOLOGY_CONSTRUCTOR *this, bool a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int16 v6; // di
  __int64 v7; // rsi
  unsigned int v8; // r9d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax

  result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v5) = a2;
    if ( *((_BYTE *)this + 60) )
    {
      *((_BYTE *)this + 10) = 1;
      result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, a2);
      LODWORD(v7) = result;
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v8 = *((_DWORD *)this + 5);
      *((_BYTE *)this + 10) = 0;
      v9 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
             (CCD_TOPOLOGY **)this,
             v5,
             (const struct _LUID *)((char *)this + 12),
             v8);
      v7 = v9;
      if ( v9 < 0 )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
        v12[3] = v7;
        v12[4] = *((int *)this + 4);
        v12[5] = *((unsigned int *)this + 3);
        v12[6] = *((unsigned int *)this + 5);
        v12[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
        WdLogEvent5_WdError(v12);
        return (unsigned int)v7;
      }
      if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 7)) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)this + 64LL);
        if ( v13 )
          v6 = *(_WORD *)(v13 + 20);
        if ( v6 >= 2u )
          LODWORD(v7) = CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
      }
    }
    *((_BYTE *)this + 11) = 1;
    return (unsigned int)v7;
  }
  return result;
}
