/*
 * XREFs of ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AAEX_KPBX1@Z @ 0x8D0F6
 * Callers:
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AAE?AW4EInsertResult@12@PBX0@Z @ 0x8D08E (-InsertInternal@CPointerHashTable@NSInstrumentation@@AAE-AW4EInsertResult@12@PBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AAE_NXZ @ 0xED024 (-Resize@CPointerHashTable@NSInstrumentation@@AAE_NXZ.c)
 * Callees:
 *     __aullshr @ 0xF91FD (__aullshr.c)
 */

void __thiscall NSInstrumentation::CPointerHashTable::InsertWithHash(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        _QWORD *a3,
        const void *a4)
{
  unsigned __int64 v5; // rax
  bool v6; // zf
  int v7; // ecx
  int v8; // edx
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v5 = a2 >> (64 - *((_BYTE *)this + 28));
  v6 = (*((_BYTE *)this + 36) & 1) == 0;
  v9 = v5;
  if ( !v6 )
    *a3 = a2;
  while ( 1 )
  {
    v7 = v5;
    while ( (unsigned int)v5 >= *((_DWORD *)this + 6) )
    {
      LODWORD(v5) = 0;
      v7 = 0;
      v9 = 0;
    }
    v8 = *((_DWORD *)this + 5);
    if ( !*(_DWORD *)(v8 + 8 * v5) )
      break;
LABEL_8:
    LODWORD(v5) = v5 + 1;
    v9 = v5;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8 * v7), (signed __int32)&v9, 0) )
  {
    LODWORD(v5) = v9;
    goto LABEL_8;
  }
  *(_DWORD *)(*((_DWORD *)this + 5) + 8 * v9 + 4) = a4;
  *(_DWORD *)(*((_DWORD *)this + 5) + 8 * v9) = a3;
}
