/*
 * XREFs of ?bRemoveMergeFont@XDCOBJ@@QAEHU_UNIVERSAL_FONT_ID@@@Z @ 0x211230
 * Callers:
 *     _NtGdiRemoveMergeFont@8 @ 0x1D97B0 (_NtGdiRemoveMergeFont@8.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 */

int __thiscall XDCOBJ::bRemoveMergeFont(void *this, int a2, struct PFT *a3)
{
  int v3; // edi
  PATHOBJ *v4; // esi
  PATHOBJ *v5; // ebx
  FLONG fl; // eax
  unsigned int v7; // ecx
  FLONG v8; // edx
  struct PFT *v9; // edx
  ULONG cCurves; // eax
  unsigned int v13; // [esp+10h] [ebp-8h]
  PATHOBJ *v14; // [esp+14h] [ebp-4h]

  v3 = 0;
  v4 = *(PATHOBJ **)(*(_DWORD *)this + 1816);
  v5 = v4;
  v14 = v4;
  if ( v4 )
  {
    while ( !v3 )
    {
      fl = v4->fl;
      if ( *(_DWORD *)(v4->fl + 84) == a2 && (v7 = 0, (v13 = *(_DWORD *)(fl + 124)) != 0) )
      {
        v8 = fl + 132;
        while ( 1 )
        {
          v5 = v14;
          if ( *(struct PFT **)(*(_DWORD *)v8 + 56) == a3 )
            break;
          ++v7;
          v8 += 4;
          if ( v7 >= v13 )
            goto LABEL_8;
        }
        v3 = 1;
      }
      else
      {
LABEL_8:
        v5 = v4;
        v4 = (PATHOBJ *)v4->cCurves;
        v14 = v5;
      }
      if ( !v4 )
      {
        if ( !v3 )
          return v3;
        break;
      }
    }
    GreAcquireSemaphore(_ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
    v9 = *(struct PFT **)(v4->fl + 80);
    --*(_DWORD *)(v4->fl + 44);
    a3 = v9;
    v3 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&a3, (struct PFF *)v4->fl, 0, v9 == gpPFTPrivate ? 64 : 32);
    if ( v3 )
    {
      cCurves = v4->cCurves;
      if ( v4 == *(PATHOBJ **)(*(_DWORD *)this + 1816) )
        *(_DWORD *)(*(_DWORD *)this + 1816) = cCurves;
      else
        v5->cCurves = cCurves;
      Win32FreePool(v4);
    }
  }
  return v3;
}
