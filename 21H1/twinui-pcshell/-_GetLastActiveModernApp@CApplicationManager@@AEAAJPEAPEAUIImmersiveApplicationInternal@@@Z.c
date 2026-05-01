/*
 * XREFs of ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800805A4
 * Callers:
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180080540 (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x18013178C (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetLastActiveModernApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 i; // rsi
  __int64 v7; // r15
  struct IImmersiveApplicationInternal *v8; // rax
  unsigned int v9; // ebx
  int (__fastcall *v11)(__int64, _QWORD, _QWORD, int *); // rbx
  unsigned int v12; // eax
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  int v14; // [rsp+80h] [rbp+40h] BYREF
  struct IImmersiveApplicationInternal *v15; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v4 = *((_QWORD *)this + 97);
  v13 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 80);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL))(v7) & 4) != 0 )
    {
      if ( !v4
        || (v11 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v4 + 48LL),
            v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 384LL))(v7),
            v11(v4, v12, 0LL, &v14) < 0)
        || v14 != 1 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v15, v7);
      }
    }
    if ( v15 )
      break;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v8 = v15;
  v15 = 0LL;
  *a2 = v8;
  v9 = v8 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v9;
}
