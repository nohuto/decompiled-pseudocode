/*
 * XREFs of DbgkCreateThread @ 0x140702604
 * Callers:
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmGetFileObjectForSection @ 0x14066BA80 (MmGetFileObjectForSection.c)
 *     PsWow64GetProcessNtdllType @ 0x140672A7C (PsWow64GetProcessNtdllType.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
 *     PsCallImageNotifyRoutines @ 0x1406F84B0 (PsCallImageNotifyRoutines.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PspReferenceSystemDll @ 0x140757130 (PspReferenceSystemDll.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140928158 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x14092A070 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14092AAC4 (DbgkpSectionToFileHandle.c)
 */

__int64 __fastcall DbgkCreateThread(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  char v4; // r12
  __int64 v5; // rax
  int i; // r14d
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  void *FileObjectForSection; // rax
  __int16 v11; // ax
  char v12; // al
  __int64 v13; // rax
  char v14; // [rsp+20h] [rbp-1A8h]
  PVOID Object; // [rsp+28h] [rbp-1A0h] BYREF
  int v16; // [rsp+30h] [rbp-198h]
  __int64 v17; // [rsp+38h] [rbp-190h]
  _QWORD *v18; // [rsp+40h] [rbp-188h]
  __int128 v19; // [rsp+48h] [rbp-180h] BYREF
  __int128 v20; // [rsp+58h] [rbp-170h]
  __int128 v21; // [rsp+68h] [rbp-160h]
  __int64 v22; // [rsp+78h] [rbp-150h]
  __int64 v23; // [rsp+80h] [rbp-148h]
  _QWORD v24[34]; // [rsp+90h] [rbp-138h] BYREF

  v18 = a1;
  memset(v24, 0, sizeof(v24));
  v2 = a1[23];
  v17 = v2;
  if ( !*(_QWORD *)(v2 + 1408)
    || ((v11 = *(_WORD *)(v2 + 2412), v11 == 332) || v11 == 452 ? (v12 = 1) : (v12 = 0), v14 = 1, !v12) )
  {
    v14 = 0;
  }
  _m_prefetchw((const void *)(v2 + 1124));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 1124), 0x400001u);
  v4 = result;
  v16 = result;
  if ( (result & 0x400000) == 0 && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask[0] & 4) != 0) )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    Object = 0LL;
    BYTE8(v19) = 3;
    *(_QWORD *)&v20 = *(_QWORD *)(v2 + 1312);
    *(_QWORD *)&v21 = 0LL;
    v5 = RtlImageNtHeader(v20);
    if ( v5 )
      *(_QWORD *)&v21 = *(unsigned int *)(v5 + 80);
    DWORD2(v20) = 0;
    DWORD2(v21) = 0;
    PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)v2, (__int64 *)&Object);
    PsCallImageNotifyRoutines(*(unsigned __int16 **)(v2 + 1472), v2, (__int64)&v19, (__int64)Object);
    result = ObfDereferenceObject(Object);
    for ( i = 0; ; ++i )
    {
      LODWORD(Object) = i;
      if ( i >= 6 )
        break;
      result = (__int64)PsQuerySystemDllInfo(i);
      v7 = result;
      v23 = result;
      if ( result )
      {
        if ( i <= 0
          || (*(_DWORD *)result & 8) != 0
          && *(_QWORD *)(v2 + 1408)
          && (result = PsWow64GetProcessNtdllType(v2), i == (_DWORD)result) )
        {
          DWORD2(v19) = 3;
          *(_QWORD *)&v20 = *(_QWORD *)(v7 + 24);
          *(_QWORD *)&v21 = 0LL;
          v8 = RtlImageNtHeader(*(_QWORD *)(v7 + 24));
          if ( v8 )
            *(_QWORD *)&v21 = *(unsigned int *)(v8 + 80);
          DWORD2(v20) = 0;
          DWORD2(v21) = 0;
          v9 = PspReferenceSystemDll(*(_QWORD *)(v7 - 8));
          FileObjectForSection = (void *)MmGetFileObjectForSection(v9);
          Object = FileObjectForSection;
          if ( v9 )
          {
            ObFastDereferenceObject(*(signed __int64 **)(v7 - 8), v9, 0x64537350u);
            FileObjectForSection = Object;
          }
          PsCallImageNotifyRoutines((unsigned __int16 *)(v7 + 8), v2, (__int64)&v19, (__int64)FileObjectForSection);
          result = ObfDereferenceObject(Object);
        }
      }
    }
  }
  if ( *(_QWORD *)(v2 + 1400) )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( (a1[172] & 4) == 0 )
      {
        memset(v24, 0, 0x40uLL);
        v24[7] = a1[164];
        v24[0] = 0x800400018LL;
        LODWORD(v24[5]) = 1;
        DbgkpSendApiMessage((PVOID)v2);
      }
    }
    else
    {
      memset(v24, 0, 0x60uLL);
      v24[7] = DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 1304));
      v24[8] = *(_QWORD *)(v2 + 1312);
      v24[11] = 0LL;
      v24[9] = 0LL;
      v13 = RtlImageNtHeader(*(_QWORD *)(v2 + 1312));
      if ( v13 )
      {
        if ( v14 )
          v24[11] = (unsigned int)(*(_DWORD *)(v13 + 40) + *(_DWORD *)(v13 + 52));
        else
          v24[11] = *(_QWORD *)(v13 + 48) + *(unsigned int *)(v13 + 40);
        v24[9] = *(_QWORD *)(v13 + 12);
      }
      v24[0] = 0x800600038LL;
      LODWORD(v24[5]) = 2;
      DbgkpSendApiMessage((PVOID)v2);
      if ( v24[7] )
        ObCloseHandle((HANDLE)v24[7], 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *((unsigned int *)a1 + 345);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages((PVOID)v2, a1, 0LL);
  }
  return result;
}
