/*
 * XREFs of ?WriteBackTraceDumpBufferCallback@NSInstrumentation@@YGXPAX00@Z @ 0x24A5E1
 * Callers:
 *     ??$Enumerate@P6GXPAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x24A072 (--$Enumerate@P6GXPAX00@Z@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceS.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

void __userpurge NSInstrumentation::WriteBackTraceDumpBufferCallback(
        NSInstrumentation *this,
        void *a2,
        _DWORD *a3,
        void *a4)
{
  _DWORD *v4; // ecx
  int *v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  v4 = (_DWORD *)*a3;
  v5 = a3 + 1;
  v6 = a3[1];
  if ( *a3 )
  {
    if ( v6 >= 0x54 )
    {
      *v4 = this;
      qmemcpy(v4 + 1, a2, 0x50u);
      *v5 -= 84;
      *a3 = v4 + 21;
    }
  }
  else
  {
    ULongAdd(84, v6, v5, v7, savedregs);
  }
}
