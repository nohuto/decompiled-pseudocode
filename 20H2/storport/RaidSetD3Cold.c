/*
 * XREFs of RaidSetD3Cold @ 0x1C001A1A0
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C003A5CC (StorpAdapterInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00758E4 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidGetD3ColdInterface @ 0x1C001A1E8 (RaidGetD3ColdInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidSetD3Cold(struct _DEVICE_OBJECT *a1, char a2)
{
  int D3ColdInterface; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  char v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h]

  v8 = 0LL;
  v7 = 0;
  D3ColdInterface = RaidGetD3ColdInterface(a1);
  if ( D3ColdInterface >= 0 )
  {
    v5 = v8;
    if ( *(_QWORD *)(v8 + 32) && ((*(void (__fastcall **)(_QWORD, char *))(v8 + 48))(*(_QWORD *)(v8 + 8), &v7), v7) )
    {
      LOBYTE(v6) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(v5 + 32))(*(_QWORD *)(v5 + 8), v6);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)D3ColdInterface;
}
