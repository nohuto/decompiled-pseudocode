/*
 * XREFs of ?GetLastActiveApplication@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18015EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::GetLastActiveApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  struct IImmersiveApplicationInternal *v6; // rcx
  struct IImmersiveApplicationInternal *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v4 = -2147319765;
  if ( *((_BYTE *)this + 89) && *((_QWORD *)this + 8) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v5 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 7))(
           **((_QWORD **)this + 7),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           (__int64 *)&v8);
    v6 = v8;
    v4 = v5;
    v8 = 0LL;
    *a2 = v6;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v4;
}
