/*
 * XREFs of ?Resize@CPointerHashTable@NSInstrumentation@@AAE_NXZ @ 0xED024
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C (-Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z.c)
 * Callees:
 *     ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AAEX_KPBX1@Z @ 0x8D0F6 (-InsertWithHash@CPointerHashTable@NSInstrumentation@@AAEX_KPBX1@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char __thiscall NSInstrumentation::CPointerHashTable::Resize(NSInstrumentation::CPointerHashTable *this)
{
  PVOID PoolWithTag; // eax
  _DWORD *v3; // ebx
  unsigned int v4; // esi
  unsigned int i; // eax
  _QWORD *v6; // ecx
  ULONG *v8; // [esp+0h] [ebp-18h]
  ULONG *v9; // [esp+0h] [ebp-18h]
  unsigned int v10; // [esp+10h] [ebp-8h]

  v10 = *((_DWORD *)this + 6);
  if ( ULongLongToULong(2LL * v10, v8) < 0 )
    return 0;
  if ( ULongLongToULong(0LL, v9) < 0 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0, 0x38497355u);
  if ( !PoolWithTag )
    return 0;
  v3 = (_DWORD *)*((_DWORD *)this + 5);
  ++*((_DWORD *)this + 7);
  *((_DWORD *)this + 5) = PoolWithTag;
  v4 = 0;
  *((_DWORD *)this + 6) = 0;
  for ( i = v10; v4 < i; ++v4 )
  {
    v6 = (_QWORD *)v3[2 * v4];
    if ( v6 )
    {
      NSInstrumentation::CPointerHashTable::InsertWithHash(
        this,
        0x9E3779B97F34A803uLL * ((unsigned __int64)(int)v6 >> 4),
        v6,
        (const void *)v3[2 * v4 + 1]);
      i = v10;
    }
  }
  ExFreePoolWithTag(v3, 0);
  return 1;
}
