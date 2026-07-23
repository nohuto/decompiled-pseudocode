/*
 * XREFs of IopInitializeReserveIrps @ 0x140A6FBD4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020D120 (IopAllocateIrpWithExtension.c)
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

  byte_140C45E00 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2);
  if ( IopReserveIrps )
  {
    dword_140C45D28 = 0;
    qword_140C45D40 = (__int64)&qword_140C45D38;
    qword_140C45D38 = (__int64)&qword_140C45D38;
    LOBYTE(v2) = 42;
    word_140C45D30 = 1;
    byte_140C45D32 = 6;
    dword_140C45D34 = 0;
    qword_140C45D48 = (PIRP)IopAllocateIrpWithExtension(v3, v2);
    if ( qword_140C45D48 )
    {
      dword_140C45D50 = 0;
      qword_140C45D68 = (__int64)&qword_140C45D60;
      qword_140C45D60 = (__int64)&qword_140C45D60;
      LOBYTE(v4) = 42;
      word_140C45D58 = 1;
      byte_140C45D5A = 6;
      dword_140C45D5C = 0;
      qword_140C45D70 = (PIRP)IopAllocateIrpWithExtension(v5, v4);
      if ( qword_140C45D70 )
      {
        dword_140C45D78 = 0;
        stru_140C45D80.Header.WaitListHead.Blink = &stru_140C45D80.Header.WaitListHead;
        v8 = 0;
        stru_140C45D80.Header.WaitListHead.Flink = &stru_140C45D80.Header.WaitListHead;
        LOWORD(stru_140C45D80.Header.Lock) = 1;
        stru_140C45D80.Header.Size = 6;
        stru_140C45D80.Header.SignalState = 0;
        qword_140C45DF8 = 0LL;
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
              qword_140C45DC8 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140C45DF8;
              qword_140C45DF8 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v8 >= 8 )
          {
            dword_140C45DA0 = 0;
            qword_140C45DC0 = (__int64)&qword_140C45DB8;
            result = 1;
            qword_140C45DB8 = (__int64)&qword_140C45DB8;
            stru_140C45DE0.Header.WaitListHead.Blink = &stru_140C45DE0.Header.WaitListHead;
            stru_140C45DE0.Header.WaitListHead.Flink = &stru_140C45DE0.Header.WaitListHead;
            dword_140C45DD0 = 0;
            qword_140C45DA8 = 0LL;
            qword_140C45DD8 = 0LL;
            word_140C45DB0 = 1;
            byte_140C45DB2 = 6;
            dword_140C45DB4 = 0;
            LOWORD(stru_140C45DE0.Header.Lock) = 1;
            stru_140C45DE0.Header.Size = 6;
            stru_140C45DE0.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
