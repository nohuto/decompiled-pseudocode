/*
 * XREFs of ?GetSupportedVolumeSteppingForKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@@Z @ 0x1801416C0
 * Callers:
 *     ?GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ @ 0x180141678 (-GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetSupportedVolumeSteppingForKsTopology(
        const struct _GUID *a1,
        __int64 a2,
        struct IKsControl *a3,
        struct KSPROPERTY_STEPPING_LONG *a4)
{
  unsigned int v4; // ebx
  struct IKsControlVtbl *lpVtbl; // rax
  HRESULT (__stdcall *KsProperty)(IKsControl *, PKSPROPERTY, ULONG, void *, ULONG, ULONG *); // rax
  int v9; // eax
  char *v10; // rax
  char *v11; // rdi
  __int64 v12; // rax
  GUID v14; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  SIZE_T cb[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+78h] [rbp-8h]
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v4 = 0;
  v19 = 0LL;
  v20 = 0;
  *(_OWORD *)cb = 0LL;
  v18 = 0LL;
  if ( a3 && a4 )
  {
    lpVtbl = a3->lpVtbl;
    v15 = 1;
    KsProperty = lpVtbl->KsProperty;
    v16 = 512;
    v14 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
    v9 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, SIZE_T *, int, int *))KsProperty)(
           a3,
           &v14,
           24LL,
           cb,
           40,
           &v20);
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( HIDWORD(cb[0]) <= 0x28 )
      return v4;
    v10 = (char *)CoTaskMemAlloc(HIDWORD(cb[0]));
    v11 = v10;
    if ( !v10 )
      return (unsigned int)-2147024882;
    v9 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, char *, _DWORD, int *))a3->lpVtbl->KsProperty)(
           a3,
           &v14,
           24LL,
           v10,
           HIDWORD(cb[0]),
           &v20);
    if ( v9 < 0 )
    {
      return (unsigned int)v9;
    }
    else
    {
      v12 = *((_QWORD *)v11 + 1) - *(_QWORD *)&GUID_97e99ba0_bdea_11cf_a5d6_28db04c10000.Data1;
      if ( !v12 )
        v12 = *((_QWORD *)v11 + 2) - *(_QWORD *)GUID_97e99ba0_bdea_11cf_a5d6_28db04c10000.Data4;
      if ( !v12
        && *((_DWORD *)v11 + 6) == 3
        && !*((_DWORD *)v11 + 7)
        && *((_DWORD *)v11 + 8)
        && !*((_DWORD *)v11 + 9)
        && *((_DWORD *)v11 + 1) >= 0x48u
        && *((_DWORD *)v11 + 10) == 2
        && *((_DWORD *)v11 + 11) >= 0x10u
        && *((_DWORD *)v11 + 12)
        && ((*((_DWORD *)v11 + 13) & 6) == 0 || (*((_DWORD *)v11 + 13) & 6) == 6) )
      {
        *a4 = *(struct KSPROPERTY_STEPPING_LONG *)(v11 + 56);
      }
      else
      {
        return (unsigned int)-2147024809;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v4;
}
