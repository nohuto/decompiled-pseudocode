/*
 * XREFs of Interrupter_ReleaseHardware @ 0x1C0077C50
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0077140 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     Interrupter_ReleaseInterrupter @ 0x1C0077CD4 (Interrupter_ReleaseInterrupter.c)
 */

void __fastcall Interrupter_ReleaseHardware(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 i; // rdi
  void *v4; // rcx

  v2 = *(_QWORD **)(a1 + 32);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
    {
      v2 = *(_QWORD **)(a1 + 32);
      if ( v2[i] )
      {
        Interrupter_ReleaseInterrupter(v2[i]);
        v2 = *(_QWORD **)(a1 + 32);
      }
    }
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v4 = *(void **)(a1 + 56);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x49434858u);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
