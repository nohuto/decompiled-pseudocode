/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C003451C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C01086E0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C00347F0 (ndisIfCreateCompartmentBlock.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase2(void)
{
  char *PoolWithTag; // rdi
  int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int16 v11; // dx
  int CompartmentBlock; // eax
  __int128 v14; // xmm0
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[10]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 i; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  _QWORD v19[14]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v20[206]; // [rsp+128h] [rbp+20h] BYREF

  memset(v16, 0, 0x48uLL);
  v18 = 0LL;
  PoolWithTag = 0LL;
  memset(v20, 0, 0x668uLL);
  LODWORD(v15) = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Fu,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids);
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[3]) = 7;
  v19[2] = &NPI_MS_NDIS_MODULEID;
  v19[4] = 0x100000000LL;
  v19[5] = 0LL;
  LODWORD(v19[6]) = 4;
  v19[7] = 0LL;
  LODWORD(v19[8]) = 1640;
  LODWORD(v19[13]) = 0;
  v1 = NsiEnumerateObjectsAllParametersEx(v19);
  if ( v1 >= 0 )
  {
    v2 = v19[13];
    if ( LODWORD(v19[13]) )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          v2 = v19[13];
          PoolWithTag = 0LL;
        }
        v3 = (4 * v2 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v2 > 0xFFFFFFFF || v3 + 1640 * v2 < v3 )
        {
          v1 = -1073741670;
          goto LABEL_21;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 1640LL * v2, 0x6669444Eu);
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v4 + 1640LL * LODWORD(v19[13]));
        v19[5] = PoolWithTag;
        v19[7] = &PoolWithTag[v4];
        LODWORD(v19[6]) = 4;
        LODWORD(v19[8]) = 1640;
        v1 = NsiEnumerateObjectsAllParametersEx(v19);
        if ( v1 != 261 )
          goto LABEL_11;
        v2 = v19[13];
      }
      v1 = -1073741670;
LABEL_11:
      if ( v1 >= 0 )
      {
        v5 = v19[7];
        v6 = 0;
        v7 = v19[13];
        v8 = v19[5];
        for ( i = v19[7]; v6 < v7; ++v6 )
        {
          v9 = v5 + 1640LL * v6;
          if ( *(_BYTE *)v9 == 0xAD )
          {
            v10 = *(_BYTE *)(v9 + 1);
            if ( v10 )
            {
              v11 = *(_WORD *)(v9 + 2);
              if ( v11 >= 0x448u )
              {
                if ( v10 < 3u || v11 < 0x664u )
                {
                  *(_DWORD *)v9 = 107479981;
                  memset((void *)(v9 + 1096), 0, 0x204uLL);
                  *(_QWORD *)(v9 + 1612) = 1LL;
                  if ( *(_DWORD *)(v8 + 4LL * v6) == 1 )
                  {
                    *(_WORD *)(v9 + 1096) = 38;
                    *(_OWORD *)(v9 + 1098) = *(_OWORD *)L"Default Compartment";
                    *(_OWORD *)(v9 + 1114) = *(_OWORD *)L"Compartment";
                    *(_DWORD *)(v9 + 1130) = *(_DWORD *)L"ent";
                    *(_WORD *)(v9 + 1134) = aDefaultCompart[18];
                    v14 = *(_OWORD *)(v9 + 1080);
                    *(_DWORD *)(v9 + 1616) |= 4u;
                    *(_OWORD *)(v9 + 1620) = v14;
                  }
                  v16[1] = 0LL;
                  v16[0] = 0LL;
                  v16[4] = 0LL;
                  v16[2] = &NPI_MS_NDIS_MODULEID;
                  v16[3] = 7LL;
                  v16[6] = 4LL;
                  v16[8] = 1640LL;
                  v16[5] = v8 + 4LL * v6;
                  v16[7] = v9;
                  NsiSetAllParametersEx(v16);
                }
                CompartmentBlock = ndisIfCreateCompartmentBlock(*(_DWORD *)(v8 + 4LL * v6));
                v7 = v19[13];
                v1 = CompartmentBlock;
              }
              v5 = i;
            }
          }
        }
      }
    }
    else
    {
      v16[2] = &NPI_MS_NDIS_MODULEID;
      v16[5] = &v15;
      *(_DWORD *)((char *)&v20[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v20[135] = xmmword_1C00D3820;
      HIWORD(v20[141]) = aDefaultCompart[18];
      v16[7] = v20;
      HIDWORD(v16[1]) = 0;
      v16[3] = 7LL;
      v16[6] = 4LL;
      v16[8] = 1640LL;
      v16[4] = 0x100000002LL;
      LODWORD(v20[0]) = 107479981;
      LOWORD(v20[137]) = 38;
      *(_OWORD *)((char *)&v20[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v20[201]) = 1;
      *(_OWORD *)((char *)&v20[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v20[202]) = 4;
      v1 = NsiSetAllParametersEx(v16);
      if ( v1 >= 0 )
        goto LABEL_23;
    }
LABEL_21:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_23:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x20u,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      v1,
      v15);
  return (unsigned int)v1;
}
