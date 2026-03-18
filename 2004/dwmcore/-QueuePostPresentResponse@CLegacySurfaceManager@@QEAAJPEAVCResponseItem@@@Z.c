/*
 * XREFs of ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x180035488
 * Callers:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180035438 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::QueuePostPresentResponse(
        CLegacySurfaceManager *this,
        struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  struct CResponseItem *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 42);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 41) )
    {
      *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v2) = a2;
      *((_DWORD *)this + 42) = v3;
      goto LABEL_4;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 144, 8LL, 1LL, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC0u, 0LL);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v4, 0x194u, 0LL);
    return (unsigned int)v4;
  }
LABEL_4:
  (**(void (__fastcall ***)(struct CResponseItem *))v8)(v8);
  return (unsigned int)v4;
}
