/*
 * XREFs of ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180483128
 * Callers:
 *     ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180481E90 (-IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180471208 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x1804829C0 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1804837BC (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayout::_AreAllItemsCurated(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  int ItemCountOfType; // ebp
  int v4; // esi
  int v5; // ebx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v6; // rdx
  enum DEVICE_SCALE_FACTOR v7; // r8d
  int v8; // eax
  PVOID Ptr; // r15
  int v10; // eax
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebp
  _QWORD **v13; // rax
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( (int)CAppLayout::VerifyLayout(this + 5) >= 0 )
  {
    ItemCountOfType = CAppLayout::_GetItemCountOfType(this, 1LL);
    v4 = CAppLayout::_GetItemCountOfType(this, 4LL);
    v5 = CAppLayout::_GetItemCountOfType(this, 2LL);
    v8 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&this[8], v6, v7);
    Ptr = this[14].Ptr;
    v10 = v5 * v8;
    v11 = 0LL;
    v2 = 1;
    v12 = (LODWORD(this[9].Ptr) - v10 - LODWORD(this[8].Ptr)) / (unsigned int)(v4 + ItemCountOfType);
    if ( Ptr )
    {
      do
      {
        if ( !v2 )
          break;
        v13 = (_QWORD **)this[13].Ptr;
        v18 = 0LL;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*v13[v11] + 56LL))(v13[v11], 0LL, &v18);
        v14 = DWORD2(v18) - v18;
        v15 = *((_QWORD *)this[13].Ptr + v11);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) != 1 )
        {
          v16 = *((_QWORD *)this[13].Ptr + v11);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) != 4 )
            continue;
        }
        if ( v14 != v12 && v14 != v12 + 1 )
          v2 = 0;
        ++v11;
      }
      while ( v11 < (unsigned __int64)Ptr );
    }
  }
  return v2;
}
