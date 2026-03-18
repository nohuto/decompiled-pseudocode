/*
 * XREFs of ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C0210118
 * Callers:
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C017CD1C (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B07D0 (-UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z @ 0x1C02189F8 (-DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z.c)
 *     ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1C021CE98 (-DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UpdateDiagnosticReporting(DXGADAPTER *this, UINT *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v6; // rdi
  UINT v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 Value; // rcx
  _QWORD *v14; // rax
  UINT v15; // esi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT v22; // [rsp+20h] [rbp-20h] BYREF

  v3 = a2[3];
  LODWORD(v4) = 0;
  v6 = v3;
  if ( *((_DWORD *)this + v3 + 1096) < *((_DWORD *)this + v3 + 1098) )
  {
    *((_DWORD *)this + v3 + 1098) = 0;
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 159) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      v7 = *a2;
      *(_QWORD *)&v22.NoninvasiveTypes.Notifications.0 = 0LL;
      v22.DiagnosticCategory.Value = v7;
      v8 = DXGADAPTER::DdiQueryDiagnosticTypesSupport(this, &v22);
      v4 = v8;
      if ( v8 < 0 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
        v14[3] = v22.DiagnosticCategory.Value;
        v14[4] = v4;
        v14[5] = 3LL;
        WdLogEvent5_WdWarning(v14);
        goto LABEL_14;
      }
      if ( ((v22.NoninvasiveTypes.Notifications.Value | v22.InvasiveTypes.Notifications.Value) & a2[2]) != 0 )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v22.NoninvasiveTypes.Notifications.Value);
        v12[3] = v22.DiagnosticCategory.Value;
        v12[4] = v22.NoninvasiveTypes.Notifications.Value;
        Value = v22.InvasiveTypes.Notifications.Value;
        v12[6] = 2LL;
      }
      else
      {
        if ( (v22.NoninvasiveTypes.Notifications.Value & v22.InvasiveTypes.Notifications.Value) == 0 )
        {
          *((_DWORD *)this + v6 + 1096) = v22.NoninvasiveTypes.Notifications.Value | v22.InvasiveTypes.Notifications.Value;
          goto LABEL_14;
        }
        v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v22.NoninvasiveTypes.Notifications.Value);
        v12[3] = v22.DiagnosticCategory.Value;
        v12[4] = v22.NoninvasiveTypes.Notifications.Value;
        Value = v22.InvasiveTypes.Notifications.Value;
        v12[6] = 1LL;
      }
      v12[5] = Value;
      WdLogEvent5_WdError(v12);
      goto LABEL_14;
    }
    if ( (_DWORD)v3 == 1 && *((int *)this + 582) >= 8960 )
      *((_DWORD *)this + v3 + 1096) = 1;
  }
LABEL_14:
  v15 = a2[1] & *((_DWORD *)this + v6 + 1096);
  if ( *((_DWORD *)this + v6 + 1096) && *((_DWORD *)this + v6 + 1098) != v15 )
  {
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 159) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      || (v22.DiagnosticCategory.Value = *(_QWORD *)a2,
          v22.NoninvasiveTypes.Notifications.Value = v15,
          v16 = DXGADAPTER::DdiControlDiagnosticReporting(this, (struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *)&v22),
          v4 = v16,
          v16 >= 0) )
    {
      *((_DWORD *)this + v6 + 1098) = v15;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v20[3] = *a2;
      v20[4] = a2[1];
      v20[5] = v4;
      v20[6] = 4LL;
      WdLogEvent5_WdWarning(v20);
    }
  }
  return (unsigned int)v4;
}
