/*
 * XREFs of ?WriteAllocTableDumpBufferCallback@NSInstrumentation@@YGXPAX00@Z @ 0x24A5A1
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

void __userpurge NSInstrumentation::WriteAllocTableDumpBufferCallback(
        NSInstrumentation *this,
        void *a2,
        _DWORD *a3,
        void *a4)
{
  _DWORD *v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // [esp+0h] [ebp-8h]
  unsigned int *v7; // [esp+4h] [ebp-4h]

  v4 = (_DWORD *)*a3;
  v5 = a3[1];
  if ( *a3 )
  {
    if ( v5 >= 8 )
    {
      *v4 = this;
      v4[1] = a2;
      a3[1] -= 8;
      *a3 = v4 + 2;
    }
  }
  else
  {
    ULongAdd(8, v5, a3 + 1, v6, v7);
  }
}
