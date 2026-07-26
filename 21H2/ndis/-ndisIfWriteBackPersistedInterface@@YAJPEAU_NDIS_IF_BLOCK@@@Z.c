/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0126ED4
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FF9C (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C0126780 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C006262C (WPP_RECORDER_SF__guid_d.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B518 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  _GUID *p_InterfaceGuid; // r15
  int v4; // eax
  HANDLE v5; // rbx
  NTSTATUS v6; // edi
  _NDIS_MEDIUM MediaType; // r9d
  __int64 v8; // rdx
  const wchar_t *v9; // rax
  __int64 v10; // r8
  unsigned __int16 v11; // r9
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // r9d
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG DataSize; // r9d
  const char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  ULONG Length; // r8d
  const char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24[4]; // [rsp+30h] [rbp-20h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+48h] BYREF
  NTSTATUS (__stdcall *v27)(HANDLE); // [rsp+A0h] [rbp+50h] BYREF

  if ( *((_BYTE *)qword_1C00E4598 + 96) )
    return 0LL;
  KeyHandle = 0LL;
  p_InterfaceGuid = &a1->InterfaceGuid;
  v4 = ndisIfOpenInterfaceRegistryKey(&a1->InterfaceGuid, (KRegKey *)&KeyHandle, 2u, Writeback);
  v5 = KeyHandle;
  v6 = v4;
  if ( v4 >= 0 )
  {
    MediaType = a1->MediaType;
    ValueName = 0LL;
    v8 = 0x7FFFLL;
    v9 = L"MediaType";
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v8;
    }
    while ( v8 );
    v10 = (0x7FFF - v8) & -(__int64)(v8 != 0);
    v6 = v8 == 0 ? 0xC000000D : 0;
    if ( v8 )
    {
      ValueName.Buffer = L"MediaType";
      ValueName.Length = 2 * v10;
      ValueName.MaximumLength = 2 * v10 + 2;
      LODWORD(KeyHandle) = MediaType;
      v6 = ZwSetValueKey(v5, &ValueName, 0, 4u, &KeyHandle, 4u);
    }
    if ( v6 >= 0 )
    {
      PhysicalMediumType = a1->PhysicalMediumType;
      v13 = L"PhysicalMediaType";
      ValueName = 0LL;
      v14 = 0x7FFFLL;
      do
      {
        if ( !*v13 )
          break;
        ++v13;
        --v14;
      }
      while ( v14 );
      v15 = (0x7FFF - v14) & -(__int64)(v14 != 0);
      v6 = v14 == 0 ? 0xC000000D : 0;
      if ( v14 )
      {
        ValueName.Buffer = L"PhysicalMediaType";
        ValueName.Length = 2 * v15;
        ValueName.MaximumLength = 2 * v15 + 2;
        LODWORD(KeyHandle) = PhysicalMediumType;
        v6 = ZwSetValueKey(v5, &ValueName, 0, 4u, &KeyHandle, 4u);
      }
      if ( v6 >= 0 )
      {
        DataSize = a1->ifPhysAddress.Length;
        v17 = L"CurrentAddress";
        ValueName = 0LL;
        v18 = 0x7FFFLL;
        do
        {
          if ( !*(_WORD *)v17 )
            break;
          v17 += 2;
          --v18;
        }
        while ( v18 );
        v19 = (0x7FFF - v18) & -(__int64)(v18 != 0);
        v6 = v18 == 0 ? 0xC000000D : 0;
        if ( v18 )
        {
          ValueName.Buffer = (wchar_t *)L"CurrentAddress";
          ValueName.Length = 2 * v19;
          ValueName.MaximumLength = 2 * v19 + 2;
          v6 = ZwSetValueKey(v5, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize);
        }
        if ( v6 >= 0 )
        {
          Length = a1->PermanentPhysAddress.Length;
          v21 = L"PermanentAddress";
          ValueName = 0LL;
          v22 = 0x7FFFLL;
          do
          {
            if ( !*(_WORD *)v21 )
              break;
            v21 += 2;
            --v22;
          }
          while ( v22 );
          v23 = (0x7FFF - v22) & -(__int64)(v22 != 0);
          v6 = v22 == 0 ? 0xC000000D : 0;
          if ( v22 )
          {
            ValueName.Buffer = (wchar_t *)L"PermanentAddress";
            ValueName.Length = 2 * v23;
            ValueName.MaximumLength = 2 * v23 + 2;
            v6 = ZwSetValueKey(v5, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, Length);
          }
          if ( v6 >= 0 )
          {
            v6 = 0;
            goto LABEL_38;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v11 = 25;
            goto LABEL_28;
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v11 = 24;
          goto LABEL_28;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = 23;
        goto LABEL_28;
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = 22;
LABEL_28:
      *(_DWORD *)v24 = v6;
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        v11,
        (struct _GUID *)&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids,
        (__int64)p_InterfaceGuid,
        *(_DWORD *)v24);
    }
  }
LABEL_38:
  if ( v5 )
  {
    v27 = ZwClose;
    KeyHandle = v5;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v27, &KeyHandle);
  }
  return (unsigned int)v6;
}
