/*
 * XREFs of ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x180375CF4
 * Callers:
 *     ?AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180375F58 (-AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0AltEscHotkeyHandler@@QEAA@XZ @ 0x180375DB0 (--0AltEscHotkeyHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18037606C (-InternalRelease@-$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1803760AC (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AltEscHotkeyHandler,AltEscHotkeyHandler,WeakReference::IWeakReference * &>(
        AltEscHotkeyHandler **a1,
        struct IWeakReference **a2)
{
  AltEscHotkeyHandler *v4; // rax
  int v5; // edi
  AltEscHotkeyHandler *v6; // rax
  struct IWeakReference *v7; // rdx
  AltEscHotkeyHandler *v8; // rbx
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  AltEscHotkeyHandler *v13; // [rsp+30h] [rbp+8h] BYREF
  AltEscHotkeyHandler *v14; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (AltEscHotkeyHandler *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v4;
  if ( v4 )
  {
    v6 = AltEscHotkeyHandler::AltEscHotkeyHandler(v4);
    v7 = *a2;
    v8 = v6;
    v13 = v6;
    v5 = AltEscHotkeyHandler::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        v10 = *((_QWORD *)v8 + 5);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 5, v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v10 + 16),
          v9);
      }
LABEL_11:
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
