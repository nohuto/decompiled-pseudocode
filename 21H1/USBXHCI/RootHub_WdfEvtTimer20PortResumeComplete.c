/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4
 * Callers:
 *     RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C0016640 (RootHub_WdfEvtTimer20PortResumeCompleteDpc.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011228 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0012CF4 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0012E40 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall RootHub_WdfEvtTimer20PortResumeComplete(_QWORD *a1, int a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // r15d
  int v13; // edx
  __int64 v14; // r12
  unsigned int *v15; // r13
  int v16; // edx
  int Ulong; // ebx
  int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  char v21; // al
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r12
  int v26; // eax
  int v27; // edx
  int v28; // ebx
  int v29; // ebx
  int v30; // r8d
  int v31; // r9d

  if ( *(_BYTE *)(a1[1] + 537LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = a1[1];
  v7 = *(_QWORD *)(v6 + 88);
  LOBYTE(v8) = Controller_IsControllerAccessible(v6);
  if ( (_BYTE)v8 )
  {
    v12 = a2 - 1;
    RootHub_AcquireReadModifyWriteLock((__int64)a1, a2 - 1, v10, v11);
    v14 = 16LL * (unsigned int)(a2 - 1);
    v15 = (unsigned int *)(v14 + a1[5]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        214,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
        a2);
    }
    Ulong = XilRegister_ReadUlong(v7, v15);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v16,
        11,
        215,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
        Ulong);
    }
    v18 = Ulong & 0xE00C200 | 0x410000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v16,
        11,
        216,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
        v18);
    }
    XilRegister_WriteUlong(v7, v15, v18);
    RootHub_ReleaseReadModifyWriteLock((__int64)a1, v12, v19, v20);
    v21 = XilRegister_ReadUlong(v7, v15);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v22,
        11,
        217,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
        v21);
    }
    v8 = *(_QWORD *)(a1[1] + 336LL);
    if ( (v8 & 0x8000000) != 0 )
    {
      v8 = a1[6];
      if ( *(_BYTE *)(104LL * v12 + v8 + 23) )
      {
        v25 = a1[5] + v14;
        RootHub_AcquireReadModifyWriteLock((__int64)a1, v12, v23, v24);
        v26 = XilRegister_ReadUlong(v7, (unsigned int *)(v25 + 4));
        v28 = v26;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v27,
            11,
            218,
            (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
            v26);
        }
        v29 = v28 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v27,
            11,
            219,
            (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
            v29);
        }
        XilRegister_WriteUlong(v7, (_DWORD *)(v25 + 4), v29);
        LOBYTE(v8) = RootHub_ReleaseReadModifyWriteLock((__int64)a1, v12, v30, v31);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    LOBYTE(v8) = WPP_RECORDER_SF_(
                   *(_QWORD *)(a1[1] + 72LL),
                   v9,
                   11,
                   213,
                   (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids);
  }
  return v8;
}
