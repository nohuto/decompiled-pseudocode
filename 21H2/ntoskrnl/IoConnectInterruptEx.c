/*
 * XREFs of IoConnectInterruptEx @ 0x140761D90
 * Callers:
 *     HalpInterruptConnect @ 0x1404BB678 (HalpInterruptConnect.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopConnectMessageBasedInterrupt @ 0x140762014 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140762ABC (IopGetInterruptConnectionData.c)
 *     IopConnectLineBasedInterrupt @ 0x1407C9BF4 (IopConnectLineBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1407CBEF0 (IopConnectInterruptFullySpecified.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  __int64 Version; // rcx
  NTSTATUS result; // eax
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v6; // di
  USHORT Group; // si
  unsigned int v8; // edx
  KIRQL v9; // al
  __int128 v10; // xmm1
  __m128i v11; // xmm2
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  NTSTATUS v14; // esi
  PVOID ServiceContext; // r9
  PKSERVICE_ROUTINE ServiceRoutine; // r8
  PDEVICE_OBJECT PhysicalDeviceObject; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  PKSPIN_LOCK SpinLock; // [rsp+20h] [rbp-69h]
  ULONG Vector; // [rsp+28h] [rbp-61h]
  KIRQL v22; // [rsp+30h] [rbp-59h]
  KIRQL v23; // [rsp+38h] [rbp-51h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-49h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-41h]
  __int128 ProcessorEnableMask; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+70h] [rbp-19h]
  _DWORD v28[23]; // [rsp+74h] [rbp-15h] BYREF
  __int64 v29; // [rsp+100h] [rbp+77h] BYREF

  v29 = 0LL;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  switch ( (_DWORD)Version )
  {
    case 1:
      goto LABEL_49;
    case 2:
      return IopConnectLineBasedInterrupt(
               Parameters->FullySpecified.PhysicalDeviceObject,
               Parameters->FullySpecified.InterruptObject,
               Parameters->FullySpecified.ServiceRoutine,
               Parameters->FullySpecified.ServiceContext,
               (__int64)Parameters->FullySpecified.SpinLock,
               Parameters->FullySpecified.SynchronizeIrql);
    case 3:
      goto LABEL_5;
    case 4:
LABEL_49:
      if ( !Parameters->FullySpecified.PhysicalDeviceObject )
        return -1073741811;
      if ( !Parameters->FullySpecified.ServiceRoutine )
        return -1073741811;
      SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
      Irql = Parameters->FullySpecified.Irql;
      if ( SynchronizeIrql < Irql )
        return -1073741811;
      if ( SynchronizeIrql || Irql )
      {
        v6 = 0;
      }
      else
      {
        v6 = 1;
        if ( Parameters->FullySpecified.SpinLock )
          return -1073741811;
      }
      if ( (_DWORD)Version == 4 )
        Group = Parameters->FullySpecified.Group;
      else
        Group = 0;
      if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
      {
        memset(v28, 0, sizeof(v28));
        v8 = 0;
        v27 = 0;
        if ( MEMORY[0] )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(88LL * v8 + 0xC) == Parameters->FullySpecified.Vector )
            {
              v9 = Parameters->FullySpecified.Irql;
              if ( (*(_BYTE *)(88LL * v8 + 0x10) == v9 || !v9)
                && *(_DWORD *)(88LL * v8 + 0x18) == Parameters->FullySpecified.InterruptMode
                && *(_WORD *)(88LL * v8 + 0x28) == Group
                && *(_QWORD *)(88LL * v8 + 0x20) == Parameters->FullySpecified.ProcessorEnableMask )
              {
                break;
              }
            }
            if ( ++v8 >= MEMORY[0] )
              goto LABEL_42;
          }
          v27 = 1;
          v10 = *(_OWORD *)(88LL * v8 + 0x28);
          v11 = *(__m128i *)(88LL * v8 + 8);
          *(_OWORD *)&v28[5] = *(_OWORD *)(88LL * v8 + 0x18);
          v12 = *(_OWORD *)(88LL * v8 + 0x38);
          *(_OWORD *)&v28[9] = v10;
          v13 = *(_OWORD *)(88LL * v8 + 0x48);
          *(_OWORD *)&v28[13] = v12;
          *(_QWORD *)&v12 = *(_QWORD *)(88LL * v8 + 0x58);
          *(__m128i *)&v28[1] = v11;
          *(_QWORD *)&v28[21] = v12;
          *(_OWORD *)&v28[17] = v13;
          if ( !_mm_cvtsi128_si32(v11) && (v28[16] & 1) != 0 )
            Parameters->FullySpecified.ShareVector = 1;
          v14 = IopConnectInterrupt(
                  &v29,
                  Parameters->FullySpecified.PhysicalDeviceObject,
                  Parameters->FullySpecified.ServiceRoutine,
                  0LL,
                  Parameters->FullySpecified.ServiceContext,
                  0,
                  Parameters->FullySpecified.SpinLock,
                  Parameters->FullySpecified.SynchronizeIrql,
                  Parameters->FullySpecified.ShareVector);
          if ( v14 >= 0 )
            *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)(v29 + 112);
          ExFreePoolWithTag(0LL, 0);
          return v14;
        }
LABEL_42:
        ExFreePoolWithTag(0LL, 0);
        return -1073741637;
      }
      if ( v6 )
        return -1073741637;
      ServiceContext = Parameters->FullySpecified.ServiceContext;
      ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
      PhysicalDeviceObject = Parameters->FullySpecified.PhysicalDeviceObject;
      InterruptObject = Parameters->FullySpecified.InterruptObject;
      ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
      ShareVector = Parameters->FullySpecified.ShareVector;
      InterruptMode = Parameters->FullySpecified.InterruptMode;
      v23 = Parameters->FullySpecified.SynchronizeIrql;
      v22 = Parameters->FullySpecified.Irql;
      Vector = Parameters->FullySpecified.Vector;
      SpinLock = Parameters->FullySpecified.SpinLock;
      WORD4(ProcessorEnableMask) = Group;
      return IopConnectInterruptFullySpecified(
               (_DWORD)InterruptObject,
               (_DWORD)PhysicalDeviceObject,
               (_DWORD)ServiceRoutine,
               (_DWORD)ServiceContext,
               (__int64)SpinLock,
               Vector,
               v22,
               v23,
               InterruptMode,
               ShareVector,
               (__int64)&ProcessorEnableMask);
  }
  if ( (_DWORD)Version != 5 )
  {
    Parameters->Version = 3;
    return -1073741637;
  }
LABEL_5:
  result = IopConnectMessageBasedInterrupt(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result < 0 )
  {
    if ( Parameters->MessageBased.FallBackServiceRoutine )
    {
      v14 = IopConnectLineBasedInterrupt(
              Parameters->FullySpecified.PhysicalDeviceObject,
              Parameters->FullySpecified.InterruptObject,
              Parameters->MessageBased.FallBackServiceRoutine,
              Parameters->FullySpecified.ServiceContext,
              (__int64)Parameters->FullySpecified.SpinLock,
              Parameters->FullySpecified.SynchronizeIrql);
      Parameters->Version = 2;
      return v14;
    }
    return -1073741637;
  }
  return result;
}
