/*
 * XREFs of ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107624
 * Callers:
 *     ?ndisNDKGlobalDisabled@@YAEXZ @ 0x1C00FF7C4 (-ndisNDKGlobalDisabled@@YAEXZ.c)
 *     ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1C00FF80C (-ndisReadNDKGlobalFlags@@YAKXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0143678 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C01437E8 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C01446A4 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0023A9C (WPP_RECORDER_SF_Sd.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0031848 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0073E98 (WPP_RECORDER_SF_SD_ea_1C0073E98.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C0107908 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 */

__int64 __fastcall ndisReadRegistryKnobs(
        struct _DRIVER_OBJECT *a1,
        const struct NDIS_REGISTRY_KNOB *a2,
        unsigned __int64 a3)
{
  PVOID v3; // rbx
  const struct NDIS_REGISTRY_KNOB *v5; // rdi
  char *v6; // rdx
  unsigned __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  unsigned __int64 v13; // r12
  unsigned int *v14; // rsi
  unsigned int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-10h]
  KRegKey v18; // [rsp+80h] [rbp+40h] BYREF
  KRegKey v19; // [rsp+90h] [rbp+50h] BYREF
  NTSTATUS (__stdcall *v20)(HANDLE); // [rsp+98h] [rbp+58h] BYREF

  v18.m_ptr = a1;
  v3 = ndisDriverObject;
  v5 = a2;
  if ( a3 )
  {
    v6 = (char *)a2 + 8;
    v7 = a3;
    do
    {
      v8 = *(_DWORD **)v6;
      v9 = *((_DWORD *)v6 + 2);
      v6 += 24;
      *v8 = v9;
      --v7;
    }
    while ( v7 );
  }
  v19.m_ptr = 0LL;
  v18.m_ptr = 0LL;
  v20 = 0LL;
  v10 = IoOpenDriverRegistryKey(v3, 1LL, 1LL, 0LL, &v20);
  v11 = v10;
  if ( v10 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_4a4075fe2f1e38e8e9e04cbdaa520e6d_Traceguids,
        v10);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (__int64 *)&v18,
      (__int64)v20);
    v20 = 0LL;
    v12 = IoOpenDriverRegistryKey(v3, 0LL, 1LL, 0LL, &v20);
    v11 = v12;
    if ( v12 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_4a4075fe2f1e38e8e9e04cbdaa520e6d_Traceguids,
          v12);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (__int64 *)&v19,
        (__int64)v20);
      v13 = 0LL;
      if ( a3 )
      {
        while ( 1 )
        {
          v14 = (unsigned int *)*((_QWORD *)v5 + 1);
          if ( !v18.m_ptr )
            goto LABEL_17;
          v15 = KRegKey::QueryValueUlong(&v18, *(const wchar_t **)v5, *((unsigned int **)v5 + 1));
          if ( v15 + 1073741789 <= 1 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v17) = v15;
              WPP_RECORDER_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                1u,
                0xAu,
                (struct _GUID *)&WPP_4a4075fe2f1e38e8e9e04cbdaa520e6d_Traceguids,
                *(const wchar_t **)v5,
                v17);
            }
            v15 = 0;
          }
          if ( v15 == -1073741772 )
          {
LABEL_17:
            v15 = KRegKey::QueryValueUlong(&v19, *(const wchar_t **)v5, v14);
            if ( v15 == -1073741772 )
            {
              *v14 = *((_DWORD *)v5 + 4);
              v15 = 0;
            }
          }
          v11 = v15;
          if ( v15 )
            break;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            LODWORD(v17) = **((_DWORD **)v5 + 1);
            WPP_RECORDER_SF_SD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              1u,
              0xDu,
              (struct _GUID *)&WPP_4a4075fe2f1e38e8e9e04cbdaa520e6d_Traceguids,
              *(const wchar_t **)v5,
              v17);
          }
          ++v13;
          v5 = (const struct NDIS_REGISTRY_KNOB *)((char *)v5 + 24);
          if ( v13 >= a3 )
            goto LABEL_27;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = v15;
          WPP_RECORDER_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xEu,
            (struct _GUID *)&WPP_4a4075fe2f1e38e8e9e04cbdaa520e6d_Traceguids,
            *(const wchar_t **)v5,
            v17);
        }
      }
    }
LABEL_27:
    if ( v18.m_ptr )
    {
      v20 = ZwClose;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v20, &v18);
    }
  }
  if ( v19.m_ptr )
  {
    v18.m_ptr = v19.m_ptr;
    v19.m_ptr = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v19, &v18);
  }
  return v11;
}
