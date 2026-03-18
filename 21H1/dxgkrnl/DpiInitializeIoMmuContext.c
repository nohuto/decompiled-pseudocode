/*
 * XREFs of DpiInitializeIoMmuContext @ 0x1C0172A14
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C0174F5C (DpiFdoInitializeFdo.c)
 * Callees:
 *     IoMmuInitializePageManager @ 0x1C0187D18 (IoMmuInitializePageManager.c)
 */

__int64 __fastcall DpiInitializeIoMmuContext(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 480) )
  {
    *(_QWORD *)(a1 + 5872) = a1 + 5864;
    *(_QWORD *)(a1 + 5864) = a1 + 5864;
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 5744));
    *(_QWORD *)(a1 + 5752) = 0LL;
    *(_DWORD *)(a1 + 5880) = 0;
    return IoMmuInitializePageManager(a1 + 5760);
  }
  return result;
}
