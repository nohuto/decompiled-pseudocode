/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF5C4
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C2A0C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C01DECF4 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C01E8250 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2376::__AUTO_USING_PM_MapIndex2376 @ 0x1C01575E0 (_CCD_TOPOLOGY--GetModalitySetId_--_2_--_AUTO_USING_PM_MapIndex2376--__AUTO_USING_PM_MapIndex2376.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C01ACA50 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01AD930 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01ADB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01B71EC (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01D7008 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 */

void **__fastcall CCD_TOPOLOGY::GetModalitySetId(void **this)
{
  unsigned __int16 v1; // bx
  __int64 v3; // r9
  unsigned __int16 *v4; // rsi
  unsigned __int16 v5; // r8
  unsigned __int16 *v6; // rcx
  unsigned int v7; // edx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  CCD_SET_STRING_ID *v10; // rax
  _WORD *v11; // rdx
  __int16 v12; // ax
  __int64 v13; // r9
  unsigned int i; // r8d
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr00_8
  __int64 v20; // rax
  _WORD *v21; // r8
  unsigned int j; // r8d
  _WORD *v24; // rdx
  unsigned __int16 v25; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int16 *v27; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-50h]
  _BYTE v29[64]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v4 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, 256LL, v3);
    if ( v4 )
    {
      v6 = (unsigned __int16 *)this[8];
      v7 = v6[10];
      v27 = v6 + 28;
      v28 = v7;
      if ( v7 )
      {
        v8 = v6 + 156;
        v9 = v7;
        do
        {
          *v8 |= 2u;
          v8[2] = 0;
          v8 += 74;
          --v9;
        }
        while ( v9 );
      }
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr((CCD_TOPOLOGY *)this, v4, v5) < 0 )
        goto LABEL_36;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v4);
      v10 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v29, &DestinationString);
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this, (__int64)v10);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v29);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v11 = this[8];
        if ( v11 )
          v12 = v11[10];
        else
          v12 = 0;
        v13 = (__int64)this[8];
        if ( v12 != *((_WORD *)this + 16) )
        {
          WdLogSingleEntry0(1LL);
          v11 = this[8];
          v13 = (__int64)v11;
        }
        for ( i = 0; ; ++i )
        {
          v15 = v13 ? *(_WORD *)(v13 + 20) : 0;
          if ( i >= v15 || *(_DWORD *)(296LL * i + v13 + 320) != i )
            break;
        }
        if ( v11 )
          v16 = v11[10];
        else
          v16 = 0;
        if ( i >= v16 )
          goto LABEL_36;
        if ( v11 )
          v17 = v11[10];
        else
          v17 = 0;
        v19 = v17;
        v18 = 2LL * v17;
        if ( !is_mul_ok(v19, 2uLL) )
          v18 = -1LL;
        v20 = operator new[](v18, 0x63644356u, 256LL, v13);
        this[7] = (void *)v20;
        if ( v20 )
        {
          for ( j = 0; ; ++j )
          {
            v24 = this[8];
            v25 = v24 ? v24[10] : 0;
            if ( j >= v25 )
              break;
            *((_WORD *)this[7] + *(unsigned int *)&v24[148 * j + 160]) = j;
          }
          goto LABEL_36;
        }
        v21 = this[8];
        if ( v21 )
          v1 = v21[10];
        WdLogSingleEntry3(6LL, this, v21, v1);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
LABEL_36:
      operator delete[](v4);
      CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2376::__AUTO_USING_PM_MapIndex2376((__int64 *)&v27);
    }
  }
  return this;
}
