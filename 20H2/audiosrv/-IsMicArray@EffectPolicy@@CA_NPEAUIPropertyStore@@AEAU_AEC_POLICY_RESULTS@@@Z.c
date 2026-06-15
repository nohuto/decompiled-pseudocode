/*
 * XREFs of ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180123518
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180123080 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall EffectPolicy::IsMicArray(struct IPropertyStore *a1, struct _AEC_POLICY_RESULTS *a2)
{
  struct IPropertyStoreVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetValue)(IPropertyStore *, const PROPERTYKEY *const, PROPVARIANT *); // rax
  __int64 v5; // rax
  int v6; // eax
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  GUID iid; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0LL;
  lpVtbl = a1->lpVtbl;
  iid = GUID_00000000_0000_0000_0000_000000000000;
  GetValue = lpVtbl->GetValue;
  *(_OWORD *)lpsz = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, LPCOLESTR *))GetValue)(
         a1,
         &PKEY_AudioEndpoint_JackSubType,
         lpsz) < 0
    || LOWORD(lpsz[0]) != 31
    || IIDFromString(lpsz[1], &iid) < 0 )
  {
    goto LABEL_8;
  }
  v5 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
    v5 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
  if ( v5 )
LABEL_8:
    v6 = 0;
  else
    v6 = 1;
  *((_DWORD *)a2 + 5) = v6;
  PropVariantClear((PROPVARIANT *)lpsz);
  return *((_DWORD *)a2 + 5) != 0;
}
