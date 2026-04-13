/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18002C774
 * Callers:
 *     _lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator() @ 0x180030590 (_lambda_c7a3d71a2342ccc4636948ba7f796bf6_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180005DFC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18000D5DC (-SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18000D7B8 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18000D844 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18000D910 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180016558 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v5; // r15d
  WCHAR *v6; // rbx
  int v7; // eax
  bool *v8; // r8
  signed int v9; // r14d
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int DoesKeyExist; // eax
  const unsigned __int16 *v13; // rdx
  WCHAR *v14; // rsi
  unsigned __int64 v15; // r12
  int v16; // eax
  bool v17; // r15
  WCHAR *v18; // rdi
  LSTATUS ValueW; // eax
  void *v20; // rcx
  unsigned __int64 v21; // rdi
  int v22; // eax
  _WORD *v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  unsigned __int16 v30[2]; // [rsp+40h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-2Ch] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-28h] BYREF
  struct _FILETIME v33; // [rsp+50h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+60h] [rbp-10h]
  __int64 v36; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v39; // [rsp+C0h] [rbp+50h]

  v39 = (unsigned int)a3;
  pv = 0LL;
  v35 = 0LL;
  v5 = (unsigned int)a3;
  v36 = 0LL;
  v6 = 0LL;
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)&pv,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         this);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v6 = (WCHAR *)pv;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v7);
    if ( pv )
      CoTaskMemFree(pv);
  }
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 72LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v10);
    goto LABEL_56;
  }
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(v6, v30, v8);
  v9 = DoesKeyExist;
  if ( DoesKeyExist < 0 )
  {
    v11 = 75LL;
LABEL_14:
    v10 = (unsigned int)DoesKeyExist;
    goto LABEL_15;
  }
  if ( !LOBYTE(v30[0]) )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(v6, v13);
    v9 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v11 = 78LL;
      goto LABEL_14;
    }
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(v6, 0LL, 0LL);
    v9 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v11 = 83LL;
      goto LABEL_14;
    }
  }
  v14 = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v15 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  pv = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&pv,
          L"%llu",
          v15);
  v9 = v16;
  if ( v16 >= 0 )
  {
    pcbData = 0;
    v17 = 0;
    v18 = (WCHAR *)pv;
    ValueW = RegGetValueW(HKEY_CURRENT_USER, v6, (LPCWSTR)pv, 2u, 0LL, 0LL, &pcbData);
    v9 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v9 = ValueW;
    if ( ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -2147024894 )
    {
      v17 = v9 >= 0;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xEA,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
        (const char *)(unsigned int)v9,
        (__int64)"RegKey: %ws %ws",
        (const char *)v6,
        v18);
    }
    if ( v9 >= 0 )
    {
      if ( !v17 )
      {
LABEL_34:
        v14 = v18;
        v9 = 0;
        goto LABEL_35;
      }
      while ( 1 )
      {
        do
        {
          GetSystemTimeAsFileTime(&v33);
          v21 = v33.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v33) << 32);
        }
        while ( v15 == v21 );
        v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                (__int64)&pv,
                L"%llu",
                v33.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v33) << 32));
        v9 = v22;
        if ( v22 < 0 )
          break;
        if ( v15 != v21 )
        {
          v18 = (WCHAR *)pv;
          goto LABEL_34;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v22);
      v20 = pv;
      if ( !pv )
        goto LABEL_35;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v9);
      if ( !v18 )
      {
LABEL_35:
        v5 = v39;
        goto LABEL_36;
      }
      v20 = v18;
    }
    CoTaskMemFree(v20);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
    (const char *)(unsigned int)v16);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_36:
  if ( v9 >= 0 )
  {
    pv = 0LL;
    v35 = 0LL;
    v23 = 0LL;
    v36 = 0LL;
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&pv,
            L"%d,%ws,%ws",
            v5,
            a4,
            a2);
    v9 = v24;
    if ( v24 >= 0 )
    {
      v23 = pv;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v24);
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( v9 >= 0 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( v23[v27] );
      v28 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
              v6,
              v14,
              v23,
              (const unsigned __int16 *)(unsigned int)v27);
      v9 = v28;
      if ( v28 >= 0 )
      {
        v9 = 0;
LABEL_52:
        if ( v23 )
          CoTaskMemFree(v23);
        goto LABEL_54;
      }
      v25 = (unsigned int)v28;
      v26 = 98LL;
    }
    else
    {
      v25 = (unsigned int)v9;
      v26 = 93LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v25);
    goto LABEL_52;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
    (const char *)(unsigned int)v9);
LABEL_54:
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_56:
  if ( v6 )
    CoTaskMemFree(v6);
  return (unsigned int)v9;
}
