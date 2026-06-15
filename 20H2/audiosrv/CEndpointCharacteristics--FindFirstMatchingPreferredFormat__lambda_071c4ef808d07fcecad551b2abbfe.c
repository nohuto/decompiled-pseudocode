/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_071c4ef808d07fcecad551b2abbfec83___ @ 0x180116024
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x1801173C4 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048844 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006C65C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x180119A10 (_lambda_cc1fbeea7d61a5d688c074f297f6e07b_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_071c4ef808d07fcecad551b2abbfec83___(
        __int64 a1,
        const struct tWAVEFORMATEX *a2,
        _QWORD *a3)
{
  const struct tWAVEFORMATEX *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  WORD *v10; // r13
  char *v11; // rax
  bool v12; // bl
  bool v13; // di
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // bl
  __int64 v18; // rsi
  _DWORD *v19; // r15
  WORD *v20; // r12
  int v21; // r14d
  WORD v22; // dx
  DWORD v23; // r8d
  WORD v24; // cx
  int v25; // eax
  int v26; // edi
  bool v27; // al
  int v30; // [rsp+40h] [rbp-39h] BYREF
  int v31; // [rsp+44h] [rbp-35h]
  _QWORD *v32; // [rsp+48h] [rbp-31h]
  LPCOLESTR lpsz[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v34; // [rsp+60h] [rbp-19h]
  GUID iid; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v36[4]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD v37[4]; // [rsp+88h] [rbp+Fh] BYREF

  v32 = a3;
  v3 = a2;
  v37[0] = 2097184;
  v37[1] = 1572896;
  v37[2] = 1572888;
  v37[3] = 1048592;
  v36[0] = 2097184;
  v36[1] = 1572888;
  v36[2] = 1048592;
  v9 = 4LL;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver(v6, v5, v7, v8) )
  {
    v10 = (WORD *)v37;
    v31 = 4;
  }
  else
  {
    v10 = (WORD *)v36;
    v31 = 3;
  }
  if ( *(_DWORD *)(a1 + 188) )
  {
    v12 = 0;
    v13 = 0;
    *(_OWORD *)lpsz = 0LL;
    v34 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
            *(_QWORD *)(a1 + 40),
            &PKEY_AudioEndpoint_JackSubType,
            lpsz);
    iid = GUID_00000000_0000_0000_0000_000000000000;
    if ( v14 >= 0 && LOWORD(lpsz[0]) == 31 && IIDFromString(lpsz[1], &iid) >= 0 )
    {
      v15 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
        v15 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
      v12 = v15 == 0;
      v16 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1 )
        v16 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
      v13 = v16 == 0;
    }
    PropVariantClear((PROPVARIANT *)lpsz);
    if ( v12 )
      return 0LL;
    if ( v13 )
    {
      v11 = (char *)&unk_180173580;
    }
    else
    {
      *(_OWORD *)lpsz = 0LL;
      v34 = 0LL;
      v17 = (*(int (__fastcall **)(_QWORD, void *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
              *(_QWORD *)(a1 + 40),
              &PKEY_Endpoint_IsUSB,
              lpsz) >= 0
         && LOWORD(lpsz[0]) == 11
         && LOWORD(lpsz[1]) == 0xFFFF;
      PropVariantClear((PROPVARIANT *)lpsz);
      v11 = (char *)&unk_1801734C0;
      if ( !v17 )
        v11 = (char *)&unk_180173520;
    }
    v3 = a2;
    v9 = 8LL;
  }
  else
  {
    v11 = (char *)&unk_1801735E0;
  }
  v18 = 0LL;
  v19 = v11 + 8;
  while ( 2 )
  {
    v20 = v10;
    v21 = 0;
    do
    {
      v22 = *((_WORD *)v19 - 2);
      v3->nChannels = v22;
      v23 = *(v19 - 2);
      v3->nSamplesPerSec = v23;
      v24 = *v20;
      v3->wBitsPerSample = *v20;
      v3[1].wFormatTag = v20[1];
      *(_DWORD *)&v3[1].nChannels = *v19;
      v25 = (unsigned __int16)(v22 * (v24 >> 3));
      v3->nBlockAlign = v25;
      v3->nAvgBytesPerSec = v23 * v25;
      v3->cbSize = 22;
      v30 = 0;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v32 + 24LL))(
              *v32,
              v32[1],
              *(unsigned int *)v32[1],
              &v30);
      if ( v26 < 0 )
        return (unsigned int)v26;
      if ( v30 && (unsigned __int8)lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(v32 + 3, a2) )
      {
        v26 = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)v32[2]);
        v27 = v26 >= 0;
      }
      else
      {
        v27 = 0;
      }
      if ( v26 < 0 )
        return (unsigned int)v26;
      if ( v27 )
        return 0LL;
      v20 += 2;
      ++v21;
      v3 = a2;
    }
    while ( v21 < v31 );
    ++v18;
    v19 += 3;
    if ( v18 < v9 )
      continue;
    break;
  }
  return 0LL;
}
