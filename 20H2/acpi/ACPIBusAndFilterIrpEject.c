/*
 * XREFs of ACPIBusAndFilterIrpEject @ 0x1C00AD3B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0002320 (ACPIInternalClearFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E028 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpEject(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // bp
  unsigned __int8 v6; // r12
  __int64 DeviceExtension; // rax
  __int64 *v8; // rbx
  const char *v9; // rsi
  int v10; // edi
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  const char *v16; // rdx
  const char *v17; // rcx
  char *IrpText; // rax
  const char *v19; // r8
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF

  v21 = 0LL;
  v5 = a2;
  v6 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = (__int64 *)DeviceExtension;
  v9 = byte_1C00701BA;
  if ( *(_QWORD *)(DeviceExtension + 720) )
  {
    if ( *(_DWORD *)(DeviceExtension + 328) <= 1u )
    {
      ACPIInternalClearFlags((void *)(DeviceExtension + 8), 2048LL);
      ACPIGet(v8, 810173791, 277872640, v14, 4, 0LL, 0LL, 0LL, 0LL);
      v10 = ACPIGet(v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v21, 0LL);
      if ( v10 >= 0 && !a4 )
      {
        v15 = v8[1];
        if ( (v15 & 2) == 0 )
        {
          v16 = byte_1C00701BA;
          v17 = byte_1C00701BA;
          if ( (v15 & 0x200000000000LL) != 0 )
          {
            v16 = (const char *)v8[71];
            if ( (v15 & 0x400000000000LL) != 0 )
              v17 = (const char *)v8[72];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xBu,
              (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
              v5,
              (char)v8,
              v16,
              v17);
          v10 = -1073741823;
        }
      }
    }
    else
    {
      v11 = *(_QWORD *)(DeviceExtension + 8);
      v12 = byte_1C00701BA;
      v13 = byte_1C00701BA;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v12 = (const char *)v8[71];
        if ( (v11 & 0x400000000000LL) != 0 )
          v13 = (const char *)v8[72];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xAu,
          (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
          v5,
          (char)v8,
          v12,
          v13);
      v10 = -1073741823;
    }
  }
  else
  {
    v10 = -1073741637;
  }
  if ( (v8[1] & 0x200000000000LL) != 0 )
    v9 = (const char *)v8[71];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(0x400000000000LL, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      v5,
      IrpText,
      v10,
      (char)v8,
      v9,
      v19);
  }
  return (unsigned int)v10;
}
