/*
 * XREFs of RootHub_DisableLPMForSlot @ 0x1C003DCF4
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C0047F60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 */

char __fastcall RootHub_DisableLPMForSlot(_QWORD *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v6; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int *v10; // r14
  __int64 v11; // r12
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int Ulong; // ebx
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // edx
  int v19; // ebx
  unsigned int v20; // ebx

  v4 = a2 - 1;
  v6 = 16LL * (unsigned int)(a2 - 1);
  v8 = *(_QWORD *)(a1[1] + 88LL);
  v9 = a1[5];
  v10 = (unsigned int *)(v6 + v9 + 4);
  v11 = v6 + v9;
  RootHub_AcquireReadModifyWriteLock((__int64)a1, v4, a3, a4);
  if ( *(_BYTE *)(a1[6] + 112LL * v4 + 20) )
  {
    Ulong = XilRegister_ReadUlong(v8, v10);
    if ( BYTE1(Ulong) == a3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v14,
          11,
          255,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          Ulong);
      }
      v16 = Ulong & 0xFFFE0007;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v14,
          11,
          256,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v16);
      }
      XilRegister_WriteUlong(v8, v10, v16);
      v17 = XilRegister_ReadUlong(v8, (unsigned int *)(v11 + 12));
      v19 = v17;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v18,
          11,
          257,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v17);
      }
      v20 = v19 & 0xFFFFC000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          v18,
          11,
          258,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v20);
      }
      XilRegister_WriteUlong(v8, (_DWORD *)(v11 + 12), v20);
      XilRegister_ReadUlong(v8, v10);
      *(_BYTE *)(a1[6] + 112LL * v4 + 20) = 0;
    }
  }
  return RootHub_ReleaseReadModifyWriteLock((__int64)a1, v4, v12, v13);
}
