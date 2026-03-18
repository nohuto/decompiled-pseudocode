/*
 * XREFs of _GreDeleteWnd@4 @ 0x1E6F47
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z @ 0x1D7212 (-GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z.c)
 *     _NtGdiEndPage@4 @ 0x1D93FF (_NtGdiEndPage@4.c)
 *     _EngDeleteWnd@4 @ 0x1E6EA9 (_EngDeleteWnd@4.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E3129 (-vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QBEHXZ @ 0x1E6503 (-bValid@EWNDOBJ@@QBEHXZ.c)
 *     ?vDelete@EWNDOBJ@@QAEXXZ @ 0x1E6521 (-vDelete@EWNDOBJ@@QAEXXZ.c)
 */

int __stdcall GreDeleteWnd(EWNDOBJ *a1)
{
  int result; // eax
  int v2; // edi
  EWNDOBJ *v3; // eax
  _DWORD *v4; // ecx
  struct TRACKOBJ *v5; // eax
  _DWORD *v6; // ecx
  EWNDOBJ *v7; // ecx
  int v8; // [esp+Ch] [ebp-3Ch] BYREF
  int v9; // [esp+10h] [ebp-38h] BYREF
  int v10; // [esp+14h] [ebp-34h] BYREF
  _BYTE v11[20]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v12[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  __int16 v13; // [esp+38h] [ebp-10h]

  result = EWNDOBJ::bValid(a1);
  if ( result )
  {
    v2 = *((_DWORD *)a1 + 33);
    v13 = 256;
    v8 = *(_DWORD *)(*(_DWORD *)(v2 + 16) + 28);
    memset(v12, 0, sizeof(v12));
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v11, (struct PDEVOBJ *)&v8);
    v10 = _ghsemWndobj;
    GreAcquireSemaphore(_ghsemWndobj);
    v9 = *((_DWORD *)a1 + 38);
    GreAcquireSemaphore(v9);
    (*(void (__stdcall **)(EWNDOBJ *, int))(v2 + 20))(a1, 32);
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
    v3 = *(EWNDOBJ **)(v2 + 12);
    if ( v3 == a1 )
    {
      *(_DWORD *)(v2 + 12) = *((_DWORD *)a1 + 32);
    }
    else
    {
      while ( v3 )
      {
        v4 = (_DWORD *)((char *)v3 + 128);
        v3 = (EWNDOBJ *)*((_DWORD *)v3 + 32);
        if ( v3 == a1 )
        {
          *v4 = *((_DWORD *)a1 + 32);
          break;
        }
      }
    }
    EWNDOBJ::vDelete(a1);
    *((_DWORD *)a1 + 31) = 0;
    Win32FreePool((PATHOBJ *)a1);
    if ( !*(_DWORD *)(v2 + 12) )
    {
      v5 = gpto;
      if ( (struct TRACKOBJ *)v2 == gpto )
      {
        gpto = *(struct TRACKOBJ **)(v2 + 4);
      }
      else
      {
        while ( v5 )
        {
          v6 = (_DWORD *)((char *)v5 + 4);
          v5 = (struct TRACKOBJ *)*((_DWORD *)v5 + 1);
          if ( v5 == (struct TRACKOBJ *)v2 )
          {
            *v6 = *(_DWORD *)(v2 + 4);
            break;
          }
        }
      }
      v7 = *(EWNDOBJ **)(v2 + 8);
      if ( v7 )
      {
        EWNDOBJ::vDelete(v7);
        *(_DWORD *)(*(_DWORD *)(v2 + 8) + 124) = 0;
        Win32FreePool(*(PATHOBJ **)(v2 + 8));
      }
      *(_DWORD *)v2 = 0;
      Win32FreePool((PATHOBJ *)v2);
    }
    vSpWndobjChange(v8, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v10);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
    if ( v12[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v12);
    return PDEVOBJ::vUnreferencePdev(&v8, 0);
  }
  return result;
}
