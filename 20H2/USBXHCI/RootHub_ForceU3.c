/*
 * XREFs of RootHub_ForceU3 @ 0x1C003E26C
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C000AE10 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C003DEC8 (RootHub_ForceU0AndWait.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2, __int64 a3, int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned int *v9; // rsi
  bool v10; // zf
  __int64 result; // rax
  int Ulong; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ebx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx

  v5 = a2 - 1;
  v6 = a1[1];
  v7 = *(_QWORD *)(v6 + 88);
  v8 = a1[6] + 112LL * (unsigned int)(a2 - 1);
  v9 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  if ( *(_BYTE *)(v8 + 13) == 2 )
    v10 = (*(_QWORD *)(v6 + 336) & 0x8000000LL) == 0;
  else
    v10 = (*(_QWORD *)(v6 + 336) & 0x80000LL) == 0;
  if ( v10 || (result = RootHub_ForceU0AndWait(a1, a2, a3, a4), (int)result >= 0) )
  {
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v5, a3, a4);
    *(_BYTE *)(v8 + 18) = 0;
    Ulong = XilRegister_ReadUlong(v7, v9);
    v14 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        228,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        Ulong);
    }
    if ( ((v14 & 2) == 0 || (v14 & 0x1E0u) >= 0x60) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        229,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    }
    v15 = v14 & 0xE00C200 | 0x10060;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        230,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v15);
    }
    XilRegister_WriteUlong(v7, v9, v15);
    RootHub_ReleaseReadModifyWriteLock((__int64)a1, v5, v16, v17);
    result = XilRegister_ReadUlong(v7, v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 72LL),
               v18,
               11,
               231,
               (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
               result);
    }
  }
  return result;
}
