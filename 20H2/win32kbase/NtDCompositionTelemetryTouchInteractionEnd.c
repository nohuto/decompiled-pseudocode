/*
 * XREFs of NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004B60
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005EEC8 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionEnd(unsigned int a1, __int64 *a2)
{
  __int64 v2; // rdi
  signed int v3; // ebx
  struct DirectComposition::CApplicationChannel *v4; // rsi
  struct DirectComposition::CApplicationChannel *v5; // rax
  struct DirectComposition::CApplicationChannel **v6; // rdx
  struct DirectComposition::CApplicationChannel *v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v3 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v2 = *a2;
    v9 = *a2;
  }
  if ( a2 )
  {
    v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
    v4 = v8;
    if ( v3 >= 0 )
    {
      v3 = 0;
      v5 = (struct DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuota(24LL, 1869890372LL);
      if ( !v5 )
        v3 = -1073741801;
      if ( v3 >= 0 )
      {
        *((_QWORD *)v5 + 2) = v2;
        v6 = (struct DirectComposition::CApplicationChannel **)*((_QWORD *)v4 + 71);
        if ( *v6 != (struct DirectComposition::CApplicationChannel *)((char *)v4 + 560) )
          __fastfail(3u);
        *(_QWORD *)v5 = (char *)v4 + 560;
        *((_QWORD *)v5 + 1) = v6;
        *v6 = v5;
        *((_QWORD *)v4 + 71) = v5;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
