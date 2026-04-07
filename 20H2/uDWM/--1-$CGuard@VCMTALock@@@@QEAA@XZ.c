/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18004F8DC
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x18003A3E0 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18004E0B0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x18004EE90 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x18004F000 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18004F090 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18004F100 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18004F390 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x18004F7B0 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x18004F850 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180052F40 (-UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800BFF80 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x1800C03A0 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800C0660 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800C0840 (-GetPixelFormatInfo@CBitmapLock@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CMTALock>::~CGuard<CMTALock>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
    *a1 = 0LL;
  }
}
