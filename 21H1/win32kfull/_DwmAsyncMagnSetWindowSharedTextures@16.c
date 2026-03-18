/*
 * XREFs of _DwmAsyncMagnSetWindowSharedTextures@16 @ 0x1D2220
 * Callers:
 *     _MagpComposeDesktop@8 @ 0xE1152 (_MagpComposeDesktop@8.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall DwmAsyncMagnSetWindowSharedTextures(PVOID Object, int a2, int a3, unsigned int *a4)
{
  int v5; // esi
  __int64 v7; // rax
  unsigned int v8; // edi
  _DWORD *v9; // ecx
  int *v10; // esi
  int v11; // eax
  _BYTE v13[252]; // [esp+10h] [ebp-100h] BYREF

  v5 = -1073741823;
  if ( Object )
  {
    memset(v13, 0, sizeof(v13));
    *(_WORD *)&v13[4] = 0x8000;
    *(_DWORD *)v13 = 16515300;
    v7 = a2;
    v8 = *a4;
    *(_QWORD *)&v13[32] = v7;
    *(_DWORD *)&v13[248] = a3;
    *(_DWORD *)&v13[44] = a4[1];
    *(_DWORD *)&v13[48] = a4[2];
    LODWORD(v7) = a4[3];
    *(_DWORD *)&v13[24] = 1073741923;
    *(_DWORD *)&v13[40] = v8;
    *(_DWORD *)&v13[52] = v7;
    if ( v8 >= 6 )
      v8 = 6;
    if ( v8 )
    {
      v9 = &v13[64];
      v10 = (int *)(a4[4] + 8);
      do
      {
        *((_QWORD *)v9 - 1) = v10[1];
        *v9 = *(v10 - 2);
        v9 += 8;
        *(v9 - 7) = *(v10 - 1);
        v11 = *v10;
        v10 += 4;
        *((_QWORD *)v9 - 3) = v11;
        --v8;
      }
      while ( v8 );
    }
    EtwUpdateEvent(0, 1073741923);
    v5 = LpcRequestPort(Object, v13);
    ObfDereferenceObject(Object);
  }
  return v5;
}
