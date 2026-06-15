/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3___ @ 0x180116F10
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x1801179A8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048FB8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CEBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x18011A62C (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3___(
        __int64 a1,
        struct tWAVEFORMATEX *a2,
        _QWORD *a3)
{
  struct tWAVEFORMATEX *v3; // rdi
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
  char v29; // [rsp+30h] [rbp-49h] BYREF
  bool v30; // [rsp+31h] [rbp-48h]
  struct tWAVEFORMATEX *Src; // [rsp+38h] [rbp-41h]
  int v32; // [rsp+40h] [rbp-39h] BYREF
  int v33; // [rsp+44h] [rbp-35h]
  _QWORD *v34; // [rsp+48h] [rbp-31h]
  LPCOLESTR lpsz[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+60h] [rbp-19h]
  GUID iid; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v38[4]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD v39[4]; // [rsp+88h] [rbp+Fh] BYREF

  v34 = a3;
  v3 = a2;
  Src = a2;
  v39[0] = 2097184;
  v39[1] = 1572896;
  v39[2] = 1572888;
  v39[3] = 1048592;
  v38[0] = 2097184;
  v38[1] = 1572888;
  v38[2] = 1048592;
  v9 = 4LL;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver(v6, v5, v7, v8) )
  {
    v10 = (WORD *)v39;
    v33 = 4;
  }
  else
  {
    v10 = (WORD *)v38;
    v33 = 3;
  }
  if ( *(_DWORD *)(a1 + 188) )
  {
    v12 = 0;
    v13 = 0;
    *(_OWORD *)lpsz = 0LL;
    v36 = 0LL;
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
      v11 = (char *)&unk_180174850;
    }
    else
    {
      *(_OWORD *)lpsz = 0LL;
      v36 = 0LL;
      v17 = (*(int (__fastcall **)(_QWORD, void *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
              *(_QWORD *)(a1 + 40),
              &PKEY_Endpoint_IsUSB,
              lpsz) >= 0
         && LOWORD(lpsz[0]) == 11
         && LOWORD(lpsz[1]) == 0xFFFF;
      PropVariantClear((PROPVARIANT *)lpsz);
      v11 = (char *)&unk_180174790;
      if ( !v17 )
        v11 = (char *)&unk_1801747F0;
    }
    v3 = Src;
    v9 = 8LL;
  }
  else
  {
    v11 = (char *)&unk_1801748B0;
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
      v32 = 0;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v34 + 24LL))(
              *v34,
              v34[1],
              *(unsigned int *)v34[1],
              &v32);
      if ( v26 < 0 )
        return (unsigned int)v26;
      if ( v32 && (v29 = 0, lambda_f36e01949351335f5e9acafaa1161a48_::operator()(v34 + 3, Src, &v29), v29) )
      {
        v26 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v34[2]);
        v27 = v26 >= 0;
      }
      else
      {
        v27 = v30;
      }
      if ( v26 < 0 )
        return (unsigned int)v26;
      if ( v27 )
        return 0LL;
      v20 += 2;
      ++v21;
      v3 = Src;
    }
    while ( v21 < v33 );
    ++v18;
    v19 += 3;
    if ( v18 < v9 )
      continue;
    break;
  }
  return 0LL;
}
