/*
 * XREFs of ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C018942C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133190 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183448 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0185F78 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     MonitorSetAppOverride @ 0x1C02F4808 (MonitorSetAppOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::RecordFeatureUsage(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  NTSTATUS v7; // edi
  wchar_t *v8; // rdx
  __int64 v9; // rax
  wchar_t *v10; // rcx
  __int128 v12; // [rsp+50h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  int Data; // [rsp+E8h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+F0h] [rbp+7Fh] BYREF

  Data = a3;
  v3 = a2;
  if ( (unsigned int)(a2 - 10) > 1 && *(_BYTE *)(a2 + a1 + 304576) )
    return 0LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v12 = 0LL;
  v5 = 0x7FFFLL;
  v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( v5 )
  {
    *((_QWORD *)&v12 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
    LOWORD(v12) = 2 * (0x7FFF - v5);
    WORD1(v12) = v12 + 2;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 704;
  v7 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( !v7 )
  {
    _mm_lfence();
    v8 = off_1C0072A40[v3];
    ValueName = 0LL;
    if ( v8 )
    {
      v9 = 0x7FFFLL;
      v10 = v8;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v9;
      }
      while ( v9 );
      if ( v9 )
      {
        ValueName.Buffer = v8;
        ValueName.Length = 2 * (0x7FFF - v9);
        ValueName.MaximumLength = ValueName.Length + 2;
      }
    }
    v7 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  if ( v7 >= 0 )
    *(_BYTE *)(v3 + a1 + 304576) = 1;
  return (unsigned int)v7;
}
