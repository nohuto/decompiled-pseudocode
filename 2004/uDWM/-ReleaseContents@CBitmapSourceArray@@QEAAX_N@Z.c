/*
 * XREFs of ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180015054
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x180014F44 (--1CButton@@MEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180043948 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x18004F018 (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180051360 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A790 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapSourceArray::ReleaseContents(CBitmapSourceArray *this, char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx

  if ( *((_DWORD *)this + 6) )
  {
    v4 = *((unsigned int *)this + 6);
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(v5 + *(_QWORD *)this);
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
        *(_QWORD *)(v5 + *(_QWORD *)this) = 0LL;
      }
      v5 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 6) = 0;
  if ( a2 )
    DynArrayImpl<0>::ShrinkToSize(this, 8LL);
}
