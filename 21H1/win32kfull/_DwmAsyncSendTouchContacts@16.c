/*
 * XREFs of _DwmAsyncSendTouchContacts@16 @ 0x1D275E
 * Callers:
 *     ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D (-ContactVisualizationWorker@@YGHKPAXKHK@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __fastcall DwmAsyncSendTouchContacts(void *a1, int a2, int a3, int a4)
{
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // edx
  char *v8; // ebx
  int v9; // esi
  void *v10; // esi
  _DWORD *v12; // [esp+8h] [ebp-10h]
  int v14; // [esp+24h] [ebp+Ch]

  v5 = -1073741823;
  if ( a1 && a2 && a4 )
  {
    v6 = PALLOCMEM2(40 * a4 + 40, 1951225668, 1);
    v12 = v6;
    if ( v6 )
    {
      v7 = a4;
      v6[6] = 1073741887;
      v6[7] = a4;
      *(_WORD *)v6 = 40 * a4 + 16;
      *((_WORD *)v6 + 1) = 40 * a4 + 80;
      *((_WORD *)v6 + 2) = 0x8000;
      v6[9] = a3;
      v6[8] = 40 * a4;
      v8 = (char *)(v6 + 10);
      v9 = a2 - (_DWORD)(v6 + 10);
      v14 = v9;
      do
      {
        qmemcpy(v8, &v8[v9], 0x28u);
        v9 = v14;
        v8 += 40;
        --v7;
      }
      while ( v7 );
      v10 = a1;
      v5 = LpcRequestPort(a1, v6);
      Win32FreePool(v12);
    }
    else
    {
      v10 = a1;
    }
    ObfDereferenceObject(v10);
  }
  return v5;
}
