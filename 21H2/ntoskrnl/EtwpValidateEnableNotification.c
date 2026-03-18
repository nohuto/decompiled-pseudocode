/*
 * XREFs of EtwpValidateEnableNotification @ 0x14078FE24
 * Callers:
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 * Callees:
 *     EtwpValidateFilterDescriptors @ 0x1406CED44 (EtwpValidateFilterDescriptors.c)
 *     EtwpCheckNotificationAccess @ 0x14078EE9C (EtwpCheckNotificationAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // edx
  char v18; // cl
  int v19; // eax
  unsigned int v20; // edx
  __int64 result; // rax

  *a5 = 0LL;
  if ( *(_DWORD *)(a2 + 4) < 0x78u
    || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors((_DWORD *)a2, a6)
    || *(_DWORD *)(a2 + 72) > 2u )
  {
    return 3221225485LL;
  }
  v10 = *(unsigned __int16 *)(a2 + 78);
  *(_BYTE *)(a4 + 18) = (*(_WORD *)(a2 + 78) & 0x8000) != 0;
  if ( (v10 & 0x8000) != 0 )
  {
    v17 = *(_DWORD *)(a2 + 80);
    if ( (v17 & 0x20) != 0 || (v17 & 0x400) != 0 )
      return 3221225485LL;
    v16 = 0;
  }
  else
  {
    if ( (_DWORD)v10 == 3 )
      return 3221225506LL;
    v11 = PrivateLoggerNotificationGuid - *(_QWORD *)(a2 + 40);
    if ( (_QWORD)PrivateLoggerNotificationGuid == *(_QWORD *)(a2 + 40) )
      v11 = *((_QWORD *)&PrivateLoggerNotificationGuid + 1) - *(_QWORD *)(a2 + 48);
    if ( !v11 )
      return 3221225485LL;
    v12 = EtwpAcquireLoggerContextByLoggerId(a1, v10, 0LL);
    v13 = v12;
    if ( !v12 )
      goto LABEL_31;
    v14 = a1 == EtwpHostSiloState;
    *a5 = v12;
    if ( !v14 && (*(_DWORD *)(a2 + 80) & 0x400) != 0
      || (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (*(_DWORD *)(v12 + 12) & 0x1030800) != 0 )
    {
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(v12 + 816) & 0x40) != 0 )
    {
LABEL_31:
      v16 = -1073741162;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)(v12 + 276);
      v15 = *(_DWORD *)(v12 + 12);
      if ( (v15 & 0x80u) != 0 )
      {
        *(_BYTE *)(a4 + 16) = 1;
        v15 = *(_DWORD *)(v13 + 12);
      }
      if ( (v15 & 0x1000000) != 0 )
        *(_BYTE *)(a4 + 17) = 1;
      if ( a3 )
        v16 = EtwpCheckNotificationAccess((_QWORD *)(a2 + 40), a4);
      else
        v16 = 0;
    }
    v17 = *(_DWORD *)(a2 + 80);
  }
  v18 = v17;
  v19 = v17 | 0x40;
  v20 = v17 & 0xFFFFFFEF;
  if ( (v18 & 0x10) == 0 )
    v20 = v19;
  result = v16;
  *(_DWORD *)(a2 + 80) = v20;
  return result;
}
