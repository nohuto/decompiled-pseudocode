/*
 * XREFs of EtwpValidateEnableNotification @ 0x14067EB30
 * Callers:
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x14067F064 (EtwpCheckNotificationAccess.c)
 *     EtwpValidateFilterDescriptors @ 0x1407A1A7C (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v10; // edx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // edx
  char v19; // cl
  int v20; // eax
  unsigned int v21; // edx
  __int64 result; // rax

  *a5 = 0LL;
  if ( *(_DWORD *)(a2 + 4) < 0x78u
    || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors(a2, a6)
    || *(_DWORD *)(a2 + 72) > 2u )
  {
    return 3221225485LL;
  }
  v10 = *(unsigned __int16 *)(a2 + 78);
  v11 = *(_WORD *)(a2 + 78) & 0x8000;
  *(_BYTE *)(a4 + 18) = v11 != 0;
  if ( v11 )
  {
    v18 = *(_DWORD *)(a2 + 80);
    if ( (v18 & 0x20) == 0 && (v18 & 0x400) == 0 )
    {
      v17 = 0;
      goto LABEL_20;
    }
    return 3221225485LL;
  }
  if ( v10 == 3 )
    return 3221225506LL;
  v12 = *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 - *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 == *(_QWORD *)(a2 + 40) )
    v12 = *(_QWORD *)PrivateLoggerNotificationGuid.Data4 - *(_QWORD *)(a2 + 48);
  if ( !v12 )
    return 3221225485LL;
  v13 = EtwpAcquireLoggerContextByLoggerId(a1, v10, 0);
  v14 = v13;
  if ( !v13 )
    goto LABEL_31;
  v15 = a1 == EtwpHostSiloState;
  *a5 = v13;
  if ( !v15 && (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (*(_DWORD *)(v13 + 12) & 0x1030800) != 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v13 + 832) & 0x40) == 0 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(v13 + 292);
    v16 = *(_DWORD *)(v13 + 12);
    if ( (v16 & 0x80u) != 0 )
    {
      *(_BYTE *)(a4 + 16) = 1;
      v16 = *(_DWORD *)(v14 + 12);
    }
    if ( (v16 & 0x1000000) != 0 )
      *(_BYTE *)(a4 + 17) = 1;
    if ( a3 )
      v17 = EtwpCheckNotificationAccess(a2 + 40, a4);
    else
      v17 = 0;
    goto LABEL_19;
  }
LABEL_31:
  v17 = -1073741162;
LABEL_19:
  v18 = *(_DWORD *)(a2 + 80);
LABEL_20:
  v19 = v18;
  v20 = v18 | 0x40;
  v21 = v18 & 0xFFFFFFEF;
  if ( (v19 & 0x10) == 0 )
    v21 = v20;
  result = v17;
  *(_DWORD *)(a2 + 80) = v21;
  return result;
}
