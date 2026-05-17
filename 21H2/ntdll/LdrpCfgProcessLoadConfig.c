/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x18000FDB4
 * Callers:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800DB6D0 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x18000F280 (LdrpMakePermanentImageCommit.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007C6B0 (LdrpIsModuleUnderSystem32.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x1800853A8 (LdrpLogCFGModuleInfoTelemetry.c)
 *     ZwProtectVirtualMemory @ 0x18009E040 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int16 *v4; // r14
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall **v12)(); // r14
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v15)(); // rax
  __int64 (__fastcall **v16)(); // rdi
  unsigned __int64 v17; // rcx
  __int64 (__fastcall *v18)(); // rax
  int v19; // edi
  unsigned __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+50h] BYREF
  char v24; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
  v6 = (LdrpPolicyBits & 4 | 0x7B) << 8;
  v7 = (v6 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v7;
  if ( (v6 & v7) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32() )
  {
    if ( v5 == LdrpImageEntry )
      v19 = v7 | 0x200;
    else
      v19 = v7 | 0x100;
    *(_DWORD *)(v5 + 280) = v19;
  }
  if ( (*(_DWORD *)(v3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(v5 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(v3 + 144) & 0x2000) != 0 )
    {
      LOWORD(a3) = 13;
      LOBYTE(a2) = 1;
      v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v5 + 48), (_DWORD)a2, a3, (unsigned int)&v24, (__int64)&v22);
      v9 = v22;
      if ( v8 < 0 )
        v9 = 0LL;
      if ( v9 )
      {
        v10 = (__int64)v4 + v4[10] + 24;
        a1 = 0LL;
        if ( v4[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v9 + 12) - *(_DWORD *)(v10 + 12)) >= *(_DWORD *)(v10 + 8) )
          {
            a1 = (unsigned int)(a1 + 1);
            v10 += 40LL;
            if ( (unsigned int)a1 >= v4[3] )
              goto LABEL_14;
          }
          v21 = *(_QWORD *)(v5 + 48) + *(unsigned int *)(v10 + 12);
          v20 = *(unsigned int *)(v10 + 8);
          LdrpMakePermanentImageCommit(v21, v20);
          ZwProtectVirtualMemory(-1LL, &v21, &v20, 2LL, &v23);
        }
      }
    }
  }
LABEL_14:
  if ( (unsigned int)LdrControlFlowGuardEnforced(a1) )
  {
    LOBYTE(v11) = (v4[47] & 0x4000) != 0;
    if ( ((unsigned __int8)v11 & ((*(_DWORD *)(v3 + 144) & 0x100) != 0)) == 0 )
      LdrpLogCFGModuleInfoTelemetry(v5, v4);
  }
  if ( !(unsigned int)LdrControlFlowGuardEnforced(v11) || (v4[47] & 0x4000) == 0 || (*(_DWORD *)(v3 + 144) & 0x100) == 0 )
    return 0LL;
  v12 = *(__int64 (__fastcall ***)())(v3 + 112);
  if ( v12
    && (v13 = *(_QWORD *)(v5 + 48), (unsigned __int64)v12 >= v13)
    && (unsigned __int64)v12 < *(unsigned int *)(v5 + 64) + v13 - 8
    && *v12 )
  {
    v21 = *(_QWORD *)(v3 + 112);
    v20 = 8LL;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v20, 4LL, &v23);
    if ( (int)result < 0 )
      return result;
    if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
      || (v15 = LdrpValidateUserCallTargetES, (*(_DWORD *)(v3 + 144) & 0x4000) == 0) )
    {
      v15 = LdrpValidateUserCallTarget;
    }
    *v12 = v15;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v20, v23, &v23);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
  }
  v16 = *(__int64 (__fastcall ***)())(v3 + 120);
  if ( !v16
    || (v17 = *(_QWORD *)(v5 + 48), (unsigned __int64)v16 < v17)
    || (unsigned __int64)v16 >= *(unsigned int *)(v5 + 64) + v17 - 8
    || !*v16 )
  {
    v16 = 0LL;
    goto LABEL_35;
  }
  v21 = *(_QWORD *)(v3 + 120);
  v20 = 8LL;
  result = ZwProtectVirtualMemory(-1LL, &v21, &v20, 4LL, &v23);
  if ( (int)result >= 0 )
  {
    if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
      || (v18 = LdrpDispatchUserCallTargetES, (*(_DWORD *)(v3 + 144) & 0x4000) == 0) )
    {
      v18 = LdrpDispatchUserCallTarget;
    }
    *v16 = v18;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v20, v23, &v23);
    if ( (int)result >= 0 )
    {
LABEL_35:
      if ( !v12
        || *v12 != LdrpValidateUserCallTarget && *v12 != LdrpValidateUserCallTargetES
        || v16 && *v16 != LdrpDispatchUserCallTarget && *v16 != LdrpDispatchUserCallTargetES )
      {
        return 3221225534LL;
      }
      return 0LL;
    }
  }
  return result;
}
