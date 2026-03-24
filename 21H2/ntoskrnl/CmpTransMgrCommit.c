/*
 * XREFs of CmpTransMgrCommit @ 0x140768EA0
 * Callers:
 *     CmKtmNotification @ 0x1406A36F0 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x140872B30 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x1408759F4 (CmpRmUnDoPhase.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A2C98 (CmpCommitLightWeightTransaction.c)
 *     CmpInitializeLightWeightTransaction @ 0x140872E2C (CmpInitializeLightWeightTransaction.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // edi
  char v6; // si
  __int64 QuadPart; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-39h] BYREF
  __int128 v10; // [rsp+38h] [rbp-31h] BYREF
  __int128 v11; // [rsp+48h] [rbp-21h]
  _OWORD v12[3]; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+88h] [rbp+1Fh] BYREF

  Interval.HighPart = -1;
  *a3 = 0;
  v10 = 0LL;
  Interval.LowPart = -1000000;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140023959, 0LL, 0LL, 2u, v13);
  CmpAttachToRegistryProcess((__int64)v12, a2, (__int64)a3, a4);
  v5 = CmpInitializeLightWeightTransaction(&v10);
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v11 = a2;
    v6 = 1;
    QuadPart = Interval.QuadPart;
    BYTE8(v11) = 1;
    do
    {
      if ( v6 )
      {
        v6 = 0;
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
      LODWORD(v10) = 0;
      v5 = CmpCommitLightWeightTransaction((__int64)&v10);
    }
    while ( v5 < 0 );
  }
  CmpDetachFromRegistryProcess((__int64)v12);
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140023937, 0LL, 0LL, 2u, v13);
  return (unsigned int)v5;
}
