/*
 * XREFs of IovAllocateIrp @ 0x1409C47A0
 * Callers:
 *     IoAllocateIrpEx @ 0x1402A1700 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrp @ 0x140361FF0 (IoAllocateIrp.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x1402EDEF0 (IopIsActivityTracingEnabled.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     IopInitActivityIdIrp @ 0x140500C9C (IopInitActivityIdIrp.c)
 *     IovpLogStackTrace @ 0x1409C5978 (IovpLogStackTrace.c)
 *     VfIoAllocateIrp2 @ 0x1409D11C8 (VfIoAllocateIrp2.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D1750 (ViIrpAllocateLockedPacket.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E092C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovAllocateIrp(__int64 a1, char a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v5; // r15d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rsi
  _OWORD *v13; // rdi
  char v14; // bp
  __int64 v15; // rbx
  __int64 LockedPacket; // rax
  __int64 Irp; // rax
  __int64 v18; // rax

  v5 = a3;
  v8 = IovpLogStackTrace(0LL);
  v12 = (_QWORD *)v8;
  if ( v8 )
    v13 = (_OWORD *)(v8 + 24);
  else
    v13 = 0LL;
  v14 = a2 + 2;
  v15 = 0LL;
  if ( !VfIoDisabled )
  {
    LOBYTE(v10) = v14;
    LockedPacket = ViIrpAllocateLockedPacket(v10, v5, a4);
    if ( LockedPacket )
    {
      v15 = *(_QWORD *)LockedPacket;
      if ( v13 )
      {
        *(_OWORD *)(LockedPacket + 120) = *v13;
        *(_OWORD *)(LockedPacket + 136) = v13[1];
        *(_OWORD *)(LockedPacket + 152) = v13[2];
        *(_OWORD *)(LockedPacket + 168) = v13[3];
      }
      else
      {
        *(_QWORD *)(LockedPacket + 120) = 0LL;
      }
      VfIrpDatabaseEntryReleaseLock(LockedPacket);
    }
  }
  if ( !v15 )
  {
    LOBYTE(v11) = v5;
    LOBYTE(v9) = v14;
    Irp = pXdvIoAllocateIrp(a1, v9, v11, a4, (__int64)IopAllocateIrpPrivate);
    v15 = Irp;
    if ( Irp )
      VfIoAllocateIrp2(Irp, v13);
  }
  if ( v12 )
    *v12 = v15;
  if ( v15 )
  {
    *(_QWORD *)(v15 + 184) -= 144LL;
    v18 = *(_QWORD *)(v15 + 184);
    *(_BYTE *)(v15 + 67) -= 2;
    *(_BYTE *)(v15 + 66) -= 2;
    *(_QWORD *)(v15 + 200) = v18;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v15);
  }
  return v15;
}
