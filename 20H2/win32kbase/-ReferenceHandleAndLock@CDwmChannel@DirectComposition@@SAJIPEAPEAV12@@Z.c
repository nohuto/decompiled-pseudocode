/*
 * XREFs of ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005FFAC
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C005F7F0 (NtDCompositionSubmitDWMBatch.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0060E10 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0060010 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDwmChannel::ReferenceHandleAndLock(
        unsigned int a1,
        struct DirectComposition::CDwmChannel **a2)
{
  int v3; // edi
  struct DirectComposition::CDwmChannel *v4; // rbx
  struct DirectComposition::CChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 2 )
    {
      *a2 = v4;
    }
    else
    {
      v3 = -1073741811;
      (**(void (__fastcall ***)(struct DirectComposition::CDwmChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
