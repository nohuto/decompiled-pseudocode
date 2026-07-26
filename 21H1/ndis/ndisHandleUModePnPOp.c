/*
 * XREFs of ndisHandleUModePnPOp @ 0x1C001D644
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C0075BC4 (ndisHandleProtocolUnloadNotification.c)
 *     McTemplateK0qzz_EtwWriteTransfer @ 0x1C0075EBC (McTemplateK0qzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sZZ @ 0x1C0075FA4 (WPP_RECORDER_SF_sZZ.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B2F88 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisHandleBindNotification @ 0x1C0117898 (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1C0117A04 (ndisHandleLegacyBindIoctl.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0139464 (ndisHandleProtocolReconfigNotification.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(__int64 a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const char *v8; // rcx
  void *v9; // rdx
  const char *v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // r8d
  __int64 v13; // r10
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-10h]

  ndisWaitForKernelObject(&ndisPnPMutex);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = a1 + 24;
      v8 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v8 = "TDI ";
      v15 = a1 + 40;
      HIDWORD(v14) = HIDWORD(v8);
      WPP_RECORDER_SF_sZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)"TDI ", v3, 23);
    }
    if ( (byte_1C00E6084 & 1) != 0 )
    {
      v9 = &ProtocolBind;
LABEL_23:
      McTemplateK0qzz_EtwWriteTransfer(v2, (_DWORD)v9, v3, *(_DWORD *)a1, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 32));
    }
  }
  else if ( v4 == 2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = a1 + 24;
      v10 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v10 = "TDI ";
      v15 = a1 + 40;
      HIDWORD(v14) = HIDWORD(v10);
      WPP_RECORDER_SF_sZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)"TDI ", v3, 24);
    }
    if ( (byte_1C00E6084 & 1) != 0 )
    {
      v9 = &ProtocolUnbind;
      goto LABEL_23;
    }
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v11 = *(_DWORD *)(a1 + 4);
    if ( v11 > 9 )
    {
      if ( v11 > 0xB )
      {
        if ( v11 == 14 )
        {
          v5 = ndisIfAliasChange((const struct _UNICODE_STRING *)(a1 + 24), (const struct _UNICODE_STRING *)(a1 + 40));
          goto LABEL_7;
        }
        if ( v11 != 15 )
          goto LABEL_10;
      }
    }
    else
    {
      if ( v11 == 9 )
      {
        v12 = *(_DWORD *)(a1 + 16) >> 1;
        if ( v12 >= 2 )
        {
          v13 = *(_QWORD *)(a1 + 8);
          if ( *(_WORD *)(v13 + 2LL * (v12 - 1)) || *(_WORD *)(v13 + 2LL * (v12 - 2)) )
            goto LABEL_10;
        }
        goto LABEL_38;
      }
      if ( !v11 )
        goto LABEL_10;
      if ( v11 > 2 )
      {
        if ( v11 != 3 )
        {
          if ( v11 == 5 )
          {
            v5 = ndisHandleProtocolUnloadNotification((PCUNICODE_STRING)(a1 + 40));
            goto LABEL_7;
          }
          if ( v11 == 6 )
          {
            v6 = -1073741637;
            goto LABEL_8;
          }
LABEL_10:
          v6 = -1073741811;
          goto LABEL_8;
        }
LABEL_38:
        v5 = ndisHandleProtocolReconfigNotification((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(a1 + 40), v11);
        goto LABEL_7;
      }
      ndisHandleLegacyBindIoctl((struct _UNICODE_STRING *)(a1 + 24));
    }
    v5 = ndisHandleBindNotification((struct _UNICODE_STRING *)(a1 + 24));
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 != 2 )
    goto LABEL_10;
  if ( !ndisTdiPnPHandler )
  {
    v6 = -1073741823;
    goto LABEL_8;
  }
  LODWORD(v14) = *(_DWORD *)(a1 + 4);
  v5 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD, __int64, __int64, __int64))ndisTdiPnPHandler)(
         a1 + 40,
         a1 + 24,
         a1 + 56,
         *(_QWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 16),
         v14,
         v15,
         v16);
LABEL_7:
  v6 = v5;
LABEL_8:
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v6;
}
