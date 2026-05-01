/*
 * XREFs of ?DragEnded@SwitchItemThumbnailElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1803B5960
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::DragEnded(__int64 a1, struct IUnknown *a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = SHIsSameObject(*(struct IUnknown **)(a1 + 576), a2);
  if ( (_DWORD)result )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 608), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v7 = *(_QWORD *)(a1 + 592);
      if ( v7 )
      {
        result = (unsigned int)(a3 - 1);
        if ( (unsigned int)result > 1 )
          return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, v6, 0LL, 0LL);
      }
    }
  }
  return result;
}
