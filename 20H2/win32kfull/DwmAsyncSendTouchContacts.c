/*
 * XREFs of DwmAsyncSendTouchContacts @ 0x1C0274C30
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D9BC4 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 */

__int64 __fastcall DwmAsyncSendTouchContacts(PVOID Object, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // r14d
  char *v9; // rax
  char *v10; // rbx
  _OWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int128 v14; // xmm1

  v8 = -1073741823;
  if ( Object && a2 && a4 )
  {
    v9 = (char *)PALLOCMEM2(40 * (a4 - 1) + 100, 1951225668LL, 1);
    v10 = v9;
    if ( v9 )
    {
      v11 = v9 + 60;
      *((_DWORD *)v9 + 10) = 1073741887;
      *(_QWORD *)(v9 + 52) = a3;
      *((_DWORD *)v9 + 11) = a4;
      *(_WORD *)v9 = 40 * a4 + 20;
      *((_WORD *)v9 + 2) = 0x8000;
      *((_DWORD *)v9 + 12) = 40 * a4;
      v12 = a2 - (_QWORD)(v9 + 60);
      v13 = a4;
      *((_WORD *)v10 + 1) = 40 * a4 + 100;
      do
      {
        *v11 = *(_OWORD *)((char *)v11 + v12);
        v14 = *(_OWORD *)((char *)v11 + v12 + 16);
        v11 = (_OWORD *)((char *)v11 + 40);
        *(_OWORD *)((char *)v11 - 24) = v14;
        *((_QWORD *)v11 - 1) = *(_QWORD *)((char *)v11 + v12 - 8);
        --v13;
      }
      while ( v13 );
      v8 = LpcRequestPort(Object, v10);
      Win32FreePool(v10);
    }
    ObfDereferenceObject(Object);
  }
  return v8;
}
