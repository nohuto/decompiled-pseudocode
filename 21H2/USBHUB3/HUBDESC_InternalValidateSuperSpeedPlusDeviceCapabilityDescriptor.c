/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C0037A7C
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0038C7C (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026F14 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0032B34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_dDDDdDDD @ 0x1C0032EB4 (WPP_RECORDER_SF_dDDDdDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  int v8; // r13d
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r11d
  __int64 v14; // r9
  int v15; // ecx
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r8
  int v19; // edx
  int v20; // edx
  unsigned int v21; // eax
  int v22; // edx
  int v23; // [rsp+20h] [rbp-B8h]
  __int64 v24; // [rsp+28h] [rbp-B0h]
  __int64 v25; // [rsp+30h] [rbp-A8h]
  __int64 v26; // [rsp+38h] [rbp-A0h]
  int v27; // [rsp+70h] [rbp-68h]
  unsigned int v28; // [rsp+74h] [rbp-64h]
  int v29; // [rsp+78h] [rbp-60h] BYREF
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  unsigned int v32; // [rsp+E0h] [rbp+8h]
  char v33; // [rsp+E0h] [rbp+8h]
  unsigned int v34; // [rsp+E8h] [rbp+10h]
  int v36; // [rsp+F8h] [rbp+20h]

  v5 = a4;
  v29 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v29;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v32 = *(_DWORD *)(a2 + 72) - v8;
  if ( *a1 >= 0x10u )
  {
LABEL_9:
    v28 = *((_DWORD *)a1 + 1) & 0x1F;
    if ( *a1 != 4LL * v28 + 16 )
    {
      if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = 4 * v28 + 16;
        LODWORD(v25) = *a1;
        LODWORD(v24) = v8;
        WPP_RECORDER_SF_DDD(
          a5,
          2u,
          0LL,
          0xAFu,
          (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
          v24,
          v25,
          v26);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL);
    }
    if ( *a3 <= v32 )
    {
      if ( *((_DWORD *)a1 + 1) >= 0x200u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = *((_DWORD *)a1 + 1);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB1u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 215LL);
      }
      if ( (a1[8] & 0xF0) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = *((unsigned __int16 *)a1 + 4);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB2u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 216LL);
      }
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = a1[3];
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB3u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
      }
      if ( *((_WORD *)a1 + 5) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = *((unsigned __int16 *)a1 + 5);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB4u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 219LL);
      }
      v12 = v28;
      v13 = 0;
      v27 = 0;
      v36 = 0;
      v33 = 0;
      v34 = 0;
      do
      {
        v14 = v13;
        v30 = v13;
        v15 = *(_DWORD *)&a1[4 * v13 + 12];
        if ( (v15 & 0x80u) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = v13;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB5u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
          }
          v11 = 220LL;
          goto LABEL_121;
        }
        if ( v13 == v12 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = v13 + 1;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB6u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
          }
          v11 = 222LL;
          goto LABEL_121;
        }
        v16 = *(_DWORD *)&a1[4 * v13 + 16];
        v17 = v13 + 1;
        v31 = v17;
        if ( (v16 & 0x80u) == 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = v13 + 1;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB7u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
          }
          v11 = 221LL;
          goto LABEL_121;
        }
        if ( (((unsigned __int8)v16 ^ (unsigned __int8)v15) & 0xF) != 0
          || (((unsigned __int8)v15 ^ (unsigned __int8)v16) & 0x40) != 0
          || (((unsigned __int16)v15 ^ (unsigned __int16)v16) & 0xC000) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDDDdDDD(
              a5,
              (*(_DWORD *)&a1[4 * v17 + 12] >> 6) & 1,
              *(_DWORD *)&a1[4 * v13 + 12] & 0xF,
              0xB8u,
              v23);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
          v14 = v30;
          v17 = v31;
          v15 = *(_DWORD *)&a1[4 * v30 + 12];
        }
        if ( (v15 & 0x40) == 0
          && (((a1[4 * v17 + 12] ^ (unsigned __int8)v15) & 0x30) != 0
           || *(_WORD *)&a1[4 * v14 + 14] != *(_WORD *)&a1[4 * v17 + 14]) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDDDdDDD(
              a5,
              (*(_DWORD *)&a1[4 * v31 + 12] >> 4) & 3,
              (*(_DWORD *)&a1[4 * v14 + 12] >> 4) & 3,
              0xB9u,
              v23);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
        }
        v18 = v30;
        v19 = *(_DWORD *)&a1[4 * v30 + 12];
        if ( (((unsigned __int8)v19 ^ (unsigned __int8)*((_WORD *)a1 + 4)) & 0xF) == 0 )
        {
          v33 = 1;
          if ( (v19 & 0x40) == 0 && (*((_WORD *)a1 + 4) & 0xF00) != ((*((_WORD *)a1 + 4) >> 4) & 0xF00) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDD(a5, 2u, v18, 0xBAu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL);
            v18 = v30;
          }
        }
        v20 = v27;
        v21 = *(_DWORD *)&a1[4 * v18 + 12] & 0xF;
        if ( _bittest(&v20, v21) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xBBu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL);
          v22 = v36;
        }
        else
        {
          v27 |= 1 << v21;
          v22 = ++v36;
        }
        v12 = v28;
        v13 = v34 + 2;
        v34 = v13;
      }
      while ( v13 <= v28 );
      if ( ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1 != v22 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v25) = ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1;
          LODWORD(v24) = v22;
          WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xBCu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24, v25);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 227LL);
        v13 = v34;
      }
      if ( !v33 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = *(_DWORD *)&a1[4 * v13 + 12] & 0xF;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xBDu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
        }
        v11 = 228LL;
        goto LABEL_121;
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v8;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB0u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v24);
      }
      v11 = 217LL;
LABEL_121:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v11);
    }
    goto LABEL_122;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 214LL);
  if ( v32 >= 0x10 )
  {
    *v5 = 2;
    *a3 = 16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0xADu,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v8,
        *a1,
        16,
        16);
    goto LABEL_9;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return result;
  WPP_RECORDER_SF_DDD(a5, 2u, v10, 0xAEu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v8, *a1, 16);
LABEL_122:
  result = 0LL;
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(a5, 2u, 5u, 0xBEu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  }
  return result;
}
