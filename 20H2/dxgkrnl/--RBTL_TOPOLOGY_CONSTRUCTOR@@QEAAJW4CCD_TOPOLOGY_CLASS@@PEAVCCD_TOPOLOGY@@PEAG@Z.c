/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02EC588
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0132DA4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0130164 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0130A2C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C0133050 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EDB9C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EDC94 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EE334 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EE418 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EE580 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        int a2,
        CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  __int64 v5; // r14
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __m128i *v14; // r12
  unsigned int v15; // esi
  unsigned int i; // r15d
  __int64 v17; // rbp
  int v18; // eax
  CCD_TOPOLOGY *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v30; // ecx
  unsigned int v31; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h] BYREF
  int v33; // [rsp+38h] [rbp-50h]

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  v5 = a2;
  CCD_TOPOLOGY::Clear(a3);
  v8 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12), v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = v11;
LABEL_3:
    v12[4] = v5;
    v12[5] = *(_QWORD *)this;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  v14 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v33 = 8;
  LODWORD(v11) = -1073741811;
  v15 = 0;
  v31 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v17 = v14->m128i_i32[0];
    if ( ((unsigned int)v5 & v14->m128i_i32[0]) != (_DWORD)v17 )
      goto LABEL_21;
    switch ( (_DWORD)v17 )
    {
      case 1:
        v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
LABEL_18:
        LODWORD(v11) = v18;
        if ( v18 >= 0 )
          goto LABEL_24;
        goto LABEL_19;
      case 2:
        v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
        goto LABEL_18;
      case 4:
        v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
        goto LABEL_18;
    }
    v10 = (unsigned int)(v17 - 8);
    if ( (_DWORD)v17 == 8 )
    {
      v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
      goto LABEL_18;
    }
    if ( (_DWORD)v17 == 15 )
    {
      v18 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(this, &v31);
      v15 = v31;
      goto LABEL_18;
    }
    LODWORD(v11) = -1073741811;
LABEL_19:
    if ( (_DWORD)v17 == 15 )
      break;
    v19 = *(CCD_TOPOLOGY **)this;
    *((_DWORD *)this + 2) = 0;
    CCD_TOPOLOGY::Clear(v19);
    v15 = 0;
    v31 = 0;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v23[3] = (int)v11;
    v23[4] = v17;
    v23[5] = *(_QWORD *)this;
    WdLogEvent5_WdWarning(v23);
LABEL_21:
    v14 = (__m128i *)((char *)v14 + 4);
  }
  if ( (int)v11 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = (int)v11;
    goto LABEL_3;
  }
LABEL_24:
  v24 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v24 )
    v25 = *(_WORD *)(v24 + 22);
  else
    v25 = 0;
  v26 = *((_WORD *)this + 4);
  if ( v26 <= v25 )
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v28 = v27 ? *(_WORD *)(v27 + 20) : 0;
      if ( v15 >= v28 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v15);
      v30 = v15;
      if ( *((_BYTE *)this + 11) )
        v30 = 0;
      *((_DWORD *)PathDescriptor + 46) = v30 | 0xFE530000;
      *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
      ++v15;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v26;
    LODWORD(v11) = -1073741789;
  }
  return (unsigned int)v11;
}
