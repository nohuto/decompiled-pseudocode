/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x18011DA90
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011BC48 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800BD2D0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned int *v11; // rbx
  unsigned __int64 v13; // r9
  unsigned int v15; // esi
  unsigned int v16; // r11d
  unsigned __int64 v17; // rax
  unsigned int v18; // edi
  unsigned __int64 v19; // r15
  unsigned int v20; // ecx
  unsigned int v21; // r11d
  unsigned int v22; // eax
  unsigned __int64 v23; // r14
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rbp
  signed int v30; // eax
  unsigned __int64 v31; // r10
  unsigned int v32; // r11d
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // esi
  unsigned int v38; // r9d
  unsigned int v39; // r11d
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  signed int v42; // eax
  unsigned int *v43; // r14
  unsigned int v44; // r9d
  unsigned int v45; // r10d
  unsigned int v46; // r11d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  signed int v49; // eax
  unsigned __int64 v51; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+28h] [rbp-50h] BYREF
  unsigned int *v53; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = (unsigned int *)*((_QWORD *)a1 + 1);
  v13 = 5000LL;
  v15 = 1;
  v16 = v11[1];
  v53 = a11;
  v52 = (unsigned __int64)a8;
  v17 = *v11;
  v18 = a3;
  v19 = a2;
  v20 = a3;
  if ( v17 > 0x1388 )
    v13 = (unsigned int)v17;
  v21 = v16 + 1;
  v22 = a3;
  v23 = (unsigned int)v13;
  if ( a3 >= v21 )
    v20 = v21;
  if ( a3 <= v21 )
    v22 = v21;
  v24 = v22 % v20;
  while ( 1 )
  {
    v25 = v24;
    if ( !v24 )
      break;
    v24 = v20 % v24;
    v20 = v25;
  }
  v26 = v21 * (unsigned __int64)(v18 / v20);
  if ( v26 > 0xFFFFFFFF )
  {
    v36 = 5531LL;
    goto LABEL_67;
  }
  if ( a9 )
    *a9 = (unsigned int)v26 / v18;
  v27 = 0LL;
  if ( v11[3] )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)&v11[6 * v27 + 4] - *(_QWORD *)&a4->Data1;
      if ( !v28 )
        v28 = *(_QWORD *)&v11[6 * v27 + 6] - *(_QWORD *)a4->Data4;
      if ( !v28 )
        break;
      v27 = (unsigned int)(v27 + 1);
      if ( (unsigned int)v27 >= v11[3] )
        goto LABEL_23;
    }
    v13 = v11[6 * v27 + 9];
    if ( v23 > v13 )
      v13 = v23;
    if ( v11[6 * v27 + 8] )
      v15 = v11[6 * v27 + 8];
  }
LABEL_23:
  v29 = v19;
  v30 = ULongLongMult(v13, v19, &v51);
  if ( v30 < 0 )
  {
    v33 = v31;
  }
  else if ( v51 )
  {
    v33 = (unsigned int)v31;
    v34 = (v51 - 1) / (10000000 * v18);
    v35 = v34 + 1;
    if ( v34 + 1 < v34 )
    {
      v30 = -2147024362;
    }
    else
    {
      if ( v35 <= v31 )
        LODWORD(v31) = v34 + 1;
      v30 = v33 < v35 ? 0x80070216 : 0;
    }
  }
  else
  {
    LODWORD(v31) = 0;
    v33 = 0xFFFFFFFFLL;
    v30 = 0;
  }
  if ( v30 >= 0 )
  {
    if ( v15 <= (unsigned int)v31 )
      v15 = v31;
    v37 = v15 - 1 + v32 - (v15 - 1) % v32;
    *a10 = v37;
    if ( (int)ULongLongMult(0x186A0uLL, v29, &v51) >= 0 )
    {
      if ( v51 )
      {
        v40 = (v51 - 1) / (10000000 * v18);
        v41 = v40 + 1;
        if ( v40 + 1 < v40 )
        {
          v42 = -2147024362;
        }
        else
        {
          if ( v41 <= v33 )
            v38 = v40 + 1;
          v42 = v33 < v41 ? 0x80070216 : 0;
        }
      }
      else
      {
        v38 = 0;
        v42 = 0;
      }
      if ( v42 >= 0 )
      {
        v43 = (unsigned int *)v52;
        if ( v38 <= v37 )
          v38 = v37;
        v44 = v38 - 1 + v39 - (v38 - 1) % v39;
        *(_DWORD *)v52 = v44;
        if ( *(_BYTE *)a1 )
        {
          if ( (int)ULongLongMult(0x1E8480uLL, v29, &v52) < 0 )
            goto LABEL_58;
          if ( v52 )
          {
            v47 = (v52 - 1) / (10000000 * v18);
            v48 = v47 + 1;
            if ( v47 + 1 < v47 )
            {
              v49 = -2147024362;
            }
            else
            {
              if ( v48 <= v33 )
                v45 = v47 + 1;
              v49 = v33 < v48 ? 0x80070216 : 0;
            }
          }
          else
          {
            v45 = 0;
            v49 = 0;
          }
          if ( v49 < 0 )
          {
LABEL_58:
            v36 = 5577LL;
            goto LABEL_67;
          }
          if ( v45 <= v37 )
            v45 = v37;
          if ( v44 >= v46 - (v45 - 1) % v46 + v45 - 1 )
            v44 = v46 - (v45 - 1) % v46 + v45 - 1;
          if ( v44 <= *v43 )
            v44 = *v43;
        }
        *v53 = v44;
        return 0LL;
      }
    }
    v36 = 5560LL;
  }
  else
  {
    v36 = 5554LL;
  }
LABEL_67:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x88890008LL);
  return 2290679816LL;
}
