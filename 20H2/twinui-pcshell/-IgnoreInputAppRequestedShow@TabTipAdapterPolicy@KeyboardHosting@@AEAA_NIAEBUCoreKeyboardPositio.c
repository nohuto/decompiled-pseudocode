/*
 * XREFs of ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180368744
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18036A190 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18036899C (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreInputAppRequestedShow(
        RTL_SRWLOCK *this,
        int a2,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a3)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v7; // r9
  unsigned __int64 i; // r10
  __int64 v9; // rax
  char *Ptr; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r9
  __int64 v13; // r8
  char *j; // rcx
  char *v15; // rax
  bool v16; // bl
  __m128i v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+78h] [rbp+10h]

  v19 = a2;
  v3 = this + 55;
  AcquireSRWLockShared(this + 55);
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)&v19 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  Ptr = (char *)this[48].Ptr;
  v11 = v7 & (__int64)this[53].Ptr;
  v12 = this[50].Ptr;
  v13 = 2 * v11;
  for ( j = (char *)v12[v13]; ; j = *(char **)j )
  {
    v15 = (char *)v12[v13] == Ptr ? (char *)this[48].Ptr : *(char **)v12[v13 + 1];
    if ( j == v15 )
      break;
    if ( *((_DWORD *)j + 4) == a2 )
      goto LABEL_11;
  }
  j = (char *)this[48].Ptr;
LABEL_11:
  v16 = j != Ptr
     && (v18 = *(__m128i *)(j + 20), (unsigned __int8)_mm_cvtsi128_si32(v18))
     && *(_DWORD *)a3 == 2
     && *(_QWORD *)((char *)a3 + 4) == v18.m128i_i64[1]
     && !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v16;
}
