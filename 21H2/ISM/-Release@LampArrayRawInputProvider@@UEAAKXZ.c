/*
 * XREFs of ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180010500
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180034220 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x1800342D0 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180038670 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 *     ?Release@LampArrayRawInputProvider@@W7EAAKXZ @ 0x18004B6C0 (-Release@LampArrayRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBA@EAAKXZ @ 0x18004B6D0 (-Release@LampArrayRawInputProvider@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x18009F480 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Release(ULONG_PTR dwData)
{
  _DWORD *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rax

  v2 = (_DWORD *)(dwData + 16);
  v3 = _InterlockedDecrement((volatile signed __int32 *)(dwData + 24));
  if ( !v3 )
  {
    v5 = *(_QWORD *)v2;
    *(_DWORD *)(dwData + 24) = 1;
    (*(void (__fastcall **)(ULONG_PTR))(v5 + 32))(dwData + 16);
    v2[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  }
  if ( v3 == 1 )
    LampArrayRawInputProvider::Shutdown(dwData);
  return v3;
}
