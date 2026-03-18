/*
 * XREFs of _DwmAsyncMagnSetSlicerDestinationTextures@16 @ 0x1D1F42
 * Callers:
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall DwmAsyncMagnSetSlicerDestinationTextures(PVOID Object, int a2, int a3, unsigned int *a4)
{
  int v5; // esi
  unsigned int v7; // edi
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // esi
  __int64 v11; // rax
  _BYTE v13[252]; // [esp+10h] [ebp-100h] BYREF

  v5 = -1073741823;
  if ( Object )
  {
    memset(v13, 0, sizeof(v13));
    *(_DWORD *)v13 = 16515300;
    *(_WORD *)&v13[4] = 0x8000;
    *(_DWORD *)&v13[24] = 1073741923;
    *(_QWORD *)&v13[32] = a2;
    *(_DWORD *)&v13[248] = a3;
    v7 = *a4;
    *(_DWORD *)&v13[44] = a4[1];
    *(_DWORD *)&v13[48] = a4[2];
    v8 = a4[3];
    *(_DWORD *)&v13[40] = v7;
    *(_DWORD *)&v13[52] = v8;
    if ( v7 >= 6 )
      v7 = 6;
    if ( v7 )
    {
      v9 = &v13[64];
      v10 = a4 + 4;
      do
      {
        v11 = (int)v10[3];
        *(v9 - 2) = v11;
        LODWORD(v11) = *v10;
        v10 += 5;
        *v9 = v11;
        v9 += 8;
        *(v9 - 7) = *(v10 - 4);
        LODWORD(v11) = *(v10 - 3);
        *(v9 - 9) = HIDWORD(v11);
        v11 = (int)v11;
        *(v9 - 6) = v11;
        LODWORD(v11) = *(v10 - 1) & 1;
        *(v9 - 5) = HIDWORD(v11);
        *(v9 - 4) = 2 * v11;
        --v7;
      }
      while ( v7 );
    }
    EtwUpdateEvent(0, 1073741923);
    v5 = LpcRequestPort(Object, v13);
    ObfDereferenceObject(Object);
  }
  return v5;
}
