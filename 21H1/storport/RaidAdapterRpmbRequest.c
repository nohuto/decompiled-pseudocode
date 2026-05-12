/*
 * XREFs of RaidAdapterRpmbRequest @ 0x1C002D0EC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000C248 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002D864 (RaidAdapterSendRPMBCommandSynchronously.c)
 */

__int64 __fastcall RaidAdapterRpmbRequest(__int64 a1, IRP *a2)
{
  unsigned __int64 v2; // rbx
  int v4; // r12d
  unsigned int v5; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r15
  unsigned __int64 Options; // rdx
  unsigned __int64 Length; // r8
  unsigned __int8 QuadPart_high; // al
  unsigned int v11; // r14d
  signed int v12; // eax
  unsigned int i; // r13d
  char v14; // al
  unsigned int j; // r14d
  unsigned int k; // r14d

  v2 = 0LL;
  v4 = a1;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 5680) || !*(_DWORD *)(a1 + 5684) )
  {
    v12 = -1073741808;
LABEL_33:
    if ( v12 >= 0 )
      v2 = (unsigned __int64)v5 << 9;
    goto LABEL_35;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (((unsigned int)Length | CurrentStackLocation->Parameters.Create.Options) & 0x1FF) != 0 )
  {
LABEL_14:
    v12 = -1073741811;
    goto LABEL_35;
  }
  QuadPart_high = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
  if ( !QuadPart_high )
    goto LABEL_31;
  if ( QuadPart_high <= 2u )
  {
    v5 = 1;
    v11 = 1;
  }
  else
  {
    if ( QuadPart_high != 3 )
    {
      if ( QuadPart_high == 4 )
      {
LABEL_10:
        v11 = 1;
        v5 = (unsigned int)Length >> 9;
        goto LABEL_13;
      }
      if ( QuadPart_high != 6 )
      {
        if ( QuadPart_high == 7 )
          goto LABEL_10;
LABEL_31:
        v12 = -1073741808;
        goto LABEL_35;
      }
    }
    v5 = 1;
    v11 = (unsigned int)Options >> 9;
  }
LABEL_13:
  if ( Options < (unsigned __int64)v11 << 9 )
    goto LABEL_14;
  if ( Length < (unsigned __int64)v5 << 9 )
  {
    v12 = -2147483643;
    goto LABEL_35;
  }
  for ( i = 0; i < 0x14; ++i )
  {
    LOBYTE(Length) = -75;
    v12 = RaidAdapterSendRPMBCommandSynchronously(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, v11);
    if ( v12 != -2147483631 )
      break;
  }
  if ( v12 >= 0 )
  {
    v14 = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
    if ( v14 != 3 && v14 != 6 )
      goto LABEL_27;
    memset(MasterIrp, 0, 0x1FFuLL);
    HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) = 5;
    for ( j = 0; j < 0x14; ++j )
    {
      LOBYTE(Length) = -75;
      v12 = RaidAdapterSendRPMBCommandSynchronously(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, 1);
      if ( v12 != -2147483631 )
        break;
    }
    if ( v12 >= 0 )
    {
LABEL_27:
      for ( k = 0; k < 0x14; ++k )
      {
        LOBYTE(Length) = -94;
        v12 = RaidAdapterSendRPMBCommandSynchronously(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, v5);
        if ( v12 != -2147483631 )
          break;
      }
      goto LABEL_33;
    }
  }
LABEL_35:
  a2->IoStatus.Information = v2;
  return RaidCompleteRequestEx(a2, 0, v12);
}
