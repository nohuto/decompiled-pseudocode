/*
 * XREFs of ProcessRingPacket @ 0x1C03569B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C03563BC (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

__int64 __fastcall ProcessRingPacket(__int64 a1, struct VMBPACKETCOMPLETION__ *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax

  if ( a4 <= 8
    || (v8 = ((__int64 (*)(void))qword_1C0131BE8)()) == 0
    || *(_BYTE *)(v8 + 28)
    || (result = DXGVMBUSCHANNEL::ProcessPacket((struct _EX_RUNDOWN_REF *)v8, *a3, a2, a3, a4), (int)result < 0) )
  {
    if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304514) )
    {
      v10 = ((__int64 (__fastcall *)(__int64))qword_1C0131BE8)(a1);
      if ( v10 )
        *(_BYTE *)(v10 + 28) = 1;
    }
    return ((__int64 (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C0131C28)(a2, 0LL, 0LL);
  }
  return result;
}
