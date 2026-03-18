/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013ABE0
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0139394 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013A7F8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C013BD20 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C013C52C (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00EA1E0 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00EA404 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00ECF14 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0139AC4 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C013AD88 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 */

void **__fastcall CCD_TOPOLOGY::GetModalitySetId(void **this)
{
  unsigned __int16 *v2; // rsi
  unsigned __int16 v3; // r8
  unsigned __int16 *v4; // rbp
  __int64 v5; // rdi
  _DWORD *v6; // rcx
  __int64 v7; // rax
  CCD_SET_STRING_ID *v8; // rax
  __int64 v9; // rcx
  _WORD *v10; // rdx
  __int16 v11; // ax
  _WORD *v12; // r9
  unsigned int i; // r8d
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rax
  unsigned __int16 v20; // ax
  SIZE_T v21; // rax
  unsigned __int64 v22; // kr00_8
  PVOID v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rdx
  _WORD *v29; // rax
  unsigned __int16 v30; // ax
  unsigned int j; // r8d
  _WORD *v32; // rdx
  unsigned __int16 v33; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v35[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v2 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, PagedPool);
    if ( v2 )
    {
      v4 = (unsigned __int16 *)this[8];
      v5 = v4[10];
      if ( (_WORD)v5 )
      {
        v6 = v4 + 140;
        v7 = v4[10];
        do
        {
          *v6 |= 2u;
          v6[2] = 0;
          v6 += 68;
          --v7;
        }
        while ( v7 );
      }
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr((CCD_TOPOLOGY *)this, v2, v3) < 0 )
        goto LABEL_21;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v2);
      v8 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v35, &DestinationString);
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this, (__int64)v8);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v35);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v10 = this[8];
        if ( v10 )
          v11 = v10[10];
        else
          v11 = 0;
        v12 = this[8];
        if ( v11 != *((_WORD *)this + 16) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v9, v10);
          WdLogEvent5_WdAssertion(v19);
          v10 = this[8];
          v12 = v10;
        }
        for ( i = 0; ; ++i )
        {
          v14 = v12 ? v12[10] : 0;
          if ( i >= v14 || *(_DWORD *)&v12[136 * i + 144] != i )
            break;
        }
        if ( v10 )
          v15 = v10[10];
        else
          v15 = 0;
        if ( i >= v15 )
          goto LABEL_21;
        if ( v10 )
          v20 = v10[10];
        else
          v20 = 0;
        v22 = v20;
        v21 = 2LL * v20;
        if ( !is_mul_ok(v22, 2uLL) )
          v21 = -1LL;
        v23 = operator new[](v21, 0x63644356u, PagedPool);
        this[7] = v23;
        if ( v23 )
        {
          for ( j = 0; ; ++j )
          {
            v32 = this[8];
            v33 = v32 ? v32[10] : 0;
            if ( j >= v33 )
              break;
            *((_WORD *)this[7] + *(unsigned int *)&v32[136 * j + 144]) = j;
          }
          goto LABEL_21;
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
        v28[3] = this;
        v28[4] = this[8];
        v29 = this[8];
        if ( v29 )
          v30 = v29[10];
        else
          v30 = 0;
        v28[5] = v30;
        WdLogEvent5_WdLowResource(v28);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
LABEL_21:
      operator delete[](v2);
      if ( (_WORD)v5 )
      {
        v16 = v4 + 140;
        v17 = v5;
        do
        {
          v16[2] = 0;
          *v16 &= ~2u;
          v16 += 68;
          --v17;
        }
        while ( v17 );
      }
    }
  }
  return this;
}
