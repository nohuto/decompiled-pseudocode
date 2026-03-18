/*
 * XREFs of IopInitializeReserveIrps @ 0x140A6B348
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14026FE70 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140C45B60 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2);
  if ( IopReserveIrps )
  {
    dword_140C45A88 = 0;
    qword_140C45AA0 = (__int64)&qword_140C45A98;
    qword_140C45A98 = (__int64)&qword_140C45A98;
    LOBYTE(v2) = 42;
    word_140C45A90 = 1;
    byte_140C45A92 = 6;
    dword_140C45A94 = 0;
    qword_140C45AA8 = (PIRP)IopAllocateIrpWithExtension(v3, v2);
    if ( qword_140C45AA8 )
    {
      dword_140C45AB0 = 0;
      qword_140C45AC8 = (__int64)&qword_140C45AC0;
      qword_140C45AC0 = (__int64)&qword_140C45AC0;
      LOBYTE(v4) = 42;
      word_140C45AB8 = 1;
      byte_140C45ABA = 6;
      dword_140C45ABC = 0;
      qword_140C45AD0 = (PIRP)IopAllocateIrpWithExtension(v5, v4);
      if ( qword_140C45AD0 )
      {
        dword_140C45AD8 = 0;
        stru_140C45AE0.Header.WaitListHead.Blink = &stru_140C45AE0.Header.WaitListHead;
        v8 = 0;
        stru_140C45AE0.Header.WaitListHead.Flink = &stru_140C45AE0.Header.WaitListHead;
        LOWORD(stru_140C45AE0.Header.Lock) = 1;
        stru_140C45AE0.Header.Size = 6;
        stru_140C45AE0.Header.SignalState = 0;
        qword_140C45B58 = 0LL;
        while ( 1 )
        {
          LOBYTE(v6) = 42;
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v7, v6);
          v7 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              qword_140C45B28 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140C45B58;
              qword_140C45B58 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v8 >= 8 )
          {
            dword_140C45B00 = 0;
            qword_140C45B20 = (__int64)&qword_140C45B18;
            result = 1;
            qword_140C45B18 = (__int64)&qword_140C45B18;
            stru_140C45B40.Header.WaitListHead.Blink = &stru_140C45B40.Header.WaitListHead;
            stru_140C45B40.Header.WaitListHead.Flink = &stru_140C45B40.Header.WaitListHead;
            dword_140C45B30 = 0;
            qword_140C45B08 = 0LL;
            qword_140C45B38 = 0LL;
            word_140C45B10 = 1;
            byte_140C45B12 = 6;
            dword_140C45B14 = 0;
            LOWORD(stru_140C45B40.Header.Lock) = 1;
            stru_140C45B40.Header.Size = 6;
            stru_140C45B40.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
