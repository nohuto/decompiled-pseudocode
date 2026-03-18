/*
 * XREFs of KiMcheckAlternateReturn @ 0x14057C3C0
 * Callers:
 *     KxMcheckAlternateReturn @ 0x140431640 (KxMcheckAlternateReturn.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14051CD90 (WheaGetErrPacketFromErrRecord.c)
 *     KiAltContextWorkQueueAddItem @ 0x14057C248 (KiAltContextWorkQueueAddItem.c)
 *     WheaRecoveryBugCheck @ 0x1406435C0 (WheaRecoveryBugCheck.c)
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 *     WheaGetCurrentProcessName @ 0x140644BE4 (WheaGetCurrentProcessName.c)
 *     WheaProcessWaitingETWEvents @ 0x140645F50 (WheaProcessWaitingETWEvents.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x140A08E84 (WheaTerminateProcess.c)
 */

LONG __fastcall KiMcheckAlternateReturn(int *a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // rbx
  char v3; // r12
  __int64 v4; // rdi
  int v6; // esi
  __int64 CurrentIrql; // r15
  unsigned int v8; // r10d
  unsigned int *v9; // rdx
  unsigned int *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  unsigned int v17; // esi
  LONG result; // eax
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 ErrorSource; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  _DWORD Src[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h]
  int v26; // [rsp+40h] [rbp-30h]
  int v27; // [rsp+44h] [rbp-2Ch]
  int v28; // [rsp+48h] [rbp-28h]
  int v29; // [rsp+4Ch] [rbp-24h]
  int v30; // [rsp+50h] [rbp-20h]
  unsigned __int64 v31; // [rsp+54h] [rbp-1Ch]
  int v32; // [rsp+5Ch] [rbp-14h]
  char v33; // [rsp+60h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0LL;
  v3 = *(_BYTE *)a1 & 0x10;
  v4 = 0LL;
  v6 = -1073741637;
  CurrentIrql = KeGetCurrentIrql();
  v8 = *(unsigned __int16 *)(v1 + 10);
  v9 = (unsigned int *)(v1 + 128);
  v22 = CurrentIrql;
  v10 = (unsigned int *)(v1 + 128);
  v11 = 0LL;
  if ( (_WORD)v8 )
  {
    while ( 1 )
    {
      v12 = *((_QWORD *)v10 + 2) - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
      if ( !v12 )
        v12 = *((_QWORD *)v10 + 3) - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
      if ( !v12 )
        break;
      v10 += 18;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v8 )
        goto LABEL_32;
    }
    v13 = v1 + *v10;
    v14 = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)v9 + 2) - RECOVERY_INFO_SECTION_GUID;
      if ( !v15 )
        v15 = *((_QWORD *)v9 + 3) - *((_QWORD *)&RECOVERY_INFO_SECTION_GUID + 1);
      if ( !v15 )
        break;
      v9 += 18;
      if ( ++v14 >= v8 )
        goto LABEL_15;
    }
    v4 = v1 + *v9;
LABEL_15:
    v2 = *(_QWORD *)(v13 + 48);
    if ( (*a1 & 4) != 0 )
    {
      if ( v4 )
        *(_DWORD *)(v4 + 1) |= 8u;
      if ( (_BYTE)CurrentIrql )
      {
        if ( KiAltReturnInitialized )
        {
          v16 = 0;
          while ( _InterlockedCompareExchange(&dword_140D04590[12 * v16], 1, 0) )
          {
            if ( ++v16 >= 0x10u )
            {
              v6 = -1073741670;
              goto LABEL_32;
            }
          }
          CurrentIrql = 6LL * v16;
          *(_OWORD *)((char *)&KiAltContextWrapper + 48 * v16 + 24) = *(_OWORD *)a1;
          _InterlockedAdd((volatile signed __int32 *)&KiAltContextWrapper + 12 * v16 + 4, 1u);
          KiAltContextWorkQueueAddItem((PLIST_ENTRY)&KiAltContextWrapper + 3 * v16);
          v17 = 0;
          while ( *((int *)&KiAltContextWrapper + 2 * CurrentIrql + 4) > 1 )
          {
            KeStallExecutionProcessor(0x32u);
            v17 += 50;
            if ( v17 >= 0x1E8480 )
            {
              *((_DWORD *)&KiAltContextWrapper + 2 * CurrentIrql + 10) = 258;
              break;
            }
          }
          v6 = *((_DWORD *)&KiAltContextWrapper + 2 * CurrentIrql + 10);
          _InterlockedExchange((volatile __int32 *)&KiAltContextWrapper + 2 * CurrentIrql + 4, 0);
          LOBYTE(CurrentIrql) = v22;
          if ( !v6 && (unsigned __int8)v22 >= 2u )
            v6 = -1073741595;
        }
      }
      else
      {
        LOBYTE(v11) = v3;
        v6 = WheaAttemptPhysicalPageOffline(v2 >> 12, 0LL, 1LL, v11);
      }
    }
  }
LABEL_32:
  Src[0] = 1733060695;
  Src[1] = 1;
  v30 = *a1;
  v25 = 49LL;
  v27 = -2147483595;
  v26 = 1280201291;
  v28 = 2;
  v29 = 17;
  v31 = v2;
  v32 = v6;
  v33 = v3;
  result = WheaLogInternalEvent(Src);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 13) = CurrentIrql;
    v23 = v4 + 19;
    LODWORD(v22) = 20;
    result = WheaGetCurrentProcessName(&v23, &v22);
  }
  if ( v6 == 259 )
  {
    result = *a1;
    if ( (*a1 & 8) != 0 && !v3 )
    {
      if ( v4 )
        *(_DWORD *)(v4 + 1) |= 2u;
      result = WheaTerminateProcess();
    }
  }
  *(_DWORD *)(v1 + 104) &= ~0x80u;
  if ( !v6 )
    return WheaProcessWaitingETWEvents();
  if ( v3 )
  {
    ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)v1);
    if ( ErrPacketFromErrRecord )
    {
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      v21 = (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64);
    }
    else
    {
      v21 = 0LL;
    }
    if ( v4 )
    {
      *(_BYTE *)(v4 + 14) = 0;
      switch ( v6 )
      {
        case 258:
          *(_DWORD *)(v4 + 15) = 2;
          break;
        case -1073741670:
          *(_DWORD *)(v4 + 15) = 11;
          break;
        case 259:
          *(_DWORD *)(v4 + 15) = 1;
          break;
        default:
          *(_DWORD *)(v4 + 15) = 16 - (v6 != -1073741595);
          break;
      }
    }
    *(_DWORD *)(v1 + 104) &= ~1u;
    *(_DWORD *)(v1 + 12) = 1;
    result = WheaRecoveryBugCheck(v1, v21, 0LL);
  }
  if ( v6 >= 0 )
    return WheaProcessWaitingETWEvents();
  return result;
}
