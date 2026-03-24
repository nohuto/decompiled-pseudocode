/*
 * XREFs of IopInitializeReserveIrps @ 0x140A6EBD4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402ED748 (IopAllocateIrpWithExtension.c)
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

  byte_140C45CC0 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2, 0LL, 0LL);
  if ( IopReserveIrps )
  {
    dword_140C45BE8 = 0;
    qword_140C45C00 = (__int64)&qword_140C45BF8;
    qword_140C45BF8 = (__int64)&qword_140C45BF8;
    LOBYTE(v2) = 42;
    word_140C45BF0 = 1;
    byte_140C45BF2 = 6;
    dword_140C45BF4 = 0;
    qword_140C45C08 = (PIRP)IopAllocateIrpWithExtension(v3, v2, 0LL, 0LL);
    if ( qword_140C45C08 )
    {
      dword_140C45C10 = 0;
      qword_140C45C28 = (__int64)&qword_140C45C20;
      qword_140C45C20 = (__int64)&qword_140C45C20;
      LOBYTE(v4) = 42;
      word_140C45C18 = 1;
      byte_140C45C1A = 6;
      dword_140C45C1C = 0;
      qword_140C45C30 = (PIRP)IopAllocateIrpWithExtension(v5, v4, 0LL, 0LL);
      if ( qword_140C45C30 )
      {
        dword_140C45C38 = 0;
        stru_140C45C40.Header.WaitListHead.Blink = &stru_140C45C40.Header.WaitListHead;
        v8 = 0;
        stru_140C45C40.Header.WaitListHead.Flink = &stru_140C45C40.Header.WaitListHead;
        LOWORD(stru_140C45C40.Header.Lock) = 1;
        stru_140C45C40.Header.Size = 6;
        stru_140C45C40.Header.SignalState = 0;
        qword_140C45CB8 = 0LL;
        while ( 1 )
        {
          LOBYTE(v6) = 42;
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v7, v6, 0LL, 0LL);
          v7 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              qword_140C45C88 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140C45CB8;
              qword_140C45CB8 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v8 >= 8 )
          {
            dword_140C45C60 = 0;
            qword_140C45C80 = (__int64)&qword_140C45C78;
            result = 1;
            qword_140C45C78 = (__int64)&qword_140C45C78;
            stru_140C45CA0.Header.WaitListHead.Blink = &stru_140C45CA0.Header.WaitListHead;
            stru_140C45CA0.Header.WaitListHead.Flink = &stru_140C45CA0.Header.WaitListHead;
            dword_140C45C90 = 0;
            qword_140C45C68 = 0LL;
            qword_140C45C98 = 0LL;
            word_140C45C70 = 1;
            byte_140C45C72 = 6;
            dword_140C45C74 = 0;
            LOWORD(stru_140C45CA0.Header.Lock) = 1;
            stru_140C45CA0.Header.Size = 6;
            stru_140C45CA0.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
