/*
 * XREFs of ??_I@YGXPAXIIP6EX0@Z@Z @ 0xC1AD4
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge `vector destructor iterator'(
        int a1@<edx>,
        int a2@<ecx>,
        char *a3,
        void (__thiscall *a4)(int),
        unsigned int a5,
        void (__thiscall *a6)(void *))
{
  char *v7; // edi
  int v8; // esi

  v7 = a3;
  v8 = a2 + (_DWORD)a3 * a1;
  do
  {
    v8 -= a1;
    a4(v8);
    --v7;
  }
  while ( v7 );
}
