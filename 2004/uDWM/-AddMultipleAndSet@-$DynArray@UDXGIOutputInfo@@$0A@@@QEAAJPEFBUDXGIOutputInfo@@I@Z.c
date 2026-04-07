/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x18003CA0C
 * Callers:
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18002DAE8 (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<DXGIOutputInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  _OWORD *v7; // r8
  __int128 v8; // xmm1
  int v10; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 > *(_DWORD *)(a1 + 20) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 288LL, 1LL, a2);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
    }
    else
    {
      v5 = 288 * v2;
      v6 = 2LL;
      v7 = (_OWORD *)(*(_QWORD *)a1 + v5);
      do
      {
        *v7 = *a2;
        v7[1] = a2[1];
        v7[2] = a2[2];
        v7[3] = a2[3];
        v7[4] = a2[4];
        v7[5] = a2[5];
        v7[6] = a2[6];
        v7 += 8;
        v8 = a2[7];
        a2 += 8;
        *(v7 - 1) = v8;
        --v6;
      }
      while ( v6 );
      *v7 = *a2;
      v7[1] = a2[1];
      *(_DWORD *)(a1 + 24) = v3;
    }
  }
  return v4;
}
