/*
 * XREFs of HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C0036E64
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0038C7C (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026F14 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0032B34 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidatePlatformCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  unsigned __int8 *v7; // rdi
  __int64 v8; // r15
  char v9; // si
  int v10; // r12d
  unsigned int v11; // r13d
  __int64 v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  unsigned int v16; // r12d
  __int64 v17; // rax
  _DWORD *v18; // r13
  unsigned int v19; // ecx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rcx
  ULONG *v22; // r13
  ULONG v23; // r15d
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  __int64 v28; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v29; // [rsp+58h] [rbp-70h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  __int64 v31; // [rsp+68h] [rbp-60h]
  ULONG *v32; // [rsp+70h] [rbp-58h]
  int v34; // [rsp+D8h] [rbp+10h]
  int v36; // [rsp+E8h] [rbp+20h] BYREF

  v36 = 0;
  v5 = a4;
  v7 = a1;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v36;
  }
  v8 = a5;
  v9 = 1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x14u )
  {
    v13 = a3;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 251LL);
  if ( v11 >= 0x14 )
  {
    v13 = a3;
    *v5 = 2;
    *a3 = 20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v8,
        2u,
        5u,
        0x8Cu,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v10,
        *v7,
        20,
        20);
      v13 = a3;
    }
LABEL_9:
    if ( *v13 > v11 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v10;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x8Eu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v28);
      }
      v14 = 253LL;
      goto LABEL_16;
    }
    if ( v7[3] )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v7[3];
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x8Fu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 195LL);
    }
    if ( *(_QWORD *)(v7 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(v7 + 12) == *(_QWORD *)GUID_NULL.Data4 )
    {
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v8, 2u, 5u, 0x90u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
      v14 = 196LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(v7 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
      && *(_QWORD *)(v7 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 2u, 5u, 0x91u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
        v14 = 197LL;
        goto LABEL_16;
      }
      if ( *v7 < 0x1Cu )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_42:
          v14 = 198LL;
          goto LABEL_16;
        }
        v15 = 146;
LABEL_41:
        LODWORD(v28) = *v7;
        WPP_RECORDER_SF_d(v8, 2u, 5u, v15, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v28);
        goto LABEL_42;
      }
      if ( ((*v7 - 4) & 7) != 0 )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v15 = 147;
        goto LABEL_41;
      }
      v16 = (((unsigned __int64)*v7 - 28) >> 3) + 1;
      if ( (unsigned int)(((unsigned __int64)*v7 - 28) >> 3) == -1 )
        goto LABEL_63;
      v17 = v16;
      v18 = v7 + 20;
      v19 = 1;
      v32 = (ULONG *)(v7 + 20);
      v34 = 1;
      v31 = v16;
      do
      {
        if ( v19 < v16 )
        {
          v20 = &v7[8 * v19 + 20];
          v29 = v20;
          v21 = v16 - v19;
          v30 = v21;
          do
          {
            if ( *(_DWORD *)v20 == *v18 )
            {
              *v5 = 1;
              *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v28) = *v18;
                WPP_RECORDER_SF_d(v8, 2u, 5u, 0x94u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v28);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 199LL);
              v20 = v29;
              v21 = v30;
            }
            v20 += 8;
            --v21;
            v29 = v20;
            v30 = v21;
          }
          while ( v21 );
          v7 = a1;
          v19 = v34;
          v17 = v31;
        }
        ++v19;
        v18 += 2;
        --v17;
        v34 = v19;
        v31 = v17;
      }
      while ( v17 );
      v22 = v32;
      v23 = 0;
      v24 = v16;
      do
      {
        if ( *v22 > v23 && RtlIsNtDdiVersionAvailable(*v22) )
        {
          v23 = *v22;
          *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = v22;
        }
        v22 += 2;
        --v24;
      }
      while ( v24 );
      v25 = v23 == 0;
      v8 = a5;
      if ( v25 )
      {
LABEL_63:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 2u, 5u, 0x95u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 200LL);
      }
    }
    else if ( *(_QWORD *)(v7 + 4) == *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
           && *(_QWORD *)(v7 + 12) == *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
    {
      if ( *v7 >= 0x1Au )
      {
        if ( v7[20] == 1 )
        {
          if ( *v7 != 26 )
          {
            *v5 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v28) = *v7;
              WPP_RECORDER_SF_d(v8, 2u, 5u, 0x97u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v28);
            }
            v14 = 247LL;
            goto LABEL_16;
          }
        }
        else if ( !v7[20] )
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = v7[20];
            WPP_RECORDER_SF_d(v8, 2u, 5u, 0x98u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v28);
          }
          v14 = 249LL;
          goto LABEL_16;
        }
        v26 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v26 + 56) )
        {
          *(_QWORD *)(v26 + 56) = v7;
          goto LABEL_86;
        }
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 2u, 5u, 0x99u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
        v14 = 248LL;
        goto LABEL_16;
      }
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = *v7;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x96u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v28);
      }
      v14 = 250LL;
LABEL_16:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
    }
LABEL_86:
    if ( !*v5 )
      return v9;
    goto LABEL_87;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v8, 2u, v12, 0x8Du, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v10, *v7, 20);
    goto LABEL_86;
  }
LABEL_87:
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x9Au, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  return v9;
}
