/*
 * XREFs of ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1C01DC750
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0208FF8 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C03B9B54 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001CBB4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C002806C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGMONITOR::OpenMonitorDataStore(DXGMONITOR *this, char a2, void **a3)
{
  bool v3; // zf
  char v7; // si
  __int64 v8; // r9
  unsigned __int16 v9; // ax
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 76) == 1;
  Destination = 0LL;
  if ( !v3 )
    WdLogSingleEntry0(1LL);
  if ( !*((_WORD *)this + 192) )
  {
    WdLogSingleEntry2(2LL, (char *)this - 8, -1073741637LL);
    return 3221225659LL;
  }
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 80LL))(*((_QWORD *)this + 20)) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 88LL))(*((_QWORD *)this + 20)) )
    {
      v7 = 1;
      goto LABEL_5;
    }
    v17 = WdLogNewEntry5_WdTrace(v16, v15);
    *(_QWORD *)(v17 + 24) = (char *)this - 8;
    *(_QWORD *)(v17 + 32) = -1073741637LL;
    return 3221225659LL;
  }
LABEL_5:
  v9 = *((_WORD *)this + 192) + 170;
  Destination.MaximumLength = v9;
  if ( v7 )
  {
    v9 += *((_WORD *)this + 208);
    Destination.MaximumLength = v9;
  }
  Destination.Buffer = (wchar_t *)operator new[](v9, 0x4D677844u, 256LL, v8);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 24);
    if ( v7 )
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 26);
    v10 = a2 != 0 ? 0xFFF2FFDA : 0;
    v13 = DxgkOpenRegistrySubkey(a3, v10 + 983103, 0LL, &Destination);
    if ( v13 == -1073741772
      && (a2 || (v13 = DxgkCreateRegistrySubkey(a3, v10 + 983103, 0LL, &Destination), v13 == -1073741772)) )
    {
      v18 = WdLogNewEntry5_WdTrace(v12, v11);
      *(_QWORD *)(v18 + 24) = (char *)this - 8;
      *(_QWORD *)(v18 + 32) = -1073741772LL;
    }
    else if ( v13 < 0 )
    {
      WdLogSingleEntry2(2LL, (char *)this - 8, v13);
    }
    operator delete[](Destination.Buffer);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(6LL, (char *)this - 8);
    return 3221225495LL;
  }
}
