/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJPEFBVCIconicBitmapPending@@I@Z @ 0x1800893D4
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800269B4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CIconicBitmapPending,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 > *(_DWORD *)(a1 + 20) )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x10u, 1, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 24)) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v4;
}
