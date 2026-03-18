/*
 * XREFs of IopInitializeReserveIrps @ 0x140A6B0E8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14033F4AC (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140C45CE0 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140C45C08 = 0;
    qword_140C45C20 = (__int64)&qword_140C45C18;
    qword_140C45C18 = (__int64)&qword_140C45C18;
    word_140C45C10 = 1;
    byte_140C45C12 = 6;
    dword_140C45C14 = 0;
    qword_140C45C28 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140C45C28 )
    {
      dword_140C45C30 = 0;
      qword_140C45C48 = (__int64)&qword_140C45C40;
      qword_140C45C40 = (__int64)&qword_140C45C40;
      word_140C45C38 = 1;
      byte_140C45C3A = 6;
      dword_140C45C3C = 0;
      qword_140C45C50 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_140C45C50 )
      {
        dword_140C45C58 = 0;
        stru_140C45C60.Header.WaitListHead.Blink = &stru_140C45C60.Header.WaitListHead;
        v4 = 0;
        stru_140C45C60.Header.WaitListHead.Flink = &stru_140C45C60.Header.WaitListHead;
        LOWORD(stru_140C45C60.Header.Lock) = 1;
        stru_140C45C60.Header.Size = 6;
        stru_140C45C60.Header.SignalState = 0;
        qword_140C45CD8 = 0LL;
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
              qword_140C45CA8 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140C45CD8;
              qword_140C45CD8 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v4 >= 8 )
          {
            dword_140C45C80 = 0;
            qword_140C45CA0 = (__int64)&qword_140C45C98;
            result = 1;
            qword_140C45C98 = (__int64)&qword_140C45C98;
            stru_140C45CC0.Header.WaitListHead.Blink = &stru_140C45CC0.Header.WaitListHead;
            stru_140C45CC0.Header.WaitListHead.Flink = &stru_140C45CC0.Header.WaitListHead;
            dword_140C45CB0 = 0;
            qword_140C45C88 = 0LL;
            qword_140C45CB8 = 0LL;
            word_140C45C90 = 1;
            byte_140C45C92 = 6;
            dword_140C45C94 = 0;
            LOWORD(stru_140C45CC0.Header.Lock) = 1;
            stru_140C45CC0.Header.Size = 6;
            stru_140C45CC0.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
