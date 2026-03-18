/*
 * XREFs of RootHub_D0Entry @ 0x1C0011F50
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C0032FD8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  int v1; // esi
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v5; // rbp
  __int64 v6; // rbx
  char Ulong; // al
  int v8; // edx
  char v9; // r8
  int v10; // r9d
  __int16 v11; // ax
  int v12; // r8d
  int v13; // r9d

  v1 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 57) = 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v4 = v1 - 1;
      v5 = *(_QWORD *)(a1 + 40) + 16LL * (unsigned int)(v1 - 1);
      v6 = (unsigned int)(v1 - 1);
      Ulong = XilRegister_ReadUlong(v3, v5);
      v8 = 112 * v6;
      v9 = *(_BYTE *)(112 * v6 + *(_QWORD *)(a1 + 48) + 13);
      if ( v9 == 2 )
        break;
      if ( v9 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v8,
            11,
            33,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v1,
            v9);
        }
        goto LABEL_8;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 32;
LABEL_5:
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          11,
          v10,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v1,
          Ulong);
      }
LABEL_6:
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x20000000LL) != 0 )
      {
        RootHub_AcquireReadModifyWriteLock(a1, v4);
        v11 = XilRegister_ReadUlong(v3, v5);
        XilRegister_WriteUlong(v3, v5, v11 & 0xC200 | 0xE000000u);
        RootHub_ReleaseReadModifyWriteLock(a1, v4, v12, v13);
      }
LABEL_8:
      if ( (unsigned int)++v1 > *(_DWORD *)(a1 + 16) )
        return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v10 = 31;
    goto LABEL_5;
  }
  return 0LL;
}
