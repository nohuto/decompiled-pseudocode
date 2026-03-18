/*
 * XREFs of ?InsertInternal@CPointerHashTable@NSInstrumentation@@AAE?AW4EInsertResult@12@PBX0@Z @ 0x8D08E
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C (-Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z.c)
 * Callees:
 *     ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AAEX_KPBX1@Z @ 0x8D0F6 (-InsertWithHash@CPointerHashTable@NSInstrumentation@@AAEX_KPBX1@Z.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 */

int __thiscall NSInstrumentation::CPointerHashTable::InsertInternal(int this, void *a2, void *a3)
{
  int v4; // ebx
  volatile unsigned __int32 v5; // ecx
  volatile signed __int32 *v6; // esi

  v4 = 0;
  v5 = *(_DWORD *)(this + 24);
  v6 = (volatile signed __int32 *)(this + 32);
  if ( _InterlockedIncrement((volatile signed __int32 *)(this + 32)) == (3 * v5) >> 2 )
  {
    v4 = 2;
    goto LABEL_3;
  }
  if ( *v6 <= v5 )
  {
LABEL_3:
    NSInstrumentation::CPointerHashTable::InsertWithHash(
      (NSInstrumentation::CPointerHashTable *)this,
      0x9E3779B97F34A803uLL * ((unsigned __int64)(int)a2 >> 4),
      a2,
      a3);
    return v4;
  }
  _InterlockedDecrement(v6);
  return 1;
}
