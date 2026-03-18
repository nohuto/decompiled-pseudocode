/*
 * XREFs of RootHub_ForceU3 @ 0x1C003DB7C
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C000D530 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D7D8 (RootHub_ForceU0AndWait.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned int *v7; // rsi
  bool v8; // zf
  __int64 result; // rax
  int Ulong; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // ebx
  int v14; // edx

  v3 = a2 - 1;
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 88);
  v6 = a1[6] + 112LL * (unsigned int)(a2 - 1);
  v7 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  if ( *(_BYTE *)(v6 + 13) == 2 )
    v8 = (*(_QWORD *)(v4 + 336) & 0x8000000LL) == 0;
  else
    v8 = (*(_QWORD *)(v4 + 336) & 0x80000LL) == 0;
  if ( v8 || (result = RootHub_ForceU0AndWait(a1, a2), (int)result >= 0) )
  {
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v3);
    *(_BYTE *)(v6 + 18) = 0;
    Ulong = XilRegister_ReadUlong(v5, v7);
    v12 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v11,
        11,
        229,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        Ulong);
    }
    if ( ((v12 & 2) == 0 || (v12 & 0x1E0u) >= 0x60) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        v11,
        11,
        230,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    }
    v13 = v12 & 0xE00C200 | 0x10060;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v11,
        11,
        231,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v13);
    }
    XilRegister_WriteUlong(v5, v7, v13);
    RootHub_ReleaseReadModifyWriteLock((__int64)a1, v3);
    result = XilRegister_ReadUlong(v5, v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 72LL),
               v14,
               11,
               232,
               (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
               result);
    }
  }
  return result;
}
