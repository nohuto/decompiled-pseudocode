/*
 * XREFs of CmpTransMgrCommit @ 0x1407426B8
 * Callers:
 *     CmKtmNotification @ 0x140741CF0 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x1409194E0 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x14091C5C4 (CmpRmUnDoPhase.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpCommitLightWeightTransaction @ 0x14065CE0C (CmpCommitLightWeightTransaction.c)
 *     CmpInitializeLightWeightTransaction @ 0x140919710 (CmpInitializeLightWeightTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // edi
  char v5; // si
  __int64 QuadPart; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-39h] BYREF
  __int128 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h]
  int v11; // [rsp+50h] [rbp-19h]
  _OWORD v12[3]; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+88h] [rbp+1Fh] BYREF

  Interval.HighPart = -1;
  *a3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  memset(v12, 0, sizeof(v12));
  Interval.LowPart = -1000000;
  if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)word_140029EE2, 0LL, 0LL, 2u, v13);
  CmpAttachToRegistryProcess(v12);
  v4 = CmpInitializeLightWeightTransaction(&v9);
  if ( v4 >= 0 )
  {
    v10 = a2;
    v5 = 1;
    QuadPart = Interval.QuadPart;
    LOBYTE(v11) = 1;
    do
    {
      if ( v5 )
      {
        v5 = 0;
      }
      else
      {
        KeDelayExecutionThread(0, 0, &Interval);
        QuadPart *= 2LL;
        Interval.QuadPart = QuadPart;
        if ( QuadPart > -300000000 )
        {
          QuadPart = -300000000LL;
          Interval.QuadPart = -300000000LL;
        }
      }
      LODWORD(v9) = 0;
      v4 = CmpCommitLightWeightTransaction((__int64)&v9);
    }
    while ( v4 < 0 );
  }
  CmpDetachFromRegistryProcess(v12);
  if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)qword_140029EC0, 0LL, 0LL, 2u, v13);
  return (unsigned int)v4;
}
