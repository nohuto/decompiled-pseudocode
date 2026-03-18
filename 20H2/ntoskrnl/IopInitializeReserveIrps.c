/*
 * XREFs of IopInitializeReserveIrps @ 0x140A71C54
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14031F2B8 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140C45BA0 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140C45AC8 = 0;
    qword_140C45AE0 = (__int64)&qword_140C45AD8;
    qword_140C45AD8 = (__int64)&qword_140C45AD8;
    word_140C45AD0 = 1;
    byte_140C45AD2 = 6;
    dword_140C45AD4 = 0;
    qword_140C45AE8 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140C45AE8 )
    {
      dword_140C45AF0 = 0;
      qword_140C45B08 = (__int64)&qword_140C45B00;
      qword_140C45B00 = (__int64)&qword_140C45B00;
      word_140C45AF8 = 1;
      byte_140C45AFA = 6;
      dword_140C45AFC = 0;
      qword_140C45B10 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_140C45B10 )
      {
        dword_140C45B18 = 0;
        stru_140C45B20.Header.WaitListHead.Blink = &stru_140C45B20.Header.WaitListHead;
        v4 = 0;
        stru_140C45B20.Header.WaitListHead.Flink = &stru_140C45B20.Header.WaitListHead;
        LOWORD(stru_140C45B20.Header.Lock) = 1;
        stru_140C45B20.Header.Size = 6;
        stru_140C45B20.Header.SignalState = 0;
        qword_140C45B98 = 0LL;
        while ( 1 )
        {
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v3, 42, 0);
          v3 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v4 )
          {
            if ( v4 == 1 )
            {
              qword_140C45B68 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140C45B98;
              qword_140C45B98 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v4 >= 8 )
          {
            dword_140C45B40 = 0;
            qword_140C45B60 = (__int64)&qword_140C45B58;
            result = 1;
            qword_140C45B58 = (__int64)&qword_140C45B58;
            stru_140C45B80.Header.WaitListHead.Blink = &stru_140C45B80.Header.WaitListHead;
            stru_140C45B80.Header.WaitListHead.Flink = &stru_140C45B80.Header.WaitListHead;
            dword_140C45B70 = 0;
            qword_140C45B48 = 0LL;
            qword_140C45B78 = 0LL;
            word_140C45B50 = 1;
            byte_140C45B52 = 6;
            dword_140C45B54 = 0;
            LOWORD(stru_140C45B80.Header.Lock) = 1;
            stru_140C45B80.Header.Size = 6;
            stru_140C45B80.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
